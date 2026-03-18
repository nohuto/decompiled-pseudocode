/*
 * XREFs of IsStartScreenSaverSupported @ 0x1C01F80D4
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00646C0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsStartScreenSaverSupported()
{
  if ( qword_1C0252460 )
    return qword_1C0252460();
  else
    return 3221225659LL;
}
