/*
 * XREFs of IsPFTOBJ_bUnloadWorkhorseSupported @ 0x1C01F787C
 * Callers:
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C007FCBC (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00BD990 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsPFTOBJ_bUnloadWorkhorseSupported()
{
  if ( qword_1C0251700 )
    return qword_1C0251700();
  else
    return 3221225659LL;
}
