/*
 * XREFs of ACPIBusIrpStopDevice @ 0x1C00AE050
 * Callers:
 *     ACPIEcStopDevice @ 0x1C0053DF0 (ACPIEcStopDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0002DA4 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0003050 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C0031680 (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIFanStopDevice @ 0x1C005570C (ACPIFanStopDevice.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C005C920 (EnableDisableRegionSpacesForDevice.c)
 *     ACPIThermalStopZone @ 0x1C0060294 (ACPIThermalStopZone.c)
 *     ACPIInitStopDevice @ 0x1C0090C3C (ACPIInitStopDevice.c)
 *     EnableDisableRegions @ 0x1C009D934 (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1C009DA40 (IsNsobjPciBus.c)
 *     EnableDisableIPMIRegions @ 0x1C00B0090 (EnableDisableIPMIRegions.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1C00B0D94 (ACPIPepCleanupPlatformNotificationSupport.c)
 */

__int64 __fastcall ACPIBusIrpStopDevice(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // r14
  __int64 DeviceExtension; // rbx
  int v5; // eax
  __int64 v6; // rdi
  char v7; // bp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  char *IrpText; // rax
  const char *v13; // r8
  const char *v14; // r10

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_DWORD *)(DeviceExtension + 328);
  if ( v5 != 1 )
  {
    if ( v5 == 3 && (*(_DWORD *)(DeviceExtension + 628) & 0x300) != 0 )
      EnableDisableRegionSpacesForDevice(DeviceExtension, 0);
    *(_DWORD *)(DeviceExtension + 328) = *(_DWORD *)(DeviceExtension + 332);
  }
  ACPIThermalReleaseCoolingInterfaces(DeviceExtension);
  v6 = *(_QWORD *)(DeviceExtension + 960) & 0x8000LL;
  v7 = (*(_QWORD *)(DeviceExtension + 960) & 0x8000) != 0;
  v8 = ACPIInternalGetDeviceExtension(*(_QWORD *)(DeviceExtension + 728));
  if ( IsNsobjPciBus(*(volatile signed __int32 **)(v8 + 720)) || v6 )
    EnableDisableRegions(*(__int64 **)(DeviceExtension + 720), 0, v7);
  v9 = *(_QWORD *)(DeviceExtension + 8);
  if ( (v9 & 0x1000) != 0 )
  {
    EnableDisableIPMIRegions(*(_QWORD *)(DeviceExtension + 720), 0LL);
    v9 = *(_QWORD *)(DeviceExtension + 8);
  }
  if ( (v9 & 0x8000000) != 0 )
  {
    ACPIThermalStopZone(DeviceExtension);
  }
  else
  {
    v10 = *(_QWORD *)(DeviceExtension + 960);
    if ( (v10 & 0x200000000LL) != 0 )
    {
      ACPIFanStopDevice(DeviceExtension);
    }
    else if ( (v10 & 0x10000000000LL) != 0 )
    {
      ACPIPepCleanupPlatformNotificationSupport(DeviceExtension);
    }
  }
  *(_DWORD *)(DeviceExtension + 328) = 0;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  ACPIInitStopDevice(DeviceExtension, 0);
  v11 = 0x200000000000LL;
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
    v11 = 0x400000000000LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v11, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x3Fu,
      (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
      (char)a2,
      IrpText,
      0,
      DeviceExtension,
      v13,
      v14);
  }
  return 0LL;
}
