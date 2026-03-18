/*
 * XREFs of RtlHpGlobalsInitialize @ 0x1403C3710
 * Callers:
 *     RtlHpKInitializeHeapManager @ 0x1403C3688 (RtlHpKInitializeHeapManager.c)
 *     ExpInitSystemPhase0 @ 0x140A6BBDC (ExpInitSystemPhase0.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x14030A0DC (RtlpHeapGenerateRandomValue64.c)
 */

void *RtlHpGlobalsInitialize()
{
  void *result; // rax

  RtlpHpHeapGlobals = 0LL;
  qword_140C1DCB0 = 0LL;
  xmmword_140C1DC90 = 0LL;
  unk_140C1DCA0 = 0LL;
  *(_QWORD *)&RtlpHpHeapGlobals = RtlpHeapGenerateRandomValue64();
  *((_QWORD *)&RtlpHpHeapGlobals + 1) = RtlpHeapGenerateRandomValue64();
  result = &RtlpHeapFailureInfo;
  *(_QWORD *)&xmmword_140C1DC90 = &RtlpHeapFailureInfo;
  return result;
}
