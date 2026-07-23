/*
 * XREFs of AVrfpEnableHeapVerifier @ 0x1800DA998
 * Callers:
 *     AVrfpEnableVerifierOptions @ 0x1800DAA04 (AVrfpEnableVerifierOptions.c)
 * Callees:
 *     <none>
 */

char AVrfpEnableHeapVerifier()
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
