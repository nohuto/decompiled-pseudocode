/*
 * XREFs of GetNormalizedMouseSensitivityFactor @ 0x1C01B15B0
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00A5E98 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 * Callees:
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C0041770 (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 *     EngMulDiv @ 0x1C006C3E0 (EngMulDiv.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GetNormalizedMouseSensitivityFactor(__int64 a1)
{
  CDeviceAcceleration *v1; // rdi
  unsigned int v3; // ebx

  v1 = qword_1C0247098;
  if ( (unsigned int)(*((_DWORD *)qword_1C0247098 + 26) - 1) > 0x13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v3 = *((_DWORD *)v1 + 27);
  CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity((CDeviceAcceleration *)((char *)v1 + 104));
  if ( a1 && *(_WORD *)(a1 + 20) > 0x60u )
    return (unsigned int)EngMulDiv(v3, *(unsigned __int16 *)(a1 + 20), 96);
  return v3;
}
