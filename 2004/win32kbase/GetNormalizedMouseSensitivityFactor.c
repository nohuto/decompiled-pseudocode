/*
 * XREFs of GetNormalizedMouseSensitivityFactor @ 0x1C01AB850
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00103B8 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 * Callees:
 *     EngMulDiv @ 0x1C0011F10 (EngMulDiv.c)
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C004E2E0 (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GetNormalizedMouseSensitivityFactor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CDeviceAcceleration *v4; // rdi
  unsigned int v6; // ebx

  v4 = qword_1C0241098;
  if ( (unsigned int)(*((_DWORD *)qword_1C0241098 + 26) - 1) > 0x13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v6 = *((_DWORD *)v4 + 27);
  CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity((CDeviceAcceleration *)((char *)v4 + 104), a2, a3, a4);
  if ( a1 && *(_WORD *)(a1 + 20) > 0x60u )
    return (unsigned int)EngMulDiv(v6, *(unsigned __int16 *)(a1 + 20), 96);
  return v6;
}
