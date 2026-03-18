/*
 * XREFs of ACPIRootIrpCancelRemoveOrStopDevice @ 0x1C00B4790
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C0001908 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001CCC (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C0005398 (ACPIThermalAcquireCoolingInterfaces.c)
 */

__int64 __fastcall ACPIRootIrpCancelRemoveOrStopDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rbx
  unsigned __int8 MinorFunction; // bp
  __int64 v6; // rcx
  unsigned int v7; // esi
  char *IrpText; // rax
  const char *v9; // r8
  const char *v10; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = DeviceExtension;
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( (*(_DWORD *)(DeviceExtension + 8) & 0x200000) == 0 )
  {
    if ( *(_DWORD *)(DeviceExtension + 368) == 1 )
      *(_DWORD *)(DeviceExtension + 368) = *(_DWORD *)(DeviceExtension + 372);
    if ( !*(_QWORD *)(DeviceExtension + 656) )
      ACPIThermalAcquireCoolingInterfaces(DeviceExtension);
  }
  a2->IoStatus.Status = 0;
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  v7 = IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 776), a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v6, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xAu,
      (__int64)&WPP_15e34f0648cb3b62da1476f0e646a08b_Traceguids,
      (char)a2,
      IrpText,
      v7,
      v4,
      v9,
      v10);
  }
  return v7;
}
