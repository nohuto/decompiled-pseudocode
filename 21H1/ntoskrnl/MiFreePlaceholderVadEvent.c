/*
 * XREFs of MiFreePlaceholderVadEvent @ 0x1408D3B18
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x14062DF50 (MiReleaseVadEventBlocks.c)
 *     MiFreePlaceholderStorage @ 0x1406EDC98 (MiFreePlaceholderStorage.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1402799D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

signed __int64 __fastcall MiFreePlaceholderVadEvent(__int64 a1)
{
  void *v1; // rcx
  ULONG_PTR v2; // rbx

  v1 = *(void **)(a1 + 8);
  v2 = 72LL;
  if ( v1 )
  {
    v2 = 136LL;
    ExFreePoolWithTag(v1, 0);
  }
  return PsReturnProcessNonPagedPoolQuota((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, v2);
}
