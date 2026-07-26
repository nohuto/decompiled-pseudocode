/*
 * XREFs of NdisAllocateMdl @ 0x1C0033B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PMDL __stdcall NdisAllocateMdl(NDIS_HANDLE NdisHandle, PVOID VirtualAddress, UINT Length)
{
  struct _MDL *Mdl; // rax
  struct _MDL *v4; // rbx

  Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
  v4 = Mdl;
  if ( Mdl )
  {
    MmBuildMdlForNonPagedPool(Mdl);
    v4->Next = 0LL;
  }
  return v4;
}
