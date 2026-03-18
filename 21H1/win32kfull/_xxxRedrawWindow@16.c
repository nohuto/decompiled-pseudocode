/*
 * XREFs of _xxxRedrawWindow@16 @ 0x3332A
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z @ 0x16172 (-xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z.c)
 *     _xxxMakeWindowForegroundWithState@8 @ 0x1A5E4 (_xxxMakeWindowForegroundWithState@8.c)
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 *     _xxxScrollWindowEx@32 @ 0x2B61E (_xxxScrollWindowEx@32.c)
 *     _xxxSetWindowPosAndBand@32 @ 0x33008 (_xxxSetWindowPosAndBand@32.c)
 *     _NtUserInvalidateRect@12 @ 0x330E8 (_NtUserInvalidateRect@12.c)
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _NtUserRedrawWindow@16 @ 0x9C958 (_NtUserRedrawWindow@16.c)
 *     _xxxValidateRect@8 @ 0xAD504 (_xxxValidateRect@8.c)
 *     _xxxValidateRgn@8 @ 0xC499A (_xxxValidateRgn@8.c)
 *     _xxxDwmStopRedirection@4 @ 0xCEE26 (_xxxDwmStopRedirection@4.c)
 *     _xxxUserResetDisplayDevice@0 @ 0xD38BE (_xxxUserResetDisplayDevice@0.c)
 *     _NtUserInvalidateRgn@12 @ 0xE3A1A (_NtUserInvalidateRgn@12.c)
 *     __DwmLockScreenUpdates@4 @ 0xEC08E (__DwmLockScreenUpdates@4.c)
 *     ?xxxHideGhostWindow@@YGXPAUtagWND@@0@Z @ 0x16FE15 (-xxxHideGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     ?SoundSentryTimer@@YGXPAUtagWND@@IIJ@Z @ 0x178139 (-SoundSentryTimer@@YGXPAUtagWND@@IIJ@Z.c)
 *     _RemoteRedrawRectangle@4 @ 0x1814F1 (_RemoteRedrawRectangle@4.c)
 *     _xxxInvalidateRect@12 @ 0x1965AB (_xxxInvalidateRect@12.c)
 *     _xxxMinimizeHungWindow@4 @ 0x19E29E (_xxxMinimizeHungWindow@4.c)
 * Callees:
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _MirrorRegion@12 @ 0x9CC70 (_MirrorRegion@12.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     _MirrorClientRect@8 @ 0x1B6E50 (_MirrorClientRect@8.c)
 */

int __fastcall xxxRedrawWindow(int a1, _DWORD *a2, int a3, int a4)
{
  int v4; // esi
  int v5; // ecx
  int v6; // edi
  char v7; // al
  int v8; // edi
  int v9; // ebx
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int *ThreadWin32Thread; // eax
  _DWORD v15[3]; // [esp+10h] [ebp-10h] BYREF
  _DWORD *v16; // [esp+1Ch] [ebp-4h]
  PKTHREAD CurrentThread; // [esp+28h] [ebp+8h]

  v4 = a1;
  v16 = a2;
  if ( !a1 )
    v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 248) + 4) + 12);
  v5 = v4;
  if ( v4 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v5 + 20);
      v7 = *(_BYTE *)(v6 + 23);
      if ( (v7 & 0x10) == 0 || (v7 & 0x20) != 0 && v5 != v4 )
        break;
      if ( (*(_WORD *)(v6 + 30) & 0x3FFF) != 0x29D )
      {
        v5 = *(_DWORD *)(v5 + 56);
        if ( v5 )
          continue;
      }
      goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    v8 = a3;
    v9 = 0;
    v15[2] = 0;
    if ( (a4 & 9) != 0 )
    {
      if ( a3 )
      {
        if ( a3 != 1 )
        {
          GreCombineRgn(_ghrgnInv0, a3, 0, 5);
          MirrorRegion(v4, _ghrgnInv0, 1);
          v8 = _ghrgnInv0;
        }
        if ( v4 != _GetDesktopWindow(v4) )
          GreOffsetRgn(v8, *(_DWORD *)(*(_DWORD *)(v4 + 20) + 68), *(_DWORD *)(*(_DWORD *)(v4 + 20) + 72));
      }
      else if ( a2 )
      {
        v8 = _ghrgnInv0;
        if ( (*(_BYTE *)(*(_DWORD *)(v4 + 20) + 18) & 0x40) != 0 )
          MirrorClientRect(v4);
        v10 = *(_DWORD *)(v4 + 12);
        v11 = 0;
        if ( v10 )
        {
          v12 = *(_DWORD *)(v10 + 4);
          if ( v12 )
            v11 = *(_DWORD *)(v12 + 12);
        }
        if ( v4 == v11 )
          SetRectRgnIndirect(_ghrgnInv0, a2);
        else
          GreSetRectRgn(
            _ghrgnInv0,
            *(_DWORD *)(*(_DWORD *)(v4 + 20) + 68) + *v16,
            *(_DWORD *)(*(_DWORD *)(v4 + 20) + 72) + v16[1],
            *(_DWORD *)(*(_DWORD *)(v4 + 20) + 68) + v16[2],
            *(_DWORD *)(*(_DWORD *)(v4 + 20) + 72) + v16[3]);
      }
      else
      {
        v8 = 1;
      }
    }
    CurrentThread = KeGetCurrentThread();
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v9 = *ThreadWin32Thread;
    }
    v15[0] = *(_DWORD *)(v9 + 228);
    *(_DWORD *)(v9 + 228) = v15;
    v15[1] = v4;
    if ( v4 )
      HMLockObject(v4);
    xxxInternalInvalidate(v4, v8, a4 | 0x1000);
    ThreadUnlock1();
  }
  return 1;
}
