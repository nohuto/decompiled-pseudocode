/*
 * XREFs of NdisIMCancelInitializeDeviceInstance @ 0x1C0066640
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x1C0012BE8 (WPP_RECORDER_SF_qZ.c)
 *     WPP_RECORDER_SF_qZL @ 0x1C002E4D0 (WPP_RECORDER_SF_qZL.c)
 *     ?ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z @ 0x1C0066000 (-ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z.c)
 */

NDIS_STATUS __stdcall NdisIMCancelInitializeDeviceInstance(NDIS_HANDLE DriverHandle, PNDIS_STRING DeviceInstance)
{
  char v4; // al
  int v5; // edx
  NDIS_STATUS v6; // ebx
  char v8[4]; // [rsp+38h] [rbp-10h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)DeviceInstance,
      1u,
      0x36u,
      &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
      (char)DriverHandle,
      &DeviceInstance->Length);
  v4 = 1 - ndisIMCheckDeviceInstance((struct _NDIS_M_DRIVER_BLOCK *)DriverHandle, DeviceInstance, 0LL);
  v6 = v4 != 0 ? 0xC0000001 : 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = v4 != 0 ? 0xC0000001 : 0;
    WPP_RECORDER_SF_qZL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      1u,
      0x37u,
      &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
      (char)DriverHandle,
      &DeviceInstance->Length,
      *(_DWORD *)v8);
  }
  return v6;
}
