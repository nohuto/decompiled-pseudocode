/*
 * XREFs of GetMouseSensitivity @ 0x1C01AB7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C004E2E0 (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GetMouseSensitivity(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  CDeviceAcceleration *v4; // rbx

  v4 = qword_1C0241098;
  if ( a1 )
  {
    if ( (unsigned int)(*((_DWORD *)qword_1C0241098 + 26) - 1) > 0x13 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    *a1 = *((_DWORD *)v4 + 27);
  }
  return CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity(
           (CDeviceAcceleration *)((char *)v4 + 104),
           a2,
           a3,
           a4);
}
