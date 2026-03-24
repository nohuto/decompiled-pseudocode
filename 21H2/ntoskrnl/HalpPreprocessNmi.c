/*
 * XREFs of HalpPreprocessNmi @ 0x1404D2D80
 * Callers:
 *     <none>
 * Callees:
 *     HalpWatchdogCheckPreResetNMI @ 0x1404C2870 (HalpWatchdogCheckPreResetNMI.c)
 *     HalpInterruptRebootService @ 0x1404D2650 (HalpInterruptRebootService.c)
 */

char __fastcall HalpPreprocessNmi(int a1)
{
  char result; // al

  if ( a1 )
  {
    if ( a1 == 1 )
      return HalpWatchdogCheckPreResetNMI();
  }
  else
  {
    result = HalpInterruptNmiRebootInProgress;
    if ( HalpInterruptNmiRebootInProgress )
      HalpInterruptRebootService();
  }
  return result;
}
