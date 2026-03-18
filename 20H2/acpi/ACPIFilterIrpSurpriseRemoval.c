/*
 * XREFs of ACPIFilterIrpSurpriseRemoval @ 0x1C00A2F70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C00029E4 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_sDqss @ 0x1C0030A10 (WPP_RECORDER_SF_sDqss.c)
 *     ACPIInternalIsReportedMissing @ 0x1C0056DF0 (ACPIInternalIsReportedMissing.c)
 *     ACPIFilterIrpStopDevice @ 0x1C00AF810 (ACPIFilterIrpStopDevice.c)
 */

__int64 __fastcall ACPIFilterIrpSurpriseRemoval(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  char *IrpText; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v13; // [rsp+20h] [rbp-38h]

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x8000000000000LL) != 0 || ACPIInternalIsReportedMissing(DeviceExtension) )
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    v5 = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 736), a2);
    v6 = 0x200000000000LL;
    v7 = v5;
    if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
      v6 = 0x400000000000LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      IrpText = ACPIDebugGetIrpText(v6, 0x17u);
      WPP_RECORDER_SF_sDqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v9,
        v10,
        v11,
        v13,
        IrpText,
        v7,
        DeviceExtension,
        v10,
        v11);
    }
    return v7;
  }
  else
  {
    *(_DWORD *)(DeviceExtension + 328) = 1;
    return ACPIFilterIrpStopDevice(a1, a2);
  }
}
