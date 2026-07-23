/*
 * XREFs of TppIteWakeWaiters @ 0x18005498C
 * Callers:
 *     TppSingleTimerExpiration @ 0x180014100 (TppSingleTimerExpiration.c)
 *     TppAlpcpExecuteCallback @ 0x1800200D0 (TppAlpcpExecuteCallback.c)
 *     TppBarrierAdjust @ 0x18005294C (TppBarrierAdjust.c)
 *     TppCallbackEpilog @ 0x1800536F0 (TppCallbackEpilog.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x18009DC00 (ZwAlertThreadByThreadId.c)
 */

NTSTATUS __fastcall TppIteWakeWaiters(__int64 **a1)
{
  __int64 *v1; // rbx
  NTSTATUS result; // eax

  if ( a1 )
  {
    do
    {
      v1 = *a1;
      result = ZwAlertThreadByThreadId(a1[1]);
      a1 = (__int64 **)v1;
    }
    while ( v1 );
  }
  return result;
}
