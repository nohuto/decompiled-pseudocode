/*
 * XREFs of _WakeRIT@4 @ 0x9C542
 * Callers:
 *     _EditionInitiateMouseEventProcessing@4 @ 0x9C4BC (_EditionInitiateMouseEventProcessing@4.c)
 *     __EnableSessionForMMCSS@4 @ 0xC4416 (__EnableSessionForMMCSS@4.c)
 *     _EditionDeactivateMitInput@0 @ 0xD3BD6 (_EditionDeactivateMitInput@0.c)
 *     _WakeRITForShutdown@0 @ 0xD4ACC (_WakeRITForShutdown@0.c)
 *     _WakeRITForConfigSwitch@0 @ 0xD4D10 (_WakeRITForConfigSwitch@0.c)
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 *     _WaitForRitDisEngagement@0 @ 0xEAEA6 (_WaitForRitDisEngagement@0.c)
 * Callees:
 *     <none>
 */

int __fastcall WakeRIT(unsigned int a1)
{
  if ( gpkeRITEvent )
  {
    if ( (_InterlockedOr(&gdwRITWakeReason, a1) & a1) == 0 )
      KeSetEvent(gpkeRITEvent, 1, 0);
    return 1;
  }
  else
  {
    _InterlockedOr(&gdwRitIgnoredWakeReasons, a1);
    return 0;
  }
}
