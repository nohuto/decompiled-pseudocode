/*
 * XREFs of _xxxDwmStopRedirection@4 @ 0xCEE26
 * Callers:
 *     _NtUserDwmKernelShutdown@0 @ 0x1612DF (_NtUserDwmKernelShutdown@0.c)
 * Callees:
 *     _DeleteOrSetRedirectionBitmap@12 @ 0x20636 (_DeleteOrSetRedirectionBitmap@12.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _xxxRedrawWindow@16 @ 0x3332A (_xxxRedrawWindow@16.c)
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 *     _bSetDevDragRect@16 @ 0xB08E8 (_bSetDevDragRect@16.c)
 *     _GreDwmUseDeviceBitmaps@0 @ 0xCEFCA (_GreDwmUseDeviceBitmaps@0.c)
 *     _DwmAsyncDesktopFree@8 @ 0xCEFDE (_DwmAsyncDesktopFree@8.c)
 *     _zzzDecomposeDesktop@8 @ 0xCF042 (_zzzDecomposeDesktop@8.c)
 *     _GreDwmShutdown@4 @ 0xCF60A (_GreDwmShutdown@4.c)
 *     _DwmNotifyChildrenAddRemove@8 @ 0xE1756 (_DwmNotifyChildrenAddRemove@8.c)
 *     _ChangeComposableCursor@4 @ 0x143332 (_ChangeComposableCursor@4.c)
 *     _StopFade@0 @ 0x1538B2 (_StopFade@0.c)
 *     _GreDxDwmShutdown@0 @ 0x1D4492 (_GreDxDwmShutdown@0.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall xxxDwmStopRedirection(int a1)
{
  int v1; // esi
  int v2; // edi
  int v3; // ebx
  void *v4; // eax
  HSURF v5; // edx
  int i; // esi
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v11; // [esp+0h] [ebp-20h]
  int v12; // [esp+4h] [ebp-1Ch]
  int v13; // [esp+4h] [ebp-1Ch]
  _BYTE v14[4]; // [esp+14h] [ebp-Ch] BYREF
  int v15; // [esp+18h] [ebp-8h]
  _DWORD var4[2]; // [esp+1Ch] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+24h] [ebp+4h]

  v1 = *(_DWORD *)(PsGetCurrentProcessWin32Process() + 356);
  if ( !IsDwmApiPortRegistered() || (*(_DWORD *)(v1 + 32) & 0x204) != 0x200 )
    return -1073741790;
  ++_gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
  v2 = 0;
  if ( *(_DWORD *)&_gfade[8] )
    StopFade();
  bSetDevDragRect(*(_DWORD **)(_gpDispInfo + 20), 0, 0, 0);
  if ( gbScreenCaptureSoftwareCursorEnabled )
  {
    ChangeComposableCursor(0);
    gbScreenCaptureSoftwareCursorEnabled = 0;
  }
  if ( _grpdeskRitInput )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(_grpdeskRitInput + 20) + 8);
    if ( v3 )
    {
      do
      {
        if ( (*(_BYTE *)(**(_DWORD **)(v3 + 4) + 32) & 1) != 0 )
        {
          zzzDecomposeDesktop(v3, a1);
          DwmNotifyChildrenAddRemove(v3, 0, v11, v12);
          v4 = (void *)ReferenceDwmApiPort();
          DwmAsyncDesktopFree(v4);
        }
        v3 = *(_DWORD *)(v3 + 16);
      }
      while ( v3 );
      v1 = v15;
    }
    v5 = *(HSURF *)(v1 + 60);
    if ( v5 )
      DeleteOrSetRedirectionBitmap(*(_DWORD *)(*(_DWORD *)(_grpdeskRitInput + 4) + 12), v5, 1);
  }
  GreDwmShutdown(*(_DWORD *)(_gpDispInfo + 20));
  *(_DWORD *)(v1 + 32) &= ~0x200u;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)var4);
  zzzEndDeferWinEventNotify();
  if ( UserIsWddmConnectedSession() )
  {
    if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
    UserSessionSwitchLeaveCrit();
    GreDxDwmShutdown();
    EnterCrit(0, 1);
  }
  if ( _grpdeskRitInput )
  {
    for ( i = *(_DWORD *)(*(_DWORD *)(_grpdeskRitInput + 20) + 8); i; i = *(_DWORD *)(i + 16) )
    {
      if ( (*(_BYTE *)(i + 24) & 8) == 0 )
      {
        v7 = *(_DWORD *)(i + 4);
        v8 = *(_DWORD *)(v7 + 12);
        if ( v8 )
        {
          retaddr = 0;
          v13 = *(_DWORD *)(v7 + 12);
          var4[0] = *(_DWORD *)(_gptiCurrent + 228);
          *(_DWORD *)(_gptiCurrent + 228) = var4;
          var4[1] = v8;
          HMLockObject(v13);
          v9 = GreDwmUseDeviceBitmaps();
          xxxRedrawWindow(v8, 0, 0, v9 != 0 ? 645 : 66181);
          ThreadUnlock1();
        }
      }
    }
  }
  return v2;
}
