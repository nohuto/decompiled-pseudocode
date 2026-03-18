/*
 * XREFs of IsStartScreenSaverSupported @ 0x1C01F67A4
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0070400 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsStartScreenSaverSupported()
{
  if ( qword_1C0250460 )
    return qword_1C0250460();
  else
    return 3221225659LL;
}
