/*
 * XREFs of HalpHvGetTscFrequency @ 0x14050E460
 * Callers:
 *     <none>
 * Callees:
 *     HalpHvIsFrequencyAvailable @ 0x1403DE864 (HalpHvIsFrequencyAvailable.c)
 */

unsigned __int64 HalpHvGetTscFrequency()
{
  __int64 v0; // r10

  if ( HalpHvIsFrequencyAvailable() )
    return __readmsr(0x40000022u);
  return v0;
}
