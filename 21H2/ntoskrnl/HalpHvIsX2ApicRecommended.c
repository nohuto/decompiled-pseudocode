/*
 * XREFs of HalpHvIsX2ApicRecommended @ 0x14050E5E8
 * Callers:
 *     HalpInterruptGetX2ApicPolicy @ 0x1403B3864 (HalpInterruptGetX2ApicPolicy.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403B37B0 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

bool HalpHvIsX2ApicRecommended()
{
  if ( !HalpIsMicrosoftCompatibleHvLoaded() )
    return 0;
  _RAX = 1073741828LL;
  __asm { cpuid }
  return (_RAX & 0x80000) != 0;
}
