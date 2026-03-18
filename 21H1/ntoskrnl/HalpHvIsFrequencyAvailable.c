/*
 * XREFs of HalpHvIsFrequencyAvailable @ 0x1403CB2D8
 * Callers:
 *     HalSocRequestApi @ 0x14039EB7C (HalSocRequestApi.c)
 *     HalpHvGetApicFrequency @ 0x1404BCA60 (HalpHvGetApicFrequency.c)
 *     HalpHvGetTscFrequency @ 0x1404BCA90 (HalpHvGetTscFrequency.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14039EA78 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsXboxNanovisorPresent @ 0x14039ED20 (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
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
