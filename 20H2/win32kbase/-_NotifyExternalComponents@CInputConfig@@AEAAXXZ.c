/*
 * XREFs of ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C000AE90
 * Callers:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C000AE20 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C01AD970 (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C01ADA80 (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C000AEF0 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1C000B3C4 (-Broadcast@InputConfig@@SAXXZ.c)
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C000B9D8 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 *     RIMOnDisplayStateChange @ 0x1C0023A3C (RIMOnDisplayStateChange.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputConfig::_NotifyExternalComponents(CInputConfig *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ebx
  CCursorClip *v6; // rcx

  v5 = 0;
  if ( ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3, v4);
  RIMOnDisplayStateChange();
  CCursorClip::OnDisplayStateChange(v6);
  do
    CDeviceAcceleration::ResetAccelerationCurves(*(&qword_1C023F098 + 3 * (int)v5++));
  while ( v5 < 2 );
  InputConfig::Broadcast();
}
