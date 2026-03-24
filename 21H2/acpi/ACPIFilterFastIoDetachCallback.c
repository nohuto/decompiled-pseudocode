/*
 * XREFs of ACPIFilterFastIoDetachCallback @ 0x1C002CEB0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qss @ 0x1C001DAB8 (WPP_RECORDER_SF_qss.c)
 *     ACPIInitResetDeviceExtension @ 0x1C002CF60 (ACPIInitResetDeviceExtension.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C002D204 (ACPIInitDeleteChildDeviceList.c)
 */

char __fastcall ACPIFilterFastIoDetachCallback(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rax
  ULONG_PTR v2; // rbx
  const char *v3; // rcx
  const char *v4; // rdx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v2 = DeviceExtension;
  if ( DeviceExtension )
  {
    DeviceExtension = *(_QWORD *)(DeviceExtension + 8);
    v3 = (const char *)&unk_1C00701BA;
    v4 = (const char *)&unk_1C00701BA;
    if ( (DeviceExtension & 0x200000000000LL) != 0 )
    {
      v3 = *(const char **)(v2 + 568);
      if ( (DeviceExtension & 0x400000000000LL) != 0 )
        v4 = *(const char **)(v2 + 576);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_qss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xCu,
        0xAu,
        (__int64)&WPP_22c0b63b2f1d30c22e2e761bc8912dea_Traceguids,
        v2,
        v3,
        v4);
      DeviceExtension = *(_QWORD *)(v2 + 8);
    }
    LOBYTE(DeviceExtension) = DeviceExtension & 0x60;
    if ( (_BYTE)DeviceExtension == 64 )
    {
      *(_DWORD *)(v2 + 328) = 4;
      ACPIInitDeleteChildDeviceList(v2);
      LOBYTE(DeviceExtension) = ACPIInitResetDeviceExtension(v2);
    }
  }
  return DeviceExtension;
}
