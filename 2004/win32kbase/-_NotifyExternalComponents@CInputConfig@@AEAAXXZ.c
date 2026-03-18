/*
 * XREFs of ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C000C574
 * Callers:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C000C504 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C01AFCF0 (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C01AFE00 (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1C000F5E4 (-Broadcast@InputConfig@@SAXXZ.c)
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C000FDD8 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C0012820 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     RIMOnDisplayStateChange @ 0x1C00AA0B4 (RIMOnDisplayStateChange.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
    CDeviceAcceleration::ResetAccelerationCurves(*(&qword_1C0241098 + 3 * (int)v5++));
  while ( v5 < 2 );
  InputConfig::Broadcast();
}
