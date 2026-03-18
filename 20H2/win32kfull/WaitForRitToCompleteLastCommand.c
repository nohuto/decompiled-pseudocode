/*
 * XREFs of WaitForRitToCompleteLastCommand @ 0x1C0103F6C
 * Callers:
 *     EditionActivateMitInput @ 0x1C0103C30 (EditionActivateMitInput.c)
 *     EditionDeactivateMitInput @ 0x1C0103CF0 (EditionDeactivateMitInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WaitForRitToCompleteLastCommand(__int64 a1)
{
  UserSessionSwitchLeaveCrit(a1);
  while ( (unsigned int)ObWaitForSingleObject(ghDITRITEvent, 0LL, 0LL, 0LL, 0LL) == 257
       && !PsIsThreadTerminating(KeGetCurrentThread()) )
    ;
  return EnterCrit(0LL, 1LL);
}
