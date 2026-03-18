/*
 * XREFs of GetNormalizedMouseSensitivityFactor @ 0x1C01A94D0
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C000BF40 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 * Callees:
 *     EngMulDiv @ 0x1C0032350 (EngMulDiv.c)
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C00AF1B0 (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GetNormalizedMouseSensitivityFactor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CDeviceAcceleration *v4; // rdi
  unsigned int v6; // ebx

  v4 = qword_1C023F098;
  if ( (unsigned int)(*((_DWORD *)qword_1C023F098 + 26) - 1) > 0x13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v6 = *((_DWORD *)v4 + 27);
  CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity((CDeviceAcceleration *)((char *)v4 + 104), a2, a3, a4);
  if ( a1 && *(_WORD *)(a1 + 20) > 0x60u )
    return (unsigned int)EngMulDiv(v6, *(unsigned __int16 *)(a1 + 20), 96);
  return v6;
}
