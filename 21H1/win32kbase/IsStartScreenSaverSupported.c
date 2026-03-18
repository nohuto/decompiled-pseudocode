/*
 * XREFs of IsStartScreenSaverSupported @ 0x1C01FDB04
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C005BCE0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsStartScreenSaverSupported()
{
  if ( qword_1C0258420 )
    return qword_1C0258420();
  else
    return 3221225659LL;
}
