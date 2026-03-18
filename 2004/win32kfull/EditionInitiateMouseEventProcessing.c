/*
 * XREFs of EditionInitiateMouseEventProcessing @ 0x1C01038D0
 * Callers:
 *     <none>
 * Callees:
 *     WakeDIT @ 0x1C0103934 (WakeDIT.c)
 *     WakeRIT @ 0x1C0103990 (WakeRIT.c)
 *     UserBeep @ 0x1C021A6B8 (UserBeep.c)
 */

__int64 __fastcall EditionInitiateMouseEventProcessing(int a1)
{
  __int64 result; // rax

  if ( _InterlockedCompareExchange(&glDitMouseHandling, 1, 1) )
  {
    EtwTraceWakeDIT(1LL);
    result = WakeDIT(1LL);
  }
  else
  {
    EtwTraceWakeRIT(1LL);
    result = WakeRIT(1LL);
  }
  if ( a1 )
    return UserBeep(440LL, 125LL);
  return result;
}
