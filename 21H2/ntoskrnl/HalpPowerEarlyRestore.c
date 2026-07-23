/*
 * XREFs of HalpPowerEarlyRestore @ 0x14038DBE0
 * Callers:
 *     <none>
 * Callees:
 *     HalpReenableAcpi @ 0x14099A0F0 (HalpReenableAcpi.c)
 */

__int64 __fastcall HalpPowerEarlyRestore(int a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
      return HalpReenableAcpi();
  }
  else
  {
    HalpTimerWatchdogStopCount = 0;
  }
  return result;
}
