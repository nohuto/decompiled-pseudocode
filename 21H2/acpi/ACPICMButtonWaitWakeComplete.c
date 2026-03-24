/*
 * XREFs of ACPICMButtonWaitWakeComplete @ 0x1C004EC60
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00209B0 (WPP_RECORDER_SF_Lqss.c)
 */

void __fastcall ACPICMButtonWaitWakeComplete(
        ULONG_PTR DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  _QWORD *DeviceExtension; // rax
  char v6; // dl
  int Status; // r11d
  void *v8; // rcx
  void *v9; // r10
  __int64 v10; // r9
  __int64 v11; // r9

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(DeviceObject);
  v6 = 0;
  Status = IoStatus->Status;
  v8 = &unk_1C00701BA;
  v9 = &unk_1C00701BA;
  if ( IoStatus->Status >= 0 )
  {
    if ( DeviceExtension )
    {
      v11 = DeviceExtension[1];
      v6 = (char)DeviceExtension;
      if ( (v11 & 0x200000000000LL) != 0 )
      {
        v8 = (void *)DeviceExtension[71];
        if ( (v11 & 0x400000000000LL) != 0 )
          v9 = (void *)DeviceExtension[72];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0x16u,
        (__int64)&WPP_2bc47f5d635e376f4e7295df6662785e_Traceguids,
        Status,
        v6,
        (__int64)v8,
        (__int64)v9);
  }
  else
  {
    if ( DeviceExtension )
    {
      v10 = DeviceExtension[1];
      v6 = (char)DeviceExtension;
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v8 = (void *)DeviceExtension[71];
        if ( (v10 & 0x400000000000LL) != 0 )
          v9 = (void *)DeviceExtension[72];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x11u,
        0x15u,
        (__int64)&WPP_2bc47f5d635e376f4e7295df6662785e_Traceguids,
        Status,
        v6,
        (__int64)v8,
        (__int64)v9);
  }
}
