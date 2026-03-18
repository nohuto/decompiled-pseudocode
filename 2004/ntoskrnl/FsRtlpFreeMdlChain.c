/*
 * XREFs of FsRtlpFreeMdlChain @ 0x140889370
 * Callers:
 *     FsRtlSetKernelEaFile @ 0x1406DC020 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406DC1C0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406DC3C0 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryInformationFile @ 0x140889190 (FsRtlQueryInformationFile.c)
 * Callees:
 *     IoFreeMdl @ 0x140267A50 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
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
