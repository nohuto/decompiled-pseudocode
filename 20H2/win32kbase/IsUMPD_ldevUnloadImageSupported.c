/*
 * XREFs of IsUMPD_ldevUnloadImageSupported @ 0x1C001A8EC
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00189F0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     hdcOpenDCW @ 0x1C005DDD0 (hdcOpenDCW.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUMPD_ldevUnloadImageSupported()
{
  if ( qword_1C024F5C0 )
    return qword_1C024F5C0();
  else
    return 3221225659LL;
}
