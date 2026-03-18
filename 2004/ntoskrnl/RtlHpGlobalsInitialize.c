/*
 * XREFs of RtlHpGlobalsInitialize @ 0x1403C0FA0
 * Callers:
 *     RtlHpKInitializeHeapManager @ 0x1403C0F18 (RtlHpKInitializeHeapManager.c)
 *     ExpInitSystemPhase0 @ 0x140A6490C (ExpInitSystemPhase0.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x140251114 (RtlpHeapGenerateRandomValue64.c)
 */

void *RtlHpGlobalsInitialize()
{
  void *result; // rax

  RtlpHpHeapGlobals = 0LL;
  qword_140C1DBF0 = 0LL;
  xmmword_140C1DBD0 = 0LL;
  unk_140C1DBE0 = 0LL;
  *(_QWORD *)&RtlpHpHeapGlobals = RtlpHeapGenerateRandomValue64();
  *((_QWORD *)&RtlpHpHeapGlobals + 1) = RtlpHeapGenerateRandomValue64();
  result = &RtlpHeapFailureInfo;
  *(_QWORD *)&xmmword_140C1DBD0 = &RtlpHeapFailureInfo;
  return result;
}
