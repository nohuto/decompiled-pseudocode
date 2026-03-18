/*
 * XREFs of IsUMPD_ldevUnloadImageSupported @ 0x1C009B16C
 * Callers:
 *     hdcOpenDCW @ 0x1C0069E20 (hdcOpenDCW.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00990B0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUMPD_ldevUnloadImageSupported()
{
  if ( qword_1C0257580 )
    return qword_1C0257580();
  else
    return 3221225659LL;
}
