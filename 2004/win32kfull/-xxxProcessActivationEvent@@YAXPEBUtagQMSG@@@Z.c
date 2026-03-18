/*
 * XREFs of ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0115664
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 * Callees:
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C002C684 (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     xxxCancelTracking @ 0x1C003126C (xxxCancelTracking.c)
 *     zzzLockWindowUpdate2 @ 0x1C0031334 (zzzLockWindowUpdate2.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0031F54 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C003277C (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00328D0 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0035154 (zzzInputFocusReceivedWindowEvent.c)
 *     _PostMessage @ 0x1C0058410 (_PostMessage.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     zzzActiveCursorTracking @ 0x1C01E30E8 (zzzActiveCursorTracking.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxProcessActivationEvent(const struct tagQMSG *a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  struct tagWND *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // [rsp+40h] [rbp-28h] BYREF
  __int64 v21; // [rsp+48h] [rbp-20h]
  __int64 v22; // [rsp+50h] [rbp-18h]

  if ( *((_DWORD *)a1 + 24) != 6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v22 = 0LL;
  v3 = *((_QWORD *)a1 + 5);
  v4 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( v3 )
  {
    v5 = HMValidateHandleNoSecure(v3, 1);
    v8 = v5;
    if ( !v5 )
      return;
    if ( gptiCurrent != *(_QWORD *)(v5 + 16) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v20 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v20;
    v21 = v8;
    HMLockObject(v8);
    if ( gpqForeground )
    {
      if ( v8 == *(_QWORD *)(v4 + 120) )
      {
        anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v8, v4 == gpqForeground, 0LL);
        if ( v4 == gpqForeground )
        {
          xxxUpdateTray((struct tagWND *)v8);
          if ( (*((_DWORD *)a1 + 6) & 2) == 0 )
            xxxSetWindowPos((struct tagWND *)v8, 0LL, 0LL, 0LL, 0, 0, 3);
        }
      }
      else if ( anonymous_namespace_::xxxLocalActivateWindow(
                  (struct tagWND *)v8,
                  *((_DWORD *)a1 + 8),
                  *((_BYTE *)a1 + 24) & 2 | 0x84) )
      {
        v11 = (unsigned int)gpdwCPUserPreferencesMask;
        if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
          zzzActiveCursorTracking(v8);
      }
    }
    else
    {
      xxxSetForegroundWindow2(v8, gptiCurrent, 0);
    }
    if ( (*((_DWORD *)a1 + 6) & 1) != 0 && (*(_BYTE *)(*(_QWORD *)(v8 + 40) + 31LL) & 0x20) != 0 )
      PostMessage(v8, 274, 61728, 0);
    goto LABEL_13;
  }
  xxxCancelTracking();
  CCursorClip::ClearClip(gpCursorClip);
  zzzLockWindowUpdate2(0LL, 1);
  v17 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *((_QWORD *)a1 + 4) )
  {
    v18 = *(struct tagWND **)(v17 + 120);
    if ( v18 )
    {
      if ( v17 == gpqForeground )
      {
        v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v20 = *(_QWORD *)(v19 + 408);
        *(_QWORD *)(v19 + 408) = &v20;
        v21 = (__int64)v18;
        HMLockObject(v18);
        if ( *(_QWORD *)(v17 + 112) )
          zzzInputFocusReceivedWindowEvent();
        anonymous_namespace_::xxxSendNCActivateMessage(v18, 1LL, 0LL);
        xxxUpdateTray(v18);
        xxxSetWindowPos(v18, 0LL, 0LL, 0LL, 0, 0, 3);
LABEL_13:
        ThreadUnlock1(v11, v10, v12);
        return;
      }
    }
  }
  if ( v17 != gpqForeground )
    anonymous_namespace_::RemoveForegroundActivate(v14, v13, v15, v16);
}
