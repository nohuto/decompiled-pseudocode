/*
 * XREFs of IsPFTOBJ_bUnloadWorkhorseSupported @ 0x1C01F5F4C
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00189F0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C004BE7C (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsPFTOBJ_bUnloadWorkhorseSupported()
{
  if ( qword_1C024F700 )
    return qword_1C024F700();
  else
    return 3221225659LL;
}
