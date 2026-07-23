/*
 * XREFs of FsRtlpFreeMdlChain @ 0x14088C5C0
 * Callers:
 *     FsRtlSetKernelEaFile @ 0x1405E9140 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1405E92E0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1405E94E0 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryInformationFile @ 0x14088C3E0 (FsRtlQueryInformationFile.c)
 * Callees:
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
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
