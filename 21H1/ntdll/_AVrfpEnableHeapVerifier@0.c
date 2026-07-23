/*
 * XREFs of _AVrfpEnableHeapVerifier@0 @ 0x4B338E2C
 * Callers:
 *     _AVrfpEnableVerifierOptions@0 @ 0x4B338EAB (_AVrfpEnableVerifierOptions@0.c)
 * Callees:
 *     <none>
 */

char __stdcall AVrfpEnableHeapVerifier()
{
  if ( (AVrfpVerifierFlags & 1) != 0 )
  {
    NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag | 0x2000000;
    *RtlpDebugPageHeapTable |= 1u;
  }
  else if ( (AVrfpVerifierFlags & 0x8000) != 0 )
  {
    NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag | 0x2000000;
  }
  return 1;
}
