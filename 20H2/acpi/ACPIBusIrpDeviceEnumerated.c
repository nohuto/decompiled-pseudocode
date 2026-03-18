/*
 * XREFs of ACPIBusIrpDeviceEnumerated @ 0x1C0099450
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C0001E60 (ACPIDispatchForwardIrp.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C00029E4 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0002C90 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1C009841C (ACPIIrpSetPagableCompletionRoutineAndForward.c)
 *     ACPIQueryPhysicalDeviceLocation @ 0x1C009981C (ACPIQueryPhysicalDeviceLocation.c)
 *     ACPIQueryDeviceBiosName @ 0x1C00999C0 (ACPIQueryDeviceBiosName.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0099B08 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0099D50 (ACPIQueryCacheCoherencyAttribute.c)
 */

__int64 __fastcall ACPIBusIrpDeviceEnumerated(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned __int8 MinorFunction; // r12
  __int64 DeviceExtension; // rax
  char v6; // di
  const char *v7; // rbp
  ULONG_PTR v8; // rbx
  int v9; // esi
  __int64 v10; // rcx
  char *v11; // rax
  const char *v12; // r8
  __int64 v14; // r9
  char *IrpText; // rax
  const char *v16; // r8
  char v17; // r10
  const char *v18; // r11
  __int64 v19; // rcx
  char *v20; // rax
  const char *v21; // r8
  const char *v22; // r10
  __int64 v23; // rax
  __int64 v24; // rcx
  char *v25; // rax
  const char *v26; // r8
  __int128 Data; // [rsp+60h] [rbp-38h] BYREF

  Data = 0LL;
  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  v6 = 0;
  v7 = byte_1C00701BA;
  v8 = DeviceExtension;
  if ( !DeviceExtension )
  {
    v9 = -1073741823;
    goto LABEL_3;
  }
  ACPIQueryPhysicalDeviceLocation(DeviceExtension);
  if ( (*(_QWORD *)(v8 + 8) & 0x8000000000000LL) == 0
    && (int)ACPIQueryDeviceBiosName(*(_QWORD *)(v8 + 728), &Data) >= 0
    && *((_QWORD *)&Data + 1) )
  {
    IoSetDevicePropertyData(
      *(PDEVICE_OBJECT *)(v8 + 744),
      &DEVPKEY_Device_BiosDeviceName,
      0,
      0,
      0x12u,
      (unsigned __int16)Data + 2,
      *((PVOID *)&Data + 1));
    ExFreePoolWithTag(*((PVOID *)&Data + 1), 0x53706341u);
  }
  if ( (*(_QWORD *)(v8 + 8) & 0x102000000LL) != 0
    && (int)AcpiQueryPciDeviceChassisLabel(v8) < 0
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(*(_QWORD *)(v8 + 8), 0x19u);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0x1Au,
      (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
      (char)Irp,
      IrpText,
      v17,
      v8,
      v18,
      v16);
  }
  if ( *(_QWORD *)(v8 + 752) == RootDeviceExtension )
  {
    v9 = ACPIQueryCacheCoherencyAttribute(v8);
    if ( v9 < 0 )
    {
      v19 = 0x200000000000LL;
      if ( (*(_QWORD *)(v8 + 8) & 0x200000000000LL) != 0 )
        v19 = 0x400000000000LL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = ACPIDebugGetIrpText(v19, 0x19u);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x1Bu,
          (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
          (char)Irp,
          v20,
          v9,
          v8,
          v22,
          v21);
      }
    }
  }
  else
  {
    v9 = 0;
  }
  v23 = *(_QWORD *)(v8 + 8);
  if ( (v23 & 0x40) != 0 )
  {
    v9 = ACPIIrpSetPagableCompletionRoutineAndForward(
           DeviceObject,
           Irp,
           (__int64)ACPIFilterIrpDeviceEnumeratedCompletion,
           v14,
           1,
           0,
           0);
    if ( v9 < 0 )
    {
      v24 = 0x200000000000LL;
      if ( (*(_QWORD *)(v8 + 8) & 0x200000000000LL) != 0 )
      {
        v7 = *(const char **)(v8 + 568);
        v24 = 0x400000000000LL;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = ACPIDebugGetIrpText(v24, 0x19u);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x1Cu,
          (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
          (char)Irp,
          v25,
          v9,
          v8,
          v7,
          v26);
      }
    }
    return (unsigned int)v9;
  }
  if ( (v23 & 0x10) == 0 )
  {
LABEL_3:
    Irp->IoStatus.Status = v9;
    IofCompleteRequest(Irp, 0);
    if ( v8 )
    {
      v10 = 0x200000000000LL;
      v6 = v8;
      if ( (*(_QWORD *)(v8 + 8) & 0x200000000000LL) != 0 )
      {
        v7 = *(const char **)(v8 + 568);
        v10 = 0x400000000000LL;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = ACPIDebugGetIrpText(v10, MinorFunction);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        5u,
        0x1Du,
        (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
        (char)Irp,
        v11,
        v9,
        v6,
        v7,
        v12);
    }
    return (unsigned int)v9;
  }
  return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
}
