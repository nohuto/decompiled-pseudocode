/*
 * XREFs of ?DelayedInteractivityNotificationTimerExpiredCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180017780
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A2B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CApplication::DelayedInteractivityNotificationTimerExpiredCallback(
        PTP_CALLBACK_INSTANCE Instance,
        _QWORD **Context,
        PTP_TIMER Timer)
{
  int v4; // ebx
  _QWORD *v5; // rcx

  v4 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD **, PTP_TIMER))(*Context[68] + 16LL))(Context[68], Context, Timer);
  if ( v4 < 0 )
  {
    v5 = Context[68];
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 8LL))(v5, 1LL);
  }
  Context[68] = 0LL;
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids, v4);
    }
    AudPolicyLogError("CApplication::DelayedInteractivityNotificationTimerExpiredCallback", 1593, v4);
  }
}
