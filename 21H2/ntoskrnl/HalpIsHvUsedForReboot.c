/*
 * XREFs of HalpIsHvUsedForReboot @ 0x1404C2404
 * Callers:
 *     HalpMiscGetParameters @ 0x140A6CF88 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A1F98 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsXboxNanovisorPresent @ 0x1403A2240 (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

bool __fastcall HalpIsHvUsedForReboot(__int64 a1)
{
  if ( !HalpIsMicrosoftCompatibleHvLoaded(a1) )
    return HalpIsXboxNanovisorPresent() != 0;
  _RAX = 1073741828LL;
  __asm { cpuid }
  return (_RAX & 0x10) != 0;
}
