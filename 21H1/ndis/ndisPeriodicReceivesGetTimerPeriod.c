/*
 * XREFs of ndisPeriodicReceivesGetTimerPeriod @ 0x1C00A33B8
 * Callers:
 *     ndisReceiveWorkerThread @ 0x1C0036EF0 (ndisReceiveWorkerThread.c)
 * Callees:
 *     <none>
 */

__int64 ndisPeriodicReceivesGetTimerPeriod()
{
  __int64 result; // rax

  result = qword_1C00E3FE8;
  if ( !qword_1C00E3FE8 )
    return -1LL;
  return result;
}
