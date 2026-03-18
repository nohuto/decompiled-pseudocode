/*
 * XREFs of RtlRandom @ 0x14070AF20
 * Callers:
 *     CcGetRandomVacbArrayWithReference @ 0x1404E6028 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E6424 (CcUnmapInactiveViewsInternal.c)
 *     PspInitPhase2 @ 0x140A66B5C (PspInitPhase2.c)
 * Callees:
 *     ExGenRandom @ 0x140250640 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandom(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
