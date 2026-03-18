/*
 * XREFs of _WaitForRitDisEngagement@0 @ 0xEAEA6
 * Callers:
 *     _EditionActivateMitInput@0 @ 0xEAE3C (_EditionActivateMitInput@0.c)
 * Callees:
 *     _WakeRIT@4 @ 0x9C542 (_WakeRIT@4.c)
 *     _WaitForRitToCompleteLastCommand@0 @ 0xEAEFA (_WaitForRitToCompleteLastCommand@0.c)
 *     _DitTakeOver@0 @ 0xEAF2C (_DitTakeOver@0.c)
 */

int __stdcall WaitForRitDisEngagement()
{
  int result; // eax

  EtwTraceDitWaitForRitDisEngagement();
  WakeRIT(0x10u);
  WaitForRitToCompleteLastCommand();
  if ( gbDIT )
  {
    if ( DitTakeOver() )
    {
      WakeRIT(0x80u);
      WaitForRitToCompleteLastCommand();
      _InterlockedAnd(&gdwDITWakeReason, 0xFFFFFFFE);
      result = 1;
      _InterlockedExchange(&glDitMouseHandling, 1);
      return result;
    }
    gbDIT = 0;
    WakeRIT(8u);
    WaitForRitToCompleteLastCommand();
  }
  return 0;
}
