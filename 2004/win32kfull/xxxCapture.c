/*
 * XREFs of xxxCapture @ 0x1C0035FA8
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C0032AD4 (xxxMakeWindowForegroundWithState.c)
 *     xxxReleaseCapture @ 0x1C00359E0 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C0035F20 (xxxSetCapture.c)
 *     xxxOldNextWindow @ 0x1C01F524C (xxxOldNextWindow.c)
 *     xxxCancelTrackingForThread @ 0x1C0211E40 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C02132C4 (xxxMoveSize.c)
 *     xxxMNSetCapture @ 0x1C023BE44 (xxxMNSetCapture.c)
 *     xxxSBTrackInit @ 0x1C02469C0 (xxxSBTrackInit.c)
 *     xxxHelpLoop @ 0x1C025120C (xxxHelpLoop.c)
 * Callees:
 *     LockCaptureWindow @ 0x1C0036324 (LockCaptureWindow.c)
 *     ?SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z @ 0x1C00363E4 (-SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z.c)
 *     xxxSendMessageCallback @ 0x1C0036784 (xxxSendMessageCallback.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00581CC (xxxCancelMouseMoveTracking.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006D19C (zzzEndDeferWinEventNotify.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C008FE54 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     IsMiPEnabledForThread @ 0x1C00B2EC0 (IsMiPEnabledForThread.c)
 *     IsMiPEnabledForWindow @ 0x1C01E23D8 (IsMiPEnabledForWindow.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCapture(__int64 a1, struct tagWND *a2, int a3)
{
  int v3; // ebx
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r9
  int *v12; // rdx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // r15
  __int64 v16; // rbx
  unsigned int v17; // ebx
  unsigned int v18; // ecx
  __int64 v19; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 result; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int128 v29; // [rsp+50h] [rbp-68h]
  __int128 v30; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v31[4]; // [rsp+70h] [rbp-48h] BYREF
  char v32; // [rsp+C0h] [rbp+8h] BYREF

  v3 = a3;
  v6 = 0LL;
  if ( a3 == 6 )
  {
    *(_QWORD *)&v29 = gspwndInternalCapture;
    *((_QWORD *)&v29 + 1) = a2;
    v30 = v29;
    HMAssignmentLock(&v30);
    InputTraceLogging::Mouse::SetCapture(*(const struct tagQ **)(a1 + 424), a2, 1);
    v3 = 2;
  }
  if ( !v3 && gspwndInternalCapture && a1 == *(_QWORD *)(gspwndInternalCapture + 16LL) )
  {
    HMAssignmentUnlock(gspwndInternalCapture);
    InputTraceLogging::Mouse::SetCapture(*(const struct tagQ **)(a1 + 424), 0LL, 1);
  }
  v7 = *(_QWORD *)(a1 + 424);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 448);
    if ( (*(_DWORD *)(v8 + 48) & 0xC0) != 0 && *(_DWORD *)(v8 + 192) == 1 )
    {
      if ( (v9 = *(__int64 **)(v8 + 184), v9 == (__int64 *)a2) && v3 != 2
        || v9 == *(__int64 **)(v7 + 104) && *(_DWORD *)(v7 + 148) != 2 )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v32);
        xxxCancelMouseMoveTracking(
          *(unsigned int *)(v8 + 48),
          *(_QWORD *)(v8 + 184),
          *(unsigned int *)(v8 + 192),
          192LL);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v32);
      }
    }
    v10 = LockCaptureWindow((struct tagQ *)v7, a2);
    *(_DWORD *)(v7 + 148) = v3;
    v6 = v10;
    if ( a2 )
    {
      if ( (unsigned int)IsMiPEnabledForThread(*((_QWORD *)a2 + 2)) )
      {
        if ( !(unsigned int)IsMiPEnabledForWindow(a2) )
        {
          v12 = *(int **)(v11 + 1272);
          if ( v12 )
          {
            v13 = *v12;
            v14 = 4;
            if ( (*v12 & 4) == 0 && (v13 & 2) == 0 && (v13 & 0x10) == 0 && (v13 & 1) != 0 )
            {
              if ( (v13 & 0x20) == 0 && (v12[9] & 0x1F0) == 0 )
                v14 = 2;
              *v12 = v14 | v13;
              **(_DWORD **)(v11 + 1272) &= ~0x10u;
            }
          }
        }
      }
    }
  }
  ++gdwDeferWinEvent;
  if ( !a2 )
  {
    if ( !v6 )
      return zzzEndDeferWinEventNotify();
    v15 = *(_QWORD *)(v6 + 16);
    if ( (*(_QWORD *)(v15 + 640) & 0x1000000000000000LL) != 0 )
    {
      v16 = *(_QWORD *)(v15 + 424);
      *(_DWORD *)(v16 + 388) |= 0x20u;
      SetSystemInputSource(v16 + 420);
      WakeSomeone((struct tagQ *)v16, (struct tagTHREADINFO *)v15, 0x200u, 0LL);
    }
    GenerateMouseMove(0LL);
  }
  v17 = 3;
  if ( v6 )
  {
    v18 = 3;
    if ( !gdwDeferWinEvent )
      v18 = 1;
    xxxWindowEvent(9u, v18);
  }
  if ( a2 )
  {
    if ( !gdwDeferWinEvent )
      v17 = 1;
    xxxWindowEvent(8u, v17);
  }
  if ( !v6 )
    return zzzEndDeferWinEventNotify();
  v19 = *(_QWORD *)(v6 + 40);
  if ( (*(_BYTE *)(v19 + 21) & 2) == 0 || *(__int16 *)(v19 + 42) < 0 )
    return zzzEndDeferWinEventNotify();
  v31[2] = 0LL;
  if ( *(_QWORD *)(a1 + 600) && a2 )
    *(_DWORD *)(v7 + 388) |= 0x100000u;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v31[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v31;
  v31[1] = v6;
  HMLockObject(v6);
  zzzEndDeferWinEventNotify();
  LODWORD(v21) = 0;
  if ( a2 )
    v21 = *(_QWORD *)a2;
  xxxSendMessageCallback(v6, 533, 0, v21, 0LL, 0LL, 0, 0, 1);
  result = ThreadUnlock1(v23, v22, v24);
  v28 = *(_QWORD *)(a1 + 424);
  if ( !v28 )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26);
  *(_DWORD *)(v28 + 388) &= ~0x100000u;
  return result;
}
