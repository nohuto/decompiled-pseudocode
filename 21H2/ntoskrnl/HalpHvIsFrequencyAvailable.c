/*
 * XREFs of HalpHvIsFrequencyAvailable @ 0x1403CF798
 * Callers:
 *     HalSocRequestApi @ 0x1403A21EC (HalSocRequestApi.c)
 *     HalpHvGetApicFrequency @ 0x1404C2270 (HalpHvGetApicFrequency.c)
 *     HalpHvGetTscFrequency @ 0x1404C22A0 (HalpHvGetTscFrequency.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A20E8 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsXboxNanovisorPresent @ 0x1403A2390 (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

bool __fastcall HalpHvIsFrequencyAvailable(__int64 a1)
{
  bool v1; // zf

  if ( HalpIsMicrosoftCompatibleHvLoaded(a1) )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    v1 = (_RDX & 0x100) == 0;
  }
  else
  {
    v1 = HalpIsXboxNanovisorPresent() == 0;
  }
  return !v1;
}
