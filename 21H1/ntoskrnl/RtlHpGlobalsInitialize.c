/*
 * XREFs of RtlHpGlobalsInitialize @ 0x1403C00E0
 * Callers:
 *     RtlHpKInitializeHeapManager @ 0x1403C0058 (RtlHpKInitializeHeapManager.c)
 *     ExpInitSystemPhase0 @ 0x140A64F2C (ExpInitSystemPhase0.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x1402AA144 (RtlpHeapGenerateRandomValue64.c)
 */

void *RtlHpGlobalsInitialize()
{
  void *result; // rax

  RtlpHpHeapGlobals = 0LL;
  qword_140C1DDB0 = 0LL;
  xmmword_140C1DD90 = 0LL;
  unk_140C1DDA0 = 0LL;
  *(_QWORD *)&RtlpHpHeapGlobals = RtlpHeapGenerateRandomValue64();
  *((_QWORD *)&RtlpHpHeapGlobals + 1) = RtlpHeapGenerateRandomValue64();
  result = &RtlpHeapFailureInfo;
  *(_QWORD *)&xmmword_140C1DD90 = &RtlpHeapFailureInfo;
  return result;
}
