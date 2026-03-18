/*
 * XREFs of PpmCheckPeriodicStart @ 0x14021FEF0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     PpmCheckStart @ 0x14021EF80 (PpmCheckStart.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x1403594AC (PpmEventTraceFailedPerfCheckStart.c)
 */

__int64 __fastcall PpmCheckPeriodicStart(__int64 a1, __int64 a2, int a3)
{
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-18h] BYREF

  Timeout.QuadPart = 0LL;
  if ( KeWaitForSingleObject(&stru_140C23628, Executive, 0, 0, &Timeout) )
    return PpmEventTraceFailedPerfCheckStart(PpmCheckLastExecutionTime);
  PpmCheckMakeupCount = a3;
  return PpmCheckStart(0);
}
