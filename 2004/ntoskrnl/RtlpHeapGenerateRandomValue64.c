/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x140251114
 * Callers:
 *     RtlpHpLfhSubsegmentInitialize @ 0x1402CB0BC (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhContextInitialize @ 0x140379488 (RtlpHpLfhContextInitialize.c)
 *     RtlHpGlobalsInitialize @ 0x1403C0FA0 (RtlHpGlobalsInitialize.c)
 *     RtlCreateHeap @ 0x140756C80 (RtlCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x140250640 (ExGenRandom.c)
 */

unsigned __int64 RtlpHeapGenerateRandomValue64()
{
  unsigned int v0; // ebx
  __int64 v1; // rax

  v0 = ExGenRandom(1) & 0x7FFFFFFF;
  v1 = ExGenRandom(1);
  LODWORD(v1) = v1 & 0x7FFFFFFF;
  return ((unsigned __int64)v0 << 32) | v1;
}
