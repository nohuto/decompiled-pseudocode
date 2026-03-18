/*
 * XREFs of WakeRIT @ 0x1C0104090
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0028410 (xxxUpdatePerUserSystemParameters.c)
 *     EditionActivateMitInput @ 0x1C0103C30 (EditionActivateMitInput.c)
 *     EditionDeactivateMitInput @ 0x1C0103CF0 (EditionDeactivateMitInput.c)
 *     WakeRITForShutdown @ 0x1C0103E40 (WakeRITForShutdown.c)
 *     _EnableSessionForMMCSS @ 0x1C0103E90 (_EnableSessionForMMCSS.c)
 *     EditionInitiateMouseEventProcessing @ 0x1C0103FD0 (EditionInitiateMouseEventProcessing.c)
 *     WakeRITForConfigSwitch @ 0x1C01D9630 (WakeRITForConfigSwitch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WakeRIT(unsigned int a1)
{
  if ( gpkeRITEvent )
  {
    _m_prefetchw(&gdwRITWakeReason);
    if ( (_InterlockedOr(&gdwRITWakeReason, a1) & a1) == 0 )
      KeSetEvent(gpkeRITEvent, 1, 0);
    return 1LL;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)&gdwRitIgnoredWakeReasons, a1);
    return 0LL;
  }
}
