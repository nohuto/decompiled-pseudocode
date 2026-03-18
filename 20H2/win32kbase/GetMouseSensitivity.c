/*
 * XREFs of GetMouseSensitivity @ 0x1C01A9420
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C00AF1B0 (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GetMouseSensitivity(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  CDeviceAcceleration *v4; // rbx

  v4 = qword_1C023F098;
  if ( a1 )
  {
    if ( (unsigned int)(*((_DWORD *)qword_1C023F098 + 26) - 1) > 0x13 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    *a1 = *((_DWORD *)v4 + 27);
  }
  return CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity(
           (CDeviceAcceleration *)((char *)v4 + 104),
           a2,
           a3,
           a4);
}
