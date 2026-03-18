/*
 * XREFs of HalpPreprocessNmi @ 0x1404CD960
 * Callers:
 *     <none>
 * Callees:
 *     HalpWatchdogCheckPreResetNMI @ 0x1404BD2A0 (HalpWatchdogCheckPreResetNMI.c)
 *     HalpInterruptRebootService @ 0x1404CD230 (HalpInterruptRebootService.c)
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
