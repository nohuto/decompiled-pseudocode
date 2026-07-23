/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x18000A068
 * Callers:
 *     RtlpCreateHeapEncoding @ 0x180009FC4 (RtlpCreateHeapEncoding.c)
 *     RtlpInitializeLfhRandomDataArray @ 0x18000A020 (RtlpInitializeLfhRandomDataArray.c)
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 *     RtlInitializeHeapManager @ 0x1800F2654 (RtlInitializeHeapManager.c)
 *     RtlpInitializeLowFragHeapManager @ 0x18010B9D4 (RtlpInitializeLowFragHeapManager.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue32 @ 0x18000A448 (RtlpHeapGenerateRandomValue32.c)
 */

unsigned __int64 __fastcall RtlpHeapGenerateRandomValue64(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  v3 = (unsigned __int64)(unsigned int)RtlpHeapGenerateRandomValue32(a1, a2, a3) << 32;
  return v3 | (unsigned int)RtlpHeapGenerateRandomValue32(v5, v4, v6);
}
