/*
 * XREFs of HalGetScatterGatherList @ 0x14023A860
 * Callers:
 *     <none>
 * Callees:
 *     HalBuildScatterGatherListV2 @ 0x140221330 (HalBuildScatterGatherListV2.c)
 *     HalpDmaGetAdapterVersion @ 0x14023A8D0 (HalpDmaGetAdapterVersion.c)
 *     HalpBuildScatterGatherList @ 0x140512054 (HalpBuildScatterGatherList.c)
 */

NTSTATUS __stdcall HalGetScatterGatherList(
        PADAPTER_OBJECT DmaAdapter,
        PDEVICE_OBJECT DeviceObject,
        PMDL Mdl,
        PVOID CurrentVa,
        ULONG Length,
        PDRIVER_LIST_CONTROL ExecutionRoutine,
        PVOID Context,
        BOOLEAN WriteToDevice)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r11

  if ( (unsigned int)HalpDmaGetAdapterVersion(DmaAdapter, DeviceObject, Mdl, CurrentVa) == 2 )
    return HalBuildScatterGatherListV2(
             v10,
             v11,
             (__int64 *)v8,
             v9,
             Length,
             (void (__fastcall *)(__int64, _QWORD, char *, __int64))ExecutionRoutine,
             (__int64)Context,
             WriteToDevice,
             0LL,
             0);
  else
    return HalpBuildScatterGatherList(
             v10,
             v11,
             0,
             v8,
             v9 - *(unsigned int *)(v8 + 44) - *(_QWORD *)(v8 + 32),
             Length,
             0,
             (__int64)ExecutionRoutine,
             (__int64)Context,
             WriteToDevice,
             0LL,
             0);
}
