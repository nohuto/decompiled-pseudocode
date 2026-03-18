/*
 * XREFs of IsUMPD_ldevUnloadImageSupported @ 0x1C00BD960
 * Callers:
 *     hdcOpenDCW @ 0x1C0079530 (hdcOpenDCW.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00BD990 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUMPD_ldevUnloadImageSupported()
{
  if ( qword_1C02515C0 )
    return qword_1C02515C0();
  else
    return 3221225659LL;
}
