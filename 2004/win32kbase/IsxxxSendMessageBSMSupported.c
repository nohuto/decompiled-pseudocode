/*
 * XREFs of IsxxxSendMessageBSMSupported @ 0x1C00C9ED4
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00646C0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C8F0C (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxSendMessageBSMSupported()
{
  if ( qword_1C02523F0 )
    return qword_1C02523F0();
  else
    return 3221225659LL;
}
