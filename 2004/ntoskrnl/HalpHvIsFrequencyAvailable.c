/*
 * XREFs of HalpHvIsFrequencyAvailable @ 0x1403CC098
 * Callers:
 *     HalSocRequestApi @ 0x14039F30C (HalSocRequestApi.c)
 *     HalpHvGetApicFrequency @ 0x1404BD140 (HalpHvGetApicFrequency.c)
 *     HalpHvGetTscFrequency @ 0x1404BD170 (HalpHvGetTscFrequency.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14039F208 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsXboxNanovisorPresent @ 0x14039F4B0 (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
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
