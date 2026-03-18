/*
 * XREFs of RtlRandom @ 0x1406DD300
 * Callers:
 *     CcGetRandomVacbArrayWithReference @ 0x1404E95B8 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E99B4 (CcUnmapInactiveViewsInternal.c)
 *     PspInitPhase2 @ 0x140A6DE2C (PspInitPhase2.c)
 * Callees:
 *     ExGenRandom @ 0x1402D7710 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandom(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
