/*
 * XREFs of _WakeDIT@4 @ 0x9C504
 * Callers:
 *     ?xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z @ 0x45220 (-xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z.c)
 *     _EditionInitiateMouseEventProcessing@4 @ 0x9C4BC (_EditionInitiateMouseEventProcessing@4.c)
 *     _EditionExtensibility_WakeMITForInterceptCallout@0 @ 0x1478B1 (_EditionExtensibility_WakeMITForInterceptCallout@0.c)
 *     _RequestInputSinkInfoFromPoint@4 @ 0x17B95E (_RequestInputSinkInfoFromPoint@4.c)
 * Callees:
 *     <none>
 */

int __fastcall WakeDIT(unsigned int a1)
{
  if ( gbDIT )
  {
    if ( (_InterlockedOr(&gdwDITWakeReason, a1) & a1) == 0 )
      ZwSetEvent(ghDITEvent, 0);
    return 1;
  }
  else
  {
    _InterlockedOr(&gdwDitIgnoredWakeReasons, a1);
    return 0;
  }
}
