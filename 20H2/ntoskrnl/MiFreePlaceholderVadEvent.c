/*
 * XREFs of MiFreePlaceholderVadEvent @ 0x1408DACA8
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x140624980 (MiReleaseVadEventBlocks.c)
 *     MiFreePlaceholderStorage @ 0x1406E4134 (MiFreePlaceholderStorage.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x140230440 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
