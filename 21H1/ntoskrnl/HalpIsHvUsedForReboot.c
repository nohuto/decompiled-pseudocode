/*
 * XREFs of HalpIsHvUsedForReboot @ 0x1404BCE34
 * Callers:
 *     HalpMiscGetParameters @ 0x140A69208 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14039EA78 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsXboxNanovisorPresent @ 0x14039ED20 (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

bool __fastcall HalpIsHvUsedForReboot(__int64 a1)
{
  if ( !HalpIsMicrosoftCompatibleHvLoaded(a1) )
    return HalpIsXboxNanovisorPresent() != 0;
  _RAX = 1073741828LL;
  __asm { cpuid }
  return (_RAX & 0x10) != 0;
}
