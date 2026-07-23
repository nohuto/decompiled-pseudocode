/*
 * XREFs of MiFreeRotateVadEvent @ 0x140620730
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x140704770 (MiReleaseVadEventBlocks.c)
 *     MiFreeRotateView @ 0x1408C86DC (MiFreeRotateView.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x14030762C (MiFreeInPageSupportBlock.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140323130 (PsReturnProcessNonPagedPoolQuota.c)
 */

__int64 __fastcall MiFreeRotateVadEvent(__int64 a1)
{
  _SLIST_ENTRY *v1; // rcx

  v1 = *(_SLIST_ENTRY **)(a1 + 8);
  if ( v1 )
    MiFreeInPageSupportBlock(v1);
  return PsReturnProcessNonPagedPoolQuota(KeGetCurrentThread()->ApcState.Process, 520LL);
}
