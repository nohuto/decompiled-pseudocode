/*
 * XREFs of ?ndisVBusNmrInitializeClient@@YAJXZ @ 0x1C01459EC
 * Callers:
 *     DriverEntry @ 0x1C01438B0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS ndisVBusNmrInitializeClient(void)
{
  LOBYTE(WPP_MAIN_CB.DeviceQueue.Lock) = 0;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)&WPP_MAIN_CB.DeviceQueue.32);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&WPP_MAIN_CB.DeviceQueue.32);
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  WPP_MAIN_CB.Dpc.ProcessorHistory = (unsigned __int64)ndisVBusDetachComplete;
  *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong = 0LL;
  WPP_MAIN_CB.Queue.ListEntry.Blink = (_LIST_ENTRY *)ndisVBusNmrClientAttachProvider;
  LODWORD(WPP_MAIN_CB.Queue.ListEntry.Flink) = 4718592;
  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = ndisVBusNmrClientDetachProvider;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = 2621441;
  WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))NdisQueryOffloadState;
  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = &NPI_NDIS_VBUS_INTERFACE_ID;
  WPP_MAIN_CB.Queue.Wcb.DeviceObject = (void *)&NPI_MS_NDIS_MODULEID;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) = 0;
  WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = 0LL;
  return NmrRegisterClient(
           (PNPI_CLIENT_CHARACTERISTICS)&WPP_MAIN_CB.Queue,
           0LL,
           (PHANDLE)&WPP_MAIN_CB.AlignmentRequirement);
}
