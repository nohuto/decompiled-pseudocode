/*
 * XREFs of ACPIBusIrpDeviceEnumerated @ 0x1C00937D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C0001660 (ACPIDispatchForwardIrp.c)
 *     ACPIDebugGetIrpText @ 0x1C0001908 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001CCC (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIQueryDeviceBiosNameEx @ 0x1C0006494 (ACPIQueryDeviceBiosNameEx.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0090240 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIQueryPhysicalDeviceLocation @ 0x1C00939F8 (ACPIQueryPhysicalDeviceLocation.c)
 *     ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1C009EABC (ACPIIrpSetPagableCompletionRoutineAndForward.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C00A0518 (ACPIQueryCacheCoherencyAttribute.c)
 */

__int64 __fastcall ACPIBusIrpDeviceEnumerated(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned __int8 MinorFunction; // r12
  __int64 DeviceExtension; // rax
  char v6; // di
  const char *v7; // rbp
  ULONG_PTR v8; // rbx
  __int64 v9; // rcx
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rcx
  char *v13; // rax
  const char *v14; // r8
  __int64 v16; // rcx
  char *IrpText; // rax
  const char *v18; // r8
  char v19; // r10
  const char *v20; // r11
  char *v21; // rax
  const char *v22; // r8
  const char *v23; // r10
  char *v24; // rax
  const char *v25; // r8
  struct _UNICODE_STRING Data; // [rsp+60h] [rbp-38h] BYREF

  Data = 0LL;
  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  v6 = 0;
  v7 = (const char *)&unk_1C006FB8B;
  v8 = DeviceExtension;
  if ( !DeviceExtension )
  {
    v10 = -1073741823;
    goto LABEL_12;
  }
  ACPIQueryPhysicalDeviceLocation(DeviceExtension);
  if ( !_bittest64((const signed __int64 *)(v8 + 8), 0x33u)
    && (int)ACPIQueryDeviceBiosNameEx(*(_QWORD *)(v8 + 768), 1u, &Data) >= 0
    && Data.Buffer )
  {
    IoSetDevicePropertyData(
      *(PDEVICE_OBJECT *)(v8 + 784),
      &DEVPKEY_Device_BiosDeviceName,
      0,
      0,
      0x12u,
      Data.Length + 2,
      Data.Buffer);
    ExFreePoolWithTag(Data.Buffer, 0x53706341u);
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
      (__int64)&WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids,
      (char)Irp,
      IrpText,
      v19,
      v8,
      v20,
      v18);
  }
  if ( *(_QWORD *)(v8 + 792) == RootDeviceExtension )
  {
    v10 = ACPIQueryCacheCoherencyAttribute(v8);
    if ( v10 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = ACPIDebugGetIrpText(v9, 0x19u);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x1Bu,
        (__int64)&WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids,
        (char)Irp,
        v21,
        v10,
        v8,
        v23,
        v22);
    }
  }
  else
  {
    v10 = 0;
  }
  v11 = *(_QWORD *)(v8 + 8);
  if ( (v11 & 0x40) != 0 )
  {
    v10 = ACPIIrpSetPagableCompletionRoutineAndForward(DeviceObject, Irp, 1, 0, 0);
    if ( v10 < 0 )
    {
      if ( (*(_QWORD *)(v8 + 8) & 0x200000000000LL) != 0 )
        v7 = *(const char **)(v8 + 608);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v24 = ACPIDebugGetIrpText(v16, 0x19u);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x1Cu,
          (__int64)&WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids,
          (char)Irp,
          v24,
          v10,
          v8,
          v7,
          v25);
      }
    }
    return (unsigned int)v10;
  }
  if ( (v11 & 0x10) == 0 )
  {
LABEL_12:
    Irp->IoStatus.Status = v10;
    IofCompleteRequest(Irp, 0);
    if ( v8 )
    {
      v6 = v8;
      if ( (*(_QWORD *)(v8 + 8) & 0x200000000000LL) != 0 )
        v7 = *(const char **)(v8 + 608);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = ACPIDebugGetIrpText(v12, MinorFunction);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        5u,
        0x1Du,
        (__int64)&WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids,
        (char)Irp,
        v13,
        v10,
        v6,
        v7,
        v14);
    }
    return (unsigned int)v10;
  }
  return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
}
