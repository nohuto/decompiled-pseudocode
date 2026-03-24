/*
 * XREFs of MiFreeRotateVadEvent @ 0x1406C1A28
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x1406ED390 (MiReleaseVadEventBlocks.c)
 *     MiFreeRotateView @ 0x1408C857C (MiFreeRotateView.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x1402FC8DC (MiFreeInPageSupportBlock.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403183E0 (PsReturnProcessNonPagedPoolQuota.c)
 */

__int64 __fastcall MiFreeRotateVadEvent(__int64 a1)
{
  struct _SLIST_ENTRY *v1; // rcx

  v1 = *(struct _SLIST_ENTRY **)(a1 + 8);
  if ( v1 )
    MiFreeInPageSupportBlock(v1);
  return PsReturnProcessNonPagedPoolQuota(KeGetCurrentThread()->ApcState.Process, 520LL);
}
