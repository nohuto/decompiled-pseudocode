/*
 * XREFs of PpmCheckPeriodicStart @ 0x14030BEB0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     PpmCheckStart @ 0x1402888C0 (PpmCheckStart.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x14030BF0C (PpmEventTraceFailedPerfCheckStart.c)
 */

BOOLEAN __fastcall PpmCheckPeriodicStart(__int64 a1, __int64 a2, int a3)
{
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-18h] BYREF

  Timeout.QuadPart = 0LL;
  if ( KeWaitForSingleObject(&word_140C23AE8, Executive, 0, 0, &Timeout) )
    return PpmEventTraceFailedPerfCheckStart(PpmCheckLastExecutionTime);
  PpmCheckMakeupCount = a3;
  return PpmCheckStart(0);
}
