/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x1402AA144
 * Callers:
 *     RtlpHpLfhSubsegmentInitialize @ 0x14023828C (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhContextInitialize @ 0x1403786C8 (RtlpHpLfhContextInitialize.c)
 *     RtlHpGlobalsInitialize @ 0x1403C00E0 (RtlHpGlobalsInitialize.c)
 *     RtlCreateHeap @ 0x140752DF0 (RtlCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x1402A9670 (ExGenRandom.c)
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
