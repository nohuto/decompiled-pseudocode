/*
 * XREFs of MiFreeRotateVadEvent @ 0x1406EB458
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x14062DF50 (MiReleaseVadEventBlocks.c)
 *     MiFreeRotateView @ 0x1408C3C2C (MiFreeRotateView.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1402799D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiFreeInPageSupportBlock @ 0x140282584 (MiFreeInPageSupportBlock.c)
 */

signed __int64 __fastcall MiFreeRotateVadEvent(__int64 a1)
{
  _SLIST_ENTRY *v1; // rcx

  v1 = *(_SLIST_ENTRY **)(a1 + 8);
  if ( v1 )
    MiFreeInPageSupportBlock(v1);
  return PsReturnProcessNonPagedPoolQuota((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, 0x208uLL);
}
