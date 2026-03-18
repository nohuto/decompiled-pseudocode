/*
 * XREFs of IsPFTOBJ_bUnloadWorkhorseSupported @ 0x1C01FD2AC
 * Callers:
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C008B9DC (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00990B0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsPFTOBJ_bUnloadWorkhorseSupported()
{
  if ( qword_1C02576C0 )
    return qword_1C02576C0();
  else
    return 3221225659LL;
}
