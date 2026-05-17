/*
 * XREFs of TppIteWakeWaiters @ 0x18004EFCC
 * Callers:
 *     TppSingleTimerExpiration @ 0x180014100 (TppSingleTimerExpiration.c)
 *     TppAlpcpExecuteCallback @ 0x1800200D0 (TppAlpcpExecuteCallback.c)
 *     TppBarrierAdjust @ 0x18004CF8C (TppBarrierAdjust.c)
 *     TppCallbackEpilog @ 0x18004DD30 (TppCallbackEpilog.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x18009E430 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall TppIteWakeWaiters(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v2 = (_QWORD *)*a1;
      result = ZwAlertThreadByThreadId(a1[1], a2);
      a1 = v2;
    }
    while ( v2 );
  }
  return result;
}
