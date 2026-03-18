/*
 * XREFs of _xxxSoundSentry@0 @ 0x1782B3
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     _NtUserSoundSentry@0 @ 0x16AA91 (_NtUserSoundSentry@0.c)
 *     _xxxMessageBeep@4 @ 0x178F72 (_xxxMessageBeep@4.c)
 *     _xxxOldMessageBeep@0 @ 0x178FE8 (_xxxOldMessageBeep@0.c)
 *     _UserBeep@8 @ 0x17DF0D (_UserBeep@8.c)
 * Callees:
 *     _InternalSetTimer@24 @ 0x2CB62 (_InternalSetTimer@24.c)
 *     _GetScreenRectForDpi@4 @ 0x338F2 (_GetScreenRectForDpi@4.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _NtGdiPatBlt@24 @ 0x56C7C (_NtGdiPatBlt@24.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _GreTransformPoints@20 @ 0x8DA90 (_GreTransformPoints@20.c)
 *     _xxxFlashWindow@12 @ 0xCA4EE (_xxxFlashWindow@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     __GetWindowRect@8 @ 0x1B6E03 (__GetWindowRect@8.c)
 *     _GreEnableAppContainerRestriction@4 @ 0x1D12C8 (_GreEnableAppContainerRestriction@4.c)
 */

int __stdcall xxxSoundSentry()
{
  int v0; // ecx
  int v2; // ebx
  signed int v3; // ecx
  struct tagHOOK *v4; // eax
  int v5; // eax
  int v6; // edx
  struct _POINTL *ScreenRectForDpi; // eax
  HDC DCEx; // esi
  LONG *v9; // esi
  int DesktopWindow; // eax
  HDC v11; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v14; // [esp+10h] [ebp-38h]
  HDC v15; // [esp+10h] [ebp-38h]
  _DWORD v16[3]; // [esp+14h] [ebp-34h] BYREF
  INT v17[5]; // [esp+20h] [ebp-28h] BYREF
  struct _POINTL v18; // [esp+34h] [ebp-14h] BYREF
  LONG x; // [esp+3Ch] [ebp-Ch]
  LONG y; // [esp+40h] [ebp-8h]

  v18.x = 0;
  v16[2] = 0;
  v18.y = 0;
  x = 0;
  y = 0;
  if ( (*(_BYTE *)(&_gSoundSentry + 1) & 1) == 0 )
  {
    v0 = 50;
LABEL_3:
    UserSetLastError((struct _NT_TIB *)v0);
    return 0;
  }
  if ( _gpqForeground )
  {
    v2 = *(_DWORD *)(_gpqForeground + 64);
    v14 = v2;
    if ( v2 )
    {
      if ( !gtmridSoundSentry )
      {
        if ( (unsigned int)(*((_DWORD *)&_gSoundSentry + 8) - 1) <= 2 )
        {
          v3 = *(_DWORD *)(_gpsi + 4452);
          if ( v3 < 1 )
            v3 = 1200;
          v4 = *(struct tagHOOK **)v2;
          gdwCurrentEffect = *((_DWORD *)&_gSoundSentry + 8);
          ghwndSoundSentry = (HWND)v4;
          gtmridSoundSentry = InternalSetTimer(0, 0, v3, (int)SoundSentryTimer, 0, 20);
          if ( !gtmridSoundSentry )
          {
            v0 = 170;
            goto LABEL_3;
          }
        }
        switch ( *((_DWORD *)&_gSoundSentry + 8) )
        {
          case 1:
            CurrentThread = KeGetCurrentThread();
            ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
            v16[0] = *(_DWORD *)(ThreadWin32Thread + 228);
            *(_DWORD *)(ThreadWin32Thread + 228) = v16;
            v16[1] = v2;
            HMLockObject(v2);
            xxxFlashWindow((struct tagHOOK **)v2, 3, 0);
            ThreadUnlock1();
            break;
          case 2:
            if ( IsWindowDesktopComposed(v2) )
            {
              v9 = (LONG *)(*(_DWORD *)(v2 + 20) + 52);
              v18.x = *v9++;
              v18.y = *v9++;
              x = *v9;
              y = v9[1];
              LogicalToPhysicalDPIRect(&v18, &v18, *(_DWORD *)(*(_DWORD *)(v2 + 20) + 184), 0);
              *(struct _POINTL *)&grcScreenFlash.left = v18;
              grcScreenFlash.right = x;
              grcScreenFlash.bottom = y;
              DesktopWindow = _GetDesktopWindow((_DWORD *)v2);
              DCEx = (HDC)_GetDCEx(DesktopWindow, 0, 3);
              GreEnableAppContainerRestriction(0);
              if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
              UserSessionSwitchLeaveCrit();
              NtGdiPatBlt(DCEx, v18.x, (struct XDCOBJ *)v18.y, x - v18.x, y - v18.y, (struct EXFORMOBJ *)0x550009);
              EnterCrit(0, 1);
              goto LABEL_26;
            }
            v11 = (HDC)_GetDCEx(v2, 0, 65537);
            _GetWindowRect(v14, &v18);
            x -= v18.x;
            v18.x = 0;
            y -= v18.y;
            v18.y = 0;
            GreTransformPoints((int)v11, &v18, &v18, 2, 0);
            GreEnableAppContainerRestriction(0);
            NtGdiPatBlt(v11, v18.x, (struct XDCOBJ *)v18.y, x - v18.x, y - v18.y, (struct EXFORMOBJ *)0x550009);
            GreEnableAppContainerRestriction(1);
            _ReleaseDC(v11);
            break;
          case 3:
            v5 = _GetDesktopWindow((_DWORD *)v2);
            v15 = (HDC)_GetDCEx(v5, 0, 3);
            ScreenRectForDpi = (struct _POINTL *)GetScreenRectForDpi(0, v6, v17);
            v18 = *ScreenRectForDpi;
            x = ScreenRectForDpi[1].x;
            y = ScreenRectForDpi[1].y;
            GreEnableAppContainerRestriction(0);
            if ( IsWindowDesktopComposed(v2) )
            {
              if ( _gdwInAtomicOperation )
              {
                if ( (_gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
              }
              UserSessionSwitchLeaveCrit();
              DCEx = v15;
              NtGdiPatBlt(v15, v18.x, (struct XDCOBJ *)v18.y, x - v18.x, y - v18.y, (struct EXFORMOBJ *)0x550009);
              EnterCrit(0, 1);
            }
            else
            {
              DCEx = v15;
              NtGdiPatBlt(v15, v18.x, (struct XDCOBJ *)v18.y, x - v18.x, y - v18.y, (struct EXFORMOBJ *)0x550009);
            }
LABEL_26:
            GreEnableAppContainerRestriction(1);
            _ReleaseDC(DCEx);
            break;
        }
      }
    }
  }
  return 1;
}
