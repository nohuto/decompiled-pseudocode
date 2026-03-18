/*
 * XREFs of xxxSoundSentry @ 0x1C0152300
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 *     xxxMessageBeep @ 0x1C0152270 (xxxMessageBeep.c)
 *     NtUserSoundSentry @ 0x1C02038B0 (NtUserSoundSentry.c)
 *     xxxOldMessageBeep @ 0x1C0213CF8 (xxxOldMessageBeep.c)
 *     UserBeep @ 0x1C0219828 (UserBeep.c)
 * Callees:
 *     xxxFlashWindow @ 0x1C0019218 (xxxFlashWindow.c)
 *     GetScreenRectForDpi @ 0x1C003DBBC (GetScreenRectForDpi.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     NtGdiPatBlt @ 0x1C00AF630 (NtGdiPatBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     InternalSetTimer @ 0x1C00CCA00 (InternalSetTimer.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     GreTransformPoints @ 0x1C00EC98C (GreTransformPoints.c)
 *     GetPrimaryMonitorRect @ 0x1C0106640 (GetPrimaryMonitorRect.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     GreEnableAppContainerRestriction @ 0x1C0273058 (GreEnableAppContainerRestriction.c)
 */

__int64 __fastcall xxxSoundSentry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v5; // rbx
  signed int v6; // r8d
  __int64 v7; // rax
  HDC v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 DesktopWindow; // rax
  HDC DCEx; // rbx
  __int64 v14; // rcx
  HDC v15; // rcx
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD v25[3]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v26; // [rsp+48h] [rbp-38h] BYREF
  __int128 v27; // [rsp+58h] [rbp-28h] BYREF
  __m128i v28; // [rsp+68h] [rbp-18h] BYREF

  v25[2] = 0LL;
  v28 = 0LL;
  if ( (HIDWORD(gSoundSentry) & 1) == 0 )
  {
    v3 = 50LL;
LABEL_3:
    UserSetLastError(v3, a2, a3);
    return 0LL;
  }
  if ( gpqForeground )
  {
    v5 = *(_QWORD *)(gpqForeground + 120LL);
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
          ghwndSoundSentry = *(HWND *)v5;
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
            v25[0] = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = v25;
            v25[1] = v5;
            HMLockObject(v5);
            xxxFlashWindow(v5, 3u, 0);
            ThreadUnlock1(v23, v22, v24);
            return 1LL;
          case 2:
            if ( (unsigned int)IsWindowDesktopComposed(v5) )
            {
              v28 = *(__m128i *)(*(_QWORD *)(v5 + 40) + 88LL);
              LogicalToPhysicalDPIRect(&v28, &v28, *(unsigned int *)(*(_QWORD *)(v5 + 40) + 288LL), 0LL);
              grcScreenFlash = (struct tagRECT)v28;
              DesktopWindow = GetDesktopWindow(v5);
              DCEx = (HDC)_GetDCEx(DesktopWindow, 0LL, 3LL);
              GreEnableAppContainerRestriction(0LL);
              if ( gdwInAtomicOperation )
              {
                v14 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v14);
              NtGdiPatBlt(
                DCEx,
                v28.m128i_u32[0],
                v28.m128i_i32[1],
                v28.m128i_i32[2] - v28.m128i_i32[0],
                v28.m128i_i32[3] - v28.m128i_i32[1],
                5570569);
              EnterCrit(0LL, 1LL);
              GreEnableAppContainerRestriction(1LL);
              v15 = DCEx;
              goto LABEL_29;
            }
            v17 = _GetDCEx(v5, 0LL, 65537LL);
            v20 = *(_QWORD *)(v5 + 40);
            v8 = (HDC)v17;
            if ( (*(_WORD *)(v20 + 42) & 0x2FFF) == 0x29D )
              v16 = *GetPrimaryMonitorRect(&v27, v20, v18, v19);
            else
              v16 = *(_OWORD *)(v20 + 88);
            v28.m128i_i32[2] = DWORD2(v16) - v16;
            v28.m128i_i32[3] = HIDWORD(v16) - DWORD1(v16);
            v28.m128i_i64[0] = 0LL;
            GreTransformPoints((__int64)v8, (struct _POINTL *)&v28, (struct _POINTL *)&v28, 2, 0);
            GreEnableAppContainerRestriction(0LL);
            goto LABEL_27;
          case 3:
            v7 = GetDesktopWindow(v5);
            v8 = (HDC)_GetDCEx(v7, 0LL, 3LL);
            v28 = *GetScreenRectForDpi(&v26, 0LL, v9, v10);
            GreEnableAppContainerRestriction(0LL);
            if ( (unsigned int)IsWindowDesktopComposed(v5) )
            {
              if ( gdwInAtomicOperation )
              {
                v11 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v11);
              NtGdiPatBlt(
                v8,
                v28.m128i_u32[0],
                v28.m128i_i32[1],
                v28.m128i_i32[2] - v28.m128i_i32[0],
                v28.m128i_i32[3] - v28.m128i_i32[1],
                5570569);
              EnterCrit(0LL, 1LL);
              goto LABEL_28;
            }
LABEL_27:
            NtGdiPatBlt(
              v8,
              v28.m128i_u32[0],
              v28.m128i_i32[1],
              v28.m128i_i32[2] - v28.m128i_i32[0],
              v28.m128i_i32[3] - v28.m128i_i32[1],
              5570569);
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
