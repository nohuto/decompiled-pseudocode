/*
 * XREFs of RtlRandom @ 0x1406E70D0
 * Callers:
 *     CcGetRandomVacbArrayWithReference @ 0x1404E5A78 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E5E74 (CcUnmapInactiveViewsInternal.c)
 *     PspInitPhase2 @ 0x140A6717C (PspInitPhase2.c)
 * Callees:
 *     ExGenRandom @ 0x1402A9670 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandom(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
