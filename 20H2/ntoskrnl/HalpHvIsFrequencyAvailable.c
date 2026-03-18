/*
 * XREFs of HalpHvIsFrequencyAvailable @ 0x1403CECB8
 * Callers:
 *     HalSocRequestApi @ 0x1403A17DC (HalSocRequestApi.c)
 *     HalpHvGetApicFrequency @ 0x1404C0660 (HalpHvGetApicFrequency.c)
 *     HalpHvGetTscFrequency @ 0x1404C0690 (HalpHvGetTscFrequency.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A16D8 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsXboxNanovisorPresent @ 0x1403A1980 (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
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
