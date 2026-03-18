/*
 * XREFs of HalpPowerEarlyRestore @ 0x14038A000
 * Callers:
 *     <none>
 * Callees:
 *     HalpReenableAcpi @ 0x140994760 (HalpReenableAcpi.c)
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
