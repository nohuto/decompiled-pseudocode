/*
 * XREFs of HalpHvGetTscFrequency @ 0x1404C0690
 * Callers:
 *     <none>
 * Callees:
 *     HalpHvIsFrequencyAvailable @ 0x1403CECB8 (HalpHvIsFrequencyAvailable.c)
 */

unsigned __int64 __fastcall HalpHvGetTscFrequency(__int64 a1)
{
  __int64 v1; // r10

  if ( HalpHvIsFrequencyAvailable(a1) )
    return __readmsr(0x40000022u);
  return v1;
}
