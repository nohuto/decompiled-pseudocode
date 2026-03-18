/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x14030A0DC
 * Callers:
 *     RtlpHpLfhSubsegmentInitialize @ 0x140309E9C (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhContextInitialize @ 0x14037B1B8 (RtlpHpLfhContextInitialize.c)
 *     RtlHpGlobalsInitialize @ 0x1403C3710 (RtlHpGlobalsInitialize.c)
 *     RtlCreateHeap @ 0x1407658C0 (RtlCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x1402D7710 (ExGenRandom.c)
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
