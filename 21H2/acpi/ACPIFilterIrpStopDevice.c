/*
 * XREFs of ACPIFilterIrpStopDevice @ 0x1C00AFB30
 * Callers:
 *     ACPIFilterIrpSurpriseRemoval @ 0x1C00A3290 (ACPIFilterIrpSurpriseRemoval.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0002DA4 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0003050 (WPP_RECORDER_SF_qsLqss.c)
 *     EnableDisableRegions @ 0x1C009D934 (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1C009DA40 (IsNsobjPciBus.c)
 */

__int64 __fastcall ACPIFilterIrpStopDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rdi
  char v7; // bp
  __int64 v8; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v10; // rax
  __int64 v11; // rcx
  char *IrpText; // rax
  unsigned __int8 v13; // dl
  const char *v14; // r8
  const char *v15; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = DeviceExtension;
  if ( *(_DWORD *)(DeviceExtension + 328) == 1 )
  {
    v6 = *(_QWORD *)(DeviceExtension + 960) & 0x8000LL;
    v7 = (*(_QWORD *)(DeviceExtension + 960) & 0x8000) != 0;
    v8 = ACPIInternalGetDeviceExtension(*(_QWORD *)(DeviceExtension + 728));
    if ( IsNsobjPciBus(*(volatile signed __int32 **)(v8 + 720)) || v6 )
      EnableDisableRegions(*(__int64 **)(v4 + 720), 0, v7);
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v10 = a2->Tail.Overlay.CurrentStackLocation;
    v10[-1].Context = 0LL;
    v10[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIFilterIrpStopDeviceCompletion;
    v10[-1].Control = -32;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 688));
    v5 = IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 736), a2);
  }
  else
  {
    v5 = -1073741808;
    a2->IoStatus.Status = -1073741808;
    IofCompleteRequest(a2, 0);
  }
  v11 = 0x200000000000LL;
  if ( (*(_QWORD *)(v4 + 8) & 0x200000000000LL) != 0 )
    v11 = 0x400000000000LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v11, 4u);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v13,
      5u,
      0x1Du,
      (__int64)&WPP_22c0b63b2f1d30c22e2e761bc8912dea_Traceguids,
      (char)a2,
      IrpText,
      v5,
      v4,
      v14,
      v15);
  }
  return v5;
}
