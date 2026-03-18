/*
 * XREFs of WaitForRitToCompleteLastCommand @ 0x1C010386C
 * Callers:
 *     EditionActivateMitInput @ 0x1C0103530 (EditionActivateMitInput.c)
 *     EditionDeactivateMitInput @ 0x1C01035F0 (EditionDeactivateMitInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WaitForRitToCompleteLastCommand(__int64 a1, __int64 a2, __int64 a3)
{
  UserSessionSwitchLeaveCrit(a1, a2, a3);
  while ( (unsigned int)ObWaitForSingleObject(ghDITRITEvent, 0LL, 0LL, 0LL, 0LL) == 257
       && !PsIsThreadTerminating(KeGetCurrentThread()) )
    ;
  return EnterCrit(0LL, 1LL);
}
