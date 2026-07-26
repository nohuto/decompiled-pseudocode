/*
 * XREFs of ndisPeriodicReceivesGetTimerPeriod @ 0x1C00A39F8
 * Callers:
 *     ndisReceiveWorkerThread @ 0x1C0037490 (ndisReceiveWorkerThread.c)
 * Callees:
 *     <none>
 */

__int64 ndisPeriodicReceivesGetTimerPeriod()
{
  __int64 result; // rax

  result = qword_1C00E40E8;
  if ( !qword_1C00E40E8 )
    return -1LL;
  return result;
}
