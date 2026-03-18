/*
 * XREFs of IsSetTimerCoalescingToleranceSupported @ 0x1C0070DF0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0070400 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PostWinlogonMessage @ 0x1C0074F10 (PostWinlogonMessage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsSetTimerCoalescingToleranceSupported()
{
  if ( qword_1C0250400 )
    return qword_1C0250400();
  else
    return 3221225659LL;
}
