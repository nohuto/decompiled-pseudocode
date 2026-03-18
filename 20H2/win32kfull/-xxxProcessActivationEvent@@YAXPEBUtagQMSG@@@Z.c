/*
 * XREFs of ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0116BF4
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 * Callees:
 *     _PostMessage @ 0x1C0013FF0 (_PostMessage.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C002BACC (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00BAF3C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C00BB764 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00BCA54 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C00BF2BC (zzzLockWindowUpdate2.c)
 *     xxxCancelTracking @ 0x1C00BF350 (xxxCancelTracking.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C00C25C4 (zzzInputFocusReceivedWindowEvent.c)
 *     zzzActiveCursorTracking @ 0x1C01E2428 (zzzActiveCursorTracking.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxProcessActivationEvent(const struct tagQMSG *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r9d
  __int64 v21; // rsi
  struct tagWND *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // [rsp+40h] [rbp-28h] BYREF
  __int64 v25; // [rsp+48h] [rbp-20h]
  __int64 v26; // [rsp+50h] [rbp-18h]

  if ( *((_DWORD *)a1 + 24) != 6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v26 = 0LL;
  v5 = *((_QWORD *)a1 + 5);
  v6 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( v5 )
  {
    v7 = HMValidateHandleNoSecure(v5, 1);
    v12 = v7;
    if ( !v7 )
      return;
    if ( gptiCurrent != *(_QWORD *)(v7 + 16) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v24 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v24;
    v25 = v12;
    HMLockObject(v12);
    if ( gpqForeground )
    {
      if ( v12 == *(_QWORD *)(v6 + 120) )
      {
        anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v12, v6 == gpqForeground, 0LL);
        if ( v6 == gpqForeground )
        {
          xxxUpdateTray((struct tagWND *)v12);
          if ( (*((_DWORD *)a1 + 6) & 2) == 0 )
            xxxSetWindowPos((struct tagWND *)v12, 0LL, 0LL, 0LL, 0, 0, 3);
        }
      }
      else if ( anonymous_namespace_::xxxLocalActivateWindow(
                  (struct tagWND *)v12,
                  *((_DWORD *)a1 + 8),
                  *((_BYTE *)a1 + 24) & 2 | 0x84) )
      {
        v15 = (unsigned int)gpdwCPUserPreferencesMask;
        if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
          zzzActiveCursorTracking((struct tagWND *)v12);
      }
    }
    else
    {
      xxxSetForegroundWindow2(v12, gptiCurrent, 0);
    }
    if ( (*((_DWORD *)a1 + 6) & 1) != 0 && (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 31LL) & 0x20) != 0 )
      PostMessage(v12, 274, 61728, 0);
    goto LABEL_13;
  }
  xxxCancelTracking();
  CCursorClip::ClearClip(gpCursorClip);
  zzzLockWindowUpdate2(0LL, 1);
  v21 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *((_QWORD *)a1 + 4) )
  {
    v22 = *(struct tagWND **)(v21 + 120);
    if ( v22 )
    {
      if ( v21 == gpqForeground )
      {
        v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v24 = *(_QWORD *)(v23 + 416);
        *(_QWORD *)(v23 + 416) = &v24;
        v25 = (__int64)v22;
        HMLockObject(v22);
        if ( *(_QWORD *)(v21 + 112) )
          zzzInputFocusReceivedWindowEvent();
        anonymous_namespace_::xxxSendNCActivateMessage(v22, 1uLL, 0LL);
        xxxUpdateTray(v22);
        xxxSetWindowPos(v22, 0LL, 0LL, 0LL, 0, 0, 3);
LABEL_13:
        ThreadUnlock1(v15, v14, v16);
        return;
      }
    }
  }
  if ( v21 != gpqForeground )
    anonymous_namespace_::RemoveForegroundActivate(v18, v17, v19, v20);
}
