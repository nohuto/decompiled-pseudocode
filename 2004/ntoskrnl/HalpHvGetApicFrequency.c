/*
 * XREFs of HalpHvGetApicFrequency @ 0x1404BD140
 * Callers:
 *     <none>
 * Callees:
 *     HalpHvIsFrequencyAvailable @ 0x1403CC098 (HalpHvIsFrequencyAvailable.c)
 */

unsigned __int64 __fastcall HalpHvGetApicFrequency(__int64 a1)
{
  __int64 v1; // r10

  if ( HalpHvIsFrequencyAvailable(a1) )
    return __readmsr(0x40000023u);
  return v1;
}
