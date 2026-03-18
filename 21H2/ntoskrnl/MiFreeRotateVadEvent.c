/*
 * XREFs of MiFreeRotateVadEvent @ 0x1406EB238
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x1407B97B0 (MiReleaseVadEventBlocks.c)
 *     MiFreeRotateView @ 0x14096D000 (MiFreeRotateView.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x14027456C (MiFreeInPageSupportBlock.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 */

__int64 __fastcall MiFreeRotateVadEvent(__int64 a1)
{
  struct _SLIST_ENTRY *v1; // rcx

  v1 = *(struct _SLIST_ENTRY **)(a1 + 8);
  if ( v1 )
    MiFreeInPageSupportBlock(v1);
  return PsReturnProcessNonPagedPoolQuota(KeGetCurrentThread()->ApcState.Process, 520LL);
}
