/*
 * XREFs of DefaultDisableMonitoring @ 0x1404B97E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerStopProfileInterrupt @ 0x1404BCBEC (HalpTimerStopProfileInterrupt.c)
 */

__int64 __fastcall DefaultDisableMonitoring(int a1)
{
  __int64 result; // rax

  if ( !a1 )
    return HalpTimerStopProfileInterrupt();
  return result;
}
