/*
 * XREFs of MiFreePlaceholderVadEvent @ 0x1408D4E68
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x1405F8F10 (MiReleaseVadEventBlocks.c)
 *     MiFreePlaceholderStorage @ 0x140711628 (MiFreePlaceholderStorage.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x140220980 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreePlaceholderVadEvent(__int64 a1)
{
  void *v1; // rcx
  __int64 v2; // rbx

  v1 = *(void **)(a1 + 8);
  v2 = 72LL;
  if ( v1 )
  {
    v2 = 136LL;
    ExFreePoolWithTag(v1, 0);
  }
  return PsReturnProcessNonPagedPoolQuota(KeGetCurrentThread()->ApcState.Process, v2);
}
