/*
 * XREFs of _TppIteWakeWaiters@4 @ 0x4B384822
 * Callers:
 *     _TppSingleTimerExpiration@12 @ 0x4B2B75E3 (_TppSingleTimerExpiration@12.c)
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 * Callees:
 *     _ZwAlertThreadByThreadId@4 @ 0x4B2F3080 (_ZwAlertThreadByThreadId@4.c)
 */

NTSTATUS __fastcall TppIteWakeWaiters(int **a1)
{
  int *v1; // esi
  NTSTATUS result; // eax

  if ( a1 )
  {
    do
    {
      v1 = *a1;
      result = ZwAlertThreadByThreadId(a1[1]);
      a1 = (int **)v1;
    }
    while ( v1 );
  }
  return result;
}
