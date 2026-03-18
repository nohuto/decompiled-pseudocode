/*
 * XREFs of HvlpPowerStateCallback @ 0x1404F05A0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpCheckTscSync @ 0x1404F7D40 (HvlpCheckTscSync.c)
 */

void __fastcall HvlpPowerStateCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  if ( (_DWORD)Argument1 == 3 && (_DWORD)Argument2 == 1 )
    HvlpCheckTscSync(CallbackContext, Argument1);
}
