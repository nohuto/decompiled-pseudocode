/*
 * XREFs of ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C00AD900
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C00029E4 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0002C90 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000DA60 (ACPIThermalAcquireCoolingInterfaces.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C005C790 (EnableDisableRegionSpacesForDevice.c)
 */

__int64 __fastcall ACPIBusIrpCancelRemoveOrStopDevice(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // si
  _DWORD *DeviceExtension; // rax
  __int64 v5; // rbx
  int v6; // ecx
  __int64 v7; // rcx
  char *IrpText; // rax
  const char *v9; // r8
  const char *v10; // r10

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = (_DWORD *)ACPIInternalGetDeviceExtension(a1);
  v5 = (__int64)DeviceExtension;
  if ( (DeviceExtension[2] & 0x204000) != 0x200000LL )
  {
    if ( DeviceExtension[82] == 1 )
    {
      v6 = DeviceExtension[83];
      DeviceExtension[82] = v6;
      if ( v6 == 3 && (DeviceExtension[157] & 0x300) != 0 )
        EnableDisableRegionSpacesForDevice((__int64)DeviceExtension, 1);
    }
    if ( !*(_QWORD *)(v5 + 616) )
      ACPIThermalAcquireCoolingInterfaces(v5);
  }
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  v7 = 0x200000000000LL;
  if ( (*(_QWORD *)(v5 + 8) & 0x200000000000LL) != 0 )
    v7 = 0x400000000000LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v7, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x19u,
      (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
      (char)a2,
      IrpText,
      0,
      v5,
      v9,
      v10);
  }
  return 0LL;
}
