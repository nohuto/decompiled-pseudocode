/*
 * XREFs of IsSetTimerCoalescingToleranceSupported @ 0x1C0059C20
 * Callers:
 *     PostWinlogonMessage @ 0x1C0052F60 (PostWinlogonMessage.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C005BCE0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsSetTimerCoalescingToleranceSupported()
{
  if ( qword_1C02583C0 )
    return qword_1C02583C0();
  else
    return 3221225659LL;
}
