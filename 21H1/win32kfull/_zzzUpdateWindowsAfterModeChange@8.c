/*
 * XREFs of _zzzUpdateWindowsAfterModeChange@8 @ 0x9B978
 * Callers:
 *     _zzzResetSharedDesktops@12 @ 0x9B7CA (_zzzResetSharedDesktops@12.c)
 * Callees:
 *     _DeleteOrSetRedirectionBitmap@12 @ 0x20636 (_DeleteOrSetRedirectionBitmap@12.c)
 *     _RecreateRedirectionBitmap@24 @ 0x23D22 (_RecreateRedirectionBitmap@24.c)
 *     _UpdateMonitorForWindowAndChildren@16 @ 0x2A86E (_UpdateMonitorForWindowAndChildren@16.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _GetRedirectionBitmap@4 @ 0x30300 (_GetRedirectionBitmap@4.c)
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 *     _zzzLockDisplayAreaAndInvalidateDCCache@12 @ 0x3536C (_zzzLockDisplayAreaAndInvalidateDCCache@12.c)
 *     _GetNewMonitor@12 @ 0x355FC (_GetNewMonitor@12.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _IsDesktopWindow@4 @ 0x72F74 (_IsDesktopWindow@4.c)
 *     _GreIsReusedDeviceDependentBitmap@4 @ 0x9BB72 (_GreIsReusedDeviceDependentBitmap@4.c)
 *     ?RestoreOldRedirectionBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@@Z @ 0x1534DB (-RestoreOldRedirectionBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@@Z.c)
 *     _GreGetBitmapDpiScaleValue@4 @ 0x1FD33D (_GreGetBitmapDpiScaleValue@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzUpdateWindowsAfterModeChange(int a1, int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebx
  _DWORD **v4; // eax
  _DWORD *v5; // edi
  int IsTopLevelWindow; // eax
  int v7; // ecx
  struct tagMONITOR *NewMonitor; // eax
  int v9; // eax
  int v10; // ebx
  int RedirectionBitmap; // eax
  int v12; // eax
  BOOL v13; // eax
  PKTHREAD CurrentThread; // eax
  PKTHREAD v15; // eax
  PKTHREAD v16; // eax
  int v17; // eax
  __int16 v18; // si
  bool v19; // zf
  struct tagWND *v20; // [esp+0h] [ebp-38h]
  HBITMAP v21; // [esp+4h] [ebp-34h]
  _BYTE v22[8]; // [esp+10h] [ebp-28h] BYREF
  BOOL v23; // [esp+18h] [ebp-20h]
  int v24; // [esp+1Ch] [ebp-1Ch]
  int v25; // [esp+20h] [ebp-18h]
  unsigned int v26; // [esp+24h] [ebp-14h]
  int v27; // [esp+28h] [ebp-10h]
  unsigned int v28; // [esp+2Ch] [ebp-Ch]
  HSURF v29; // [esp+30h] [ebp-8h] BYREF
  _DWORD **v30; // [esp+34h] [ebp-4h]

  ++_gdwDeferWinEvent;
  v27 = a2;
  v25 = a1;
  GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  v2 = _gSharedInfo[1];
  v26 = v2;
  v28 = v2 + 16 * _giheLast;
  v30 = (_DWORD **)_gpKernelHandleTable;
  v3 = v28;
  if ( v2 <= v28 )
  {
    v4 = v30;
    while ( 1 )
    {
      v29 = 0;
      if ( *(_BYTE *)(v2 + 12) == 1 )
        break;
LABEL_4:
      v2 += 16;
      v4 += 3;
      v26 = v2;
      v30 = v4;
      if ( v2 > v3 )
        goto LABEL_5;
    }
    v5 = *v4;
    IsTopLevelWindow = _IsTopLevelWindow(*v4);
    if ( IsTopLevelWindow )
      goto LABEL_10;
    v7 = v5[3];
    if ( v7 )
      IsTopLevelWindow = *(_DWORD *)(v7 + 52);
    if ( v5[14] == IsTopLevelWindow )
    {
LABEL_10:
      NewMonitor = (struct tagMONITOR *)ValidateHmonitorNoRip(*(_DWORD *)(v5[5] + 164));
      if ( !NewMonitor )
        NewMonitor = GetNewMonitor((int)v5, 0, 0);
      UpdateMonitorForWindowAndChildren((int)v5, (int)NewMonitor, 0, 0);
    }
    v9 = v5[5];
    if ( (*(_BYTE *)(v9 + 19) & 0x20) == 0 || (*(_BYTE *)(v9 + 18) & 0x20) != 0 || !v25 && !IsWindowDesktopComposed(v5) )
    {
LABEL_14:
      v4 = v30;
      goto LABEL_4;
    }
    *(_DWORD *)(v5[5] + 144) &= ~0x80000u;
    v10 = GetRedirectionBitmap((int)v5) == 0;
    RedirectionBitmap = GetRedirectionBitmap((int)v5);
    if ( GreIsReusedDeviceDependentBitmap(RedirectionBitmap) )
    {
      v12 = 1;
      v27 = 1;
    }
    else
    {
      v12 = v27;
    }
    v24 = RecreateRedirectionBitmap((int)v5, 0, 0, v12, 0, &v29);
    v13 = IsDesktopWindow(v5);
    v23 = v13;
    if ( v29 )
    {
      if ( !v13 && v24 < 0 && (*(_BYTE *)(v5[5] + 144) & 0x20) != 0 && RestoreOldRedirectionBitmap(v20, v21) )
      {
LABEL_22:
        if ( !v10 )
        {
LABEL_23:
          v3 = v28;
          goto LABEL_14;
        }
LABEL_31:
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v22);
        zzzLockDisplayAreaAndInvalidateDCCache((int)v5, 0, 0);
        if ( v10 )
          xxxInternalInvalidate((int)v5, 1, 1025);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v22);
        goto LABEL_23;
      }
      CurrentThread = KeGetCurrentThread();
      if ( W32GetThreadWin32Thread(CurrentThread) )
      {
        v15 = KeGetCurrentThread();
        if ( *(_DWORD *)(W32GetThreadWin32Thread(v15) + 248) )
        {
          v16 = KeGetCurrentThread();
          if ( (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(W32GetThreadWin32Thread(v16) + 248) + 4) + 32) & 1) != 0 )
          {
            v17 = *(_DWORD *)(v5[5] + 184);
            if ( (v17 & 0xF) == 0 && (v17 & 0x40000000) != 0 )
            {
              v18 = 96 * GreGetBitmapDpiScaleValue(v29);
              v19 = v18 == (__int16)GreGetScaledLogPixels(*(unsigned __int16 *)(v5[5] + 180));
              v2 = v26;
              v10 |= !v19;
            }
          }
        }
      }
      DeleteOrSetRedirectionBitmap((int)v5, v29, 1);
      v13 = v23;
    }
    if ( v13 )
      goto LABEL_31;
    goto LABEL_22;
  }
LABEL_5:
  GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  zzzEndDeferWinEventNotify();
}
