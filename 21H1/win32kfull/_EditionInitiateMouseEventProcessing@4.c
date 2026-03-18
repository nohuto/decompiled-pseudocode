/*
 * XREFs of _EditionInitiateMouseEventProcessing@4 @ 0x9C4BC
 * Callers:
 *     <none>
 * Callees:
 *     _WakeDIT@4 @ 0x9C504 (_WakeDIT@4.c)
 *     _WakeRIT@4 @ 0x9C542 (_WakeRIT@4.c)
 *     _UserBeep@8 @ 0x17DF0D (_UserBeep@8.c)
 */

int __stdcall EditionInitiateMouseEventProcessing(int a1)
{
  int result; // eax

  if ( _InterlockedCompareExchange(&glDitMouseHandling, 1, 1) )
  {
    EtwTraceWakeDIT(1);
    result = WakeDIT(1);
  }
  else
  {
    EtwTraceWakeRIT(1);
    result = WakeRIT(1);
  }
  if ( a1 )
    return UserBeep(440, 125);
  return result;
}
