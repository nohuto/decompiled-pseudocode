/*
 * XREFs of IsSetTimerCoalescingToleranceSupported @ 0x1C0063E40
 * Callers:
 *     PostWinlogonMessage @ 0x1C0060510 (PostWinlogonMessage.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00646C0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsSetTimerCoalescingToleranceSupported()
{
  if ( qword_1C0252400 )
    return qword_1C0252400();
  else
    return 3221225659LL;
}
