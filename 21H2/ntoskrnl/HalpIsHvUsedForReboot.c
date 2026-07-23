/*
 * XREFs of HalpIsHvUsedForReboot @ 0x1404C2644
 * Callers:
 *     HalpMiscGetParameters @ 0x140A6DF88 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A20E8 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsXboxNanovisorPresent @ 0x1403A2390 (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

bool __fastcall HalpIsHvUsedForReboot(__int64 a1)
{
  if ( !HalpIsMicrosoftCompatibleHvLoaded(a1) )
    return HalpIsXboxNanovisorPresent() != 0;
  _RAX = 1073741828LL;
  __asm { cpuid }
  return (_RAX & 0x10) != 0;
}
