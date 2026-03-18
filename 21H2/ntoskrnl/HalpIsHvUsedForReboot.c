/*
 * XREFs of HalpIsHvUsedForReboot @ 0x14050E854
 * Callers:
 *     HalpMiscGetParameters @ 0x140B27364 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403B37B0 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsXboxNanovisorPresent @ 0x1403B3A6C (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

bool HalpIsHvUsedForReboot()
{
  if ( !HalpIsMicrosoftCompatibleHvLoaded() )
    return HalpIsXboxNanovisorPresent() != 0;
  _RAX = 1073741828LL;
  __asm { cpuid }
  return (_RAX & 0x10) != 0;
}
