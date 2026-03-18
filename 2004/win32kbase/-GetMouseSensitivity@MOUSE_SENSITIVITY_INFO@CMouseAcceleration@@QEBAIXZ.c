/*
 * XREFs of ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C004E2E0
 * Callers:
 *     ?BuildAccelerationCurve@CMouseAcceleration@@UEAAXGPEAUBallistics@CDeviceAcceleration@@@Z @ 0x1C004E160 (-BuildAccelerationCurve@CMouseAcceleration@@UEAAXGPEAUBallistics@CDeviceAcceleration@@@Z.c)
 *     GetMouseSensitivity @ 0x1C01AB7A0 (GetMouseSensitivity.c)
 *     GetNormalizedMouseSensitivityFactor @ 0x1C01AB850 (GetNormalizedMouseSensitivityFactor.c)
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01AC61C (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     UnpackMouseSettings @ 0x1C01AC7E0 (UnpackMouseSettings.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity(
        CMouseAcceleration::MOUSE_SENSITIVITY_INFO *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdx

  v4 = *(unsigned int *)this;
  if ( (unsigned int)(v4 - 1) > 0x13 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v4, a3, a4);
    LODWORD(v4) = *(_DWORD *)this;
  }
  return (unsigned int)v4;
}
