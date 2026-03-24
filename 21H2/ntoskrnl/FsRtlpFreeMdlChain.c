/*
 * XREFs of FsRtlpFreeMdlChain @ 0x14088C460
 * Callers:
 *     FsRtlSetKernelEaFile @ 0x140689CB0 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140689E50 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x14068A050 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryInformationFile @ 0x14088C280 (FsRtlQueryInformationFile.c)
 * Callees:
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1402E9600 (IoFreeMdl.c)
 */

void __fastcall FsRtlpFreeMdlChain(PMDL Mdl)
{
  PMDL v1; // rbx
  struct _MDL *Next; // rdi

  if ( Mdl )
  {
    v1 = Mdl;
    do
    {
      Next = v1->Next;
      if ( (v1->MdlFlags & 2) != 0 )
        MmUnlockPages(v1);
      IoFreeMdl(v1);
      v1 = Next;
    }
    while ( Next );
  }
}
