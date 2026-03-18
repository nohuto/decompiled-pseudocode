/*
 * XREFs of IopFreeCopyObjectsFromIrp @ 0x1404182AC
 * Callers:
 *     IopFreeIrpExtension @ 0x14020B888 (IopFreeIrpExtension.c)
 *     IoReuseIrp @ 0x14020BE20 (IoReuseIrp.c)
 * Callees:
 *     IopIrpHasExtensionType @ 0x14020C0F0 (IopIrpHasExtensionType.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x140418218 (IopFreeCopyObjectsFromDataBuffer.c)
 *     IopUnlockAndFreeMdl @ 0x1405570D0 (IopUnlockAndFreeMdl.c)
 */

void __fastcall IopFreeCopyObjectsFromIrp(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( IopIrpHasExtensionType(a1, 9u) )
  {
    v3 = *(_QWORD *)(v2 + 112);
    if ( v3 )
    {
      if ( *(_QWORD *)(a1 + 8) )
      {
        IopUnlockAndFreeMdl(*(PMDL *)(a1 + 8));
        *(_QWORD *)(a1 + 8) = 0LL;
        v3 = *(_QWORD *)(a1 + 112);
      }
      IopFreeCopyObjectsFromDataBuffer(v3, 0);
    }
  }
}
