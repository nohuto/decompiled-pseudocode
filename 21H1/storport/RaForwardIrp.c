/*
 * XREFs of RaForwardIrp @ 0x1C0011AEC
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000C248 (RaidAdapterDeviceControlIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C000EEA8 (RaidAdapterPowerIrp.c)
 *     RaidAdapterPnpIrp @ 0x1C0013AB4 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0013C54 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterQueryIdIrp @ 0x1C002C4CC (RaidAdapterQueryIdIrp.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C002C560 (RaidAdapterQueryInterfaceIrp.c)
 *     RaidAdapterQueryPnpDeviceStateIrp @ 0x1C007195C (RaidAdapterQueryPnpDeviceStateIrp.c)
 *     RaidAdapterCancelRemoveDeviceIrp @ 0x1C0075DE0 (RaidAdapterCancelRemoveDeviceIrp.c)
 *     RaidAdapterQueryRemoveDeviceIrp @ 0x1C007790C (RaidAdapterQueryRemoveDeviceIrp.c)
 *     RaidAdapterQueryStopDeviceIrp @ 0x1C00779AC (RaidAdapterQueryStopDeviceIrp.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0077D68 (RaidAdapterStopDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0077F30 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaForwardIrp(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  return IofCallDriver(a1, a2);
}
