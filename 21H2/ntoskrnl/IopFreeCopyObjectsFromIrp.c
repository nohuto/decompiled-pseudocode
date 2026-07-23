/*
 * XREFs of IopFreeCopyObjectsFromIrp @ 0x1403F1A64
 * Callers:
 *     IopFreeIrpExtension @ 0x14020D178 (IopFreeIrpExtension.c)
 *     IoReuseIrp @ 0x14020D600 (IoReuseIrp.c)
 * Callees:
 *     IopIrpHasExtensionType @ 0x14020D890 (IopIrpHasExtensionType.c)
 *     IopUnlockAndFreeMdl @ 0x1403F1110 (IopUnlockAndFreeMdl.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x1403F19D0 (IopFreeCopyObjectsFromDataBuffer.c)
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
