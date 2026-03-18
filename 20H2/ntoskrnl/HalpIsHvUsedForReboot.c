/*
 * XREFs of HalpIsHvUsedForReboot @ 0x1404C0A34
 * Callers:
 *     HalpMiscGetParameters @ 0x140A70008 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A16D8 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsXboxNanovisorPresent @ 0x1403A1980 (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

bool __fastcall HalpIsHvUsedForReboot(__int64 a1)
{
  if ( !HalpIsMicrosoftCompatibleHvLoaded(a1) )
    return HalpIsXboxNanovisorPresent() != 0;
  _RAX = 1073741828LL;
  __asm { cpuid }
  return (_RAX & 0x10) != 0;
}
