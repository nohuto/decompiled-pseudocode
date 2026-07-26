/*
 * XREFs of ndisPeriodicReceivesGetTimerPeriod @ 0x1C00A3878
 * Callers:
 *     ndisReceiveWorkerThread @ 0x1C0037130 (ndisReceiveWorkerThread.c)
 * Callees:
 *     <none>
 */

__int64 ndisPeriodicReceivesGetTimerPeriod()
{
  __int64 result; // rax

  result = qword_1C00E4128;
  if ( !qword_1C00E4128 )
    return -1LL;
  return result;
}
