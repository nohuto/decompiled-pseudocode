/*
 * XREFs of UnpackMouseSettings @ 0x1C01AC7E0
 * Callers:
 *     ?ivHandleSettingsPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B5A70 (-ivHandleSettingsPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C000FDD8 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 *     ?UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z @ 0x1C00257C4 (-UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z.c)
 *     BroadcastSettingsUpdateToAllContainers @ 0x1C0025820 (BroadcastSettingsUpdateToAllContainers.c)
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C004E2E0 (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     SetSwapMouseButton @ 0x1C012C820 (SetSwapMouseButton.c)
 *     WPP_RECORDER_SF_s @ 0x1C0155A3C (WPP_RECORDER_SF_s.c)
 */

void *__fastcall UnpackMouseSettings(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  const char *v6; // rax
  unsigned int v7; // ebx
  int v8; // edx
  __int64 v9; // r8
  __int64 v10; // r9
  void *result; // rax
  int v12; // ebx
  __int64 v13; // [rsp+28h] [rbp-10h]

  v4 = *a1;
  if ( *a1 != *((_DWORD *)gpsi + 497) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = "swapped";
      if ( !v4 )
        v6 = "not swapped";
      WPP_RECORDER_SF_s(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        a2,
        12,
        10,
        (__int64)&WPP_e18a3e3623fd345076d33ab3e1bf5af6_Traceguids,
        (__int64)v6);
    }
    SetSwapMouseButton(v4 != 0);
  }
  v7 = a1[1];
  if ( v7 != (unsigned int)CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity(
                             (CDeviceAcceleration *)((char *)qword_1C0241098 + 104),
                             a2,
                             a3,
                             a4) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v13) = v7;
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v8,
        12,
        11,
        (__int64)&WPP_e18a3e3623fd345076d33ab3e1bf5af6_Traceguids,
        v13);
    }
    if ( v7 - 1 > 0x13 )
      v7 = *((_DWORD *)qword_1C0241098 + 24);
    CMouseAcceleration::MOUSE_SENSITIVITY_INFO::UpdateMouseSensitivity(
      (CDeviceAcceleration *)((char *)qword_1C0241098 + 104),
      v7,
      v9,
      v10);
    BroadcastSettingsUpdateToAllContainers();
    CDeviceAcceleration::ResetAccelerationCurves(qword_1C0241098);
  }
  result = gpsi;
  v12 = a1[2];
  if ( v12 != *((_DWORD *)gpsi + 1247) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v13) = a1[2];
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v8,
        12,
        12,
        (__int64)&WPP_e18a3e3623fd345076d33ab3e1bf5af6_Traceguids,
        v13);
    }
    result = gpsi;
    *((_DWORD *)gpsi + 1247) = v12;
  }
  return result;
}
