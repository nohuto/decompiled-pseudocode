/*
 * XREFs of _TppIteWakeWaiters@4 @ 0x4B384822
 * Callers:
 *     _TppSingleTimerExpiration@12 @ 0x4B2B75E3 (_TppSingleTimerExpiration@12.c)
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 * Callees:
 *     _ZwAlertThreadByThreadId@4 @ 0x4B2F3080 (_ZwAlertThreadByThreadId@4.c)
 */

int __fastcall TppIteWakeWaiters(_DWORD *a1)
{
  _DWORD *v1; // esi
  int result; // eax

  if ( a1 )
  {
    do
    {
      v1 = (_DWORD *)*a1;
      result = ZwAlertThreadByThreadId(a1[1]);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
