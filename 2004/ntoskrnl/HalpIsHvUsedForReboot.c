/*
 * XREFs of HalpIsHvUsedForReboot @ 0x1404BD514
 * Callers:
 *     HalpMiscGetParameters @ 0x140A69688 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14039F208 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsXboxNanovisorPresent @ 0x14039F4B0 (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

bool __fastcall HalpIsHvUsedForReboot(__int64 a1)
{
  if ( !HalpIsMicrosoftCompatibleHvLoaded(a1) )
    return HalpIsXboxNanovisorPresent() != 0;
  _RAX = 1073741828LL;
  __asm { cpuid }
  return (_RAX & 0x10) != 0;
}
