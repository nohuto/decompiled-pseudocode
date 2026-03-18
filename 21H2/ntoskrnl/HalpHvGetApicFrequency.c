/*
 * XREFs of HalpHvGetApicFrequency @ 0x14050E430
 * Callers:
 *     <none>
 * Callees:
 *     HalpHvIsFrequencyAvailable @ 0x1403DE864 (HalpHvIsFrequencyAvailable.c)
 */

unsigned __int64 HalpHvGetApicFrequency()
{
  __int64 v0; // r10

  if ( HalpHvIsFrequencyAvailable() )
    return __readmsr(0x40000023u);
  return v0;
}
