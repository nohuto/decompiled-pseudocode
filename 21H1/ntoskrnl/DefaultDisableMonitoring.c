/*
 * XREFs of DefaultDisableMonitoring @ 0x1404B9100
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerStopProfileInterrupt @ 0x1404BC50C (HalpTimerStopProfileInterrupt.c)
 */

__int64 __fastcall DefaultDisableMonitoring(int a1)
{
  __int64 result; // rax

  if ( !a1 )
    return HalpTimerStopProfileInterrupt();
  return result;
}
