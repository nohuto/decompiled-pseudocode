/*
 * XREFs of MiFreeRotateVadEvent @ 0x1406E15D8
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x140624980 (MiReleaseVadEventBlocks.c)
 *     MiFreeRotateView @ 0x1408CADBC (MiFreeRotateView.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x140230440 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiFreeInPageSupportBlock @ 0x1402CA7B8 (MiFreeInPageSupportBlock.c)
 */

signed __int64 __fastcall MiFreeRotateVadEvent(__int64 a1)
{
  _SLIST_ENTRY *v1; // rcx

  v1 = *(_SLIST_ENTRY **)(a1 + 8);
  if ( v1 )
    MiFreeInPageSupportBlock(v1);
  return PsReturnProcessNonPagedPoolQuota((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, 0x208uLL);
}
