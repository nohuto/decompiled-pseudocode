/*
 * XREFs of ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C00AAB48
 * Callers:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00AAAD8 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C01B5A50 (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C01B5B60 (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     RIMOnDisplayStateChange @ 0x1C00A37A8 (RIMOnDisplayStateChange.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C00A4518 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1C00A52A4 (-Broadcast@InputConfig@@SAXXZ.c)
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C00A58B8 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputConfig::_NotifyExternalComponents(CInputConfig *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  CCursorClip *v3; // rcx

  v2 = 0;
  if ( ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1);
  RIMOnDisplayStateChange();
  CCursorClip::OnDisplayStateChange(v3);
  do
    CDeviceAcceleration::ResetAccelerationCurves(*(&qword_1C0247098 + 3 * (int)v2++));
  while ( v2 < 2 );
  InputConfig::Broadcast();
}
