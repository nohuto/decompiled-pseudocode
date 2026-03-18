/*
 * XREFs of HalpPreprocessNmi @ 0x1404D13B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpWatchdogCheckPreResetNMI @ 0x1404C0EA0 (HalpWatchdogCheckPreResetNMI.c)
 *     HalpInterruptRebootService @ 0x1404D0C80 (HalpInterruptRebootService.c)
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
