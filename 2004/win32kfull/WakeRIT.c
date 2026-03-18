/*
 * XREFs of WakeRIT @ 0x1C0103990
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00492E0 (xxxUpdatePerUserSystemParameters.c)
 *     EditionActivateMitInput @ 0x1C0103530 (EditionActivateMitInput.c)
 *     EditionDeactivateMitInput @ 0x1C01035F0 (EditionDeactivateMitInput.c)
 *     WakeRITForShutdown @ 0x1C0103740 (WakeRITForShutdown.c)
 *     _EnableSessionForMMCSS @ 0x1C0103790 (_EnableSessionForMMCSS.c)
 *     EditionInitiateMouseEventProcessing @ 0x1C01038D0 (EditionInitiateMouseEventProcessing.c)
 *     WakeRITForConfigSwitch @ 0x1C01DA2F0 (WakeRITForConfigSwitch.c)
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
