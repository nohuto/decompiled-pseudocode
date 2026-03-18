/*
 * XREFs of ACPIDockIrpSetSystemPower @ 0x1C00494E4
 * Callers:
 *     ACPIDockIrpSetPower @ 0x1C00494B0 (ACPIDockIrpSetPower.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C000D718 (WPP_RECORDER_SF_qdqss.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x1C00500F4 (ACPIDeviceIrpWarmEjectRequest.c)
 *     ACPIDispatchPowerIrpSuccess @ 0x1C0052450 (ACPIDispatchPowerIrpSuccess.c)
 */

__int64 __fastcall ACPIDockIrpSetSystemPower(PDEVICE_OBJECT DeviceObject, PIRP *Irp)
{
  PIRP v2; // rbx
  __int64 DeviceExtension; // rax
  __int64 v6; // r8
  __int64 IrpCount; // rdx
  __int64 v8; // rdi
  __int64 v9; // r15
  POWER_STATE v10; // ebp
  PIRP v11; // rcx
  __int64 v12; // r9
  const char *v13; // rcx
  const char *v14; // r8
  __int64 result; // rax
  __int64 v16; // rdx
  const char *v17; // rcx
  const char *v18; // r8
  PIRP v19; // rax

  v2 = Irp[23];
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  IrpCount = v2->AssociatedIrp.IrpCount;
  v8 = DeviceExtension;
  v9 = *(_QWORD *)(DeviceExtension + 184);
  v10.SystemState = *(_SYSTEM_POWER_STATE *)(DeviceExtension + 4 * IrpCount + 508);
  *(_DWORD *)(v9 + 548) = IrpCount;
  if ( LODWORD(v2->ThreadListEntry.Flink) == 7 )
  {
    v11 = Irp[23];
    *((_DWORD *)Irp + 12) = 0;
    HIBYTE(v11->Size) |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 728));
    v12 = *(_QWORD *)(DeviceExtension + 8);
    v13 = (const char *)&unk_1C006FB8B;
    v14 = (const char *)&unk_1C006FB8B;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v13 = *(const char **)(DeviceExtension + 608);
      if ( (v12 & 0x400000000000LL) != 0 )
        v14 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        IrpCount,
        0xCu,
        0x21u,
        (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
        (char)Irp,
        IrpCount - 1,
        DeviceExtension,
        v13,
        v14);
    LOBYTE(v12) = *(_DWORD *)(v8 + 192) == 4;
    result = ACPIDeviceIrpWarmEjectRequest(v9, Irp, ACPIDeviceIrpCompleteRequest, v12);
    if ( (_DWORD)result == -1073741802 )
      return 259LL;
  }
  else if ( *(_DWORD *)(DeviceExtension + 384) == v10.SystemState )
  {
    return ACPIDispatchPowerIrpSuccess(DeviceObject, Irp, v6);
  }
  else
  {
    v16 = *(_QWORD *)(DeviceExtension + 8);
    v17 = (const char *)&unk_1C006FB8B;
    v18 = (const char *)&unk_1C006FB8B;
    if ( (v16 & 0x200000000000LL) != 0 )
    {
      v17 = *(const char **)(DeviceExtension + 608);
      if ( (v16 & 0x400000000000LL) != 0 )
        v18 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v16,
        0xCu,
        0x22u,
        (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
        (char)Irp,
        LOBYTE(v10.SystemState) - 1,
        DeviceExtension,
        v17,
        v18);
    v19 = Irp[23];
    *((_DWORD *)Irp + 12) = 0;
    HIBYTE(v19->Size) |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 728));
    PoRequestPowerIrp(DeviceObject, 2u, v10, ACPIBusIrpSetSystemPowerComplete, Irp, 0LL);
    return 259LL;
  }
  return result;
}
