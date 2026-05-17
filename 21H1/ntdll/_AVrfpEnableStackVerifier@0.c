/*
 * XREFs of _AVrfpEnableStackVerifier@0 @ 0x4B338E7B
 * Callers:
 *     _AVrfpEnableVerifierOptions@0 @ 0x4B338EAB (_AVrfpEnableVerifierOptions@0.c)
 * Callees:
 *     <none>
 */

char __stdcall AVrfpEnableStackVerifier()
{
  if ( NtCurrentPeb()->BeingDebugged || MEMORY[0x7FFE02D4] )
    NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag | 0x10000;
  return 1;
}
