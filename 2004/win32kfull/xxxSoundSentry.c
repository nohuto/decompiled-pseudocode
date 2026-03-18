/*
 * XREFs of xxxSoundSentry @ 0x1C014FB00
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 *     xxxMessageBeep @ 0x1C014FA70 (xxxMessageBeep.c)
 *     NtUserSoundSentry @ 0x1C0204720 (NtUserSoundSentry.c)
 *     xxxOldMessageBeep @ 0x1C0214B78 (xxxOldMessageBeep.c)
 *     UserBeep @ 0x1C021A6B8 (UserBeep.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x1C00231F0 (GetScreenRectForDpi.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     NtGdiPatBlt @ 0x1C0084BB0 (NtGdiPatBlt.c)
 *     InternalSetTimer @ 0x1C0089420 (InternalSetTimer.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     GreTransformPoints @ 0x1C00F211C (GreTransformPoints.c)
 *     GetPrimaryMonitorRect @ 0x1C0105720 (GetPrimaryMonitorRect.c)
 *     xxxFlashWindow @ 0x1C0113948 (xxxFlashWindow.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     GreEnableAppContainerRestriction @ 0x1C0274620 (GreEnableAppContainerRestriction.c)
 */

__int64 __fastcall xxxSoundSentry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  unsigned __int64 *v5; // rbx
  signed int v6; // r8d
  __int64 v7; // rax
  HDC v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 DesktopWindow; // rax
  HDC DCEx; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  HDC v15; // rcx
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD v23[3]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v24; // [rsp+48h] [rbp-38h] BYREF
  __int128 v25; // [rsp+58h] [rbp-28h] BYREF
  int v26[4]; // [rsp+68h] [rbp-18h] BYREF

  v23[2] = 0LL;
  *(_OWORD *)v26 = 0LL;
  if ( (HIDWORD(gSoundSentry) & 1) == 0 )
  {
    v3 = 50LL;
LABEL_3:
    UserSetLastError(v3, a2, a3);
    return 0LL;
  }
  if ( gpqForeground )
  {
    v5 = *(unsigned __int64 **)(gpqForeground + 120LL);
    if ( v5 )
    {
      if ( !gtmridSoundSentry )
      {
        if ( (unsigned int)(*((_DWORD *)&gSoundSentry + 8) - 1) <= 2 )
        {
          gdwCurrentEffect = *((_DWORD *)&gSoundSentry + 8);
          v6 = *(_DWORD *)(gpsi + 4984LL);
          if ( v6 < 1 )
            v6 = 1200;
          ghwndSoundSentry = (HWND)*v5;
          gtmridSoundSentry = InternalSetTimer(0LL, 0LL, v6, (__int64)SoundSentryTimer, 0, 20);
          if ( !gtmridSoundSentry )
          {
            v3 = 170LL;
            goto LABEL_3;
          }
        }
        switch ( *((_DWORD *)&gSoundSentry + 8) )
        {
          case 1:
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            v23[0] = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = v23;
            v23[1] = v5;
            HMLockObject(v5);
            xxxFlashWindow(v5, 3u, 0);
            ThreadUnlock1(v21, v20, v22);
            return 1LL;
          case 2:
            if ( (unsigned int)IsWindowDesktopComposed(v5) )
            {
              *(_OWORD *)v26 = *(_OWORD *)(v5[5] + 88);
              LogicalToPhysicalDPIRect(v26, v26, *(unsigned int *)(v5[5] + 288), 0LL);
              grcScreenFlash = *(struct tagRECT *)v26;
              DesktopWindow = GetDesktopWindow((__int64)v5);
              DCEx = (HDC)_GetDCEx(DesktopWindow, 0LL, 3LL);
              GreEnableAppContainerRestriction(0LL);
              if ( gdwInAtomicOperation )
              {
                v13 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v13, gdwInAtomicOperation, v14);
              NtGdiPatBlt(DCEx, (unsigned int)v26[0], v26[1], v26[2] - v26[0], v26[3] - v26[1], 5570569);
              EnterCrit(0LL, 1LL);
              GreEnableAppContainerRestriction(1LL);
              v15 = DCEx;
              goto LABEL_29;
            }
            v17 = _GetDCEx(v5, 0LL, 65537LL);
            v18 = v5[5];
            v8 = (HDC)v17;
            if ( (*(_WORD *)(v18 + 42) & 0x3FFF) == 0x29D )
              v16 = *GetPrimaryMonitorRect(&v25, v18);
            else
              v16 = *(_OWORD *)(v18 + 88);
            v26[2] = DWORD2(v16) - v16;
            v26[3] = HIDWORD(v16) - DWORD1(v16);
            v26[1] = 0;
            v26[0] = 0;
            GreTransformPoints((__int64)v8, (struct _POINTL *)v26, (struct _POINTL *)v26, 2, 0);
            GreEnableAppContainerRestriction(0LL);
            goto LABEL_27;
          case 3:
            v7 = GetDesktopWindow((__int64)v5);
            v8 = (HDC)_GetDCEx(v7, 0LL, 3LL);
            *(__m128i *)v26 = *GetScreenRectForDpi(&v24, 0);
            GreEnableAppContainerRestriction(0LL);
            if ( (unsigned int)IsWindowDesktopComposed(v5) )
            {
              if ( gdwInAtomicOperation )
              {
                v9 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v9, gdwInAtomicOperation, v10);
              NtGdiPatBlt(v8, (unsigned int)v26[0], v26[1], v26[2] - v26[0], v26[3] - v26[1], 5570569);
              EnterCrit(0LL, 1LL);
              goto LABEL_28;
            }
LABEL_27:
            NtGdiPatBlt(v8, (unsigned int)v26[0], v26[1], v26[2] - v26[0], v26[3] - v26[1], 5570569);
LABEL_28:
            GreEnableAppContainerRestriction(1LL);
            v15 = v8;
LABEL_29:
            _ReleaseDC(v15);
            break;
        }
      }
    }
  }
  return 1LL;
}
