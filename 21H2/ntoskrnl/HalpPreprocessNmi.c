/*
 * XREFs of HalpPreprocessNmi @ 0x1404D2FC0
 * Callers:
 *     <none>
 * Callees:
 *     HalpWatchdogCheckPreResetNMI @ 0x1404C2AB0 (HalpWatchdogCheckPreResetNMI.c)
 *     HalpInterruptRebootService @ 0x1404D2890 (HalpInterruptRebootService.c)
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
