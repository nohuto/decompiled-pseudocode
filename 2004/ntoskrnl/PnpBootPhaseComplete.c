/*
 * XREFs of PnpBootPhaseComplete @ 0x14078C594
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x140782FEC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     PnpRequestDeviceAction @ 0x14036DAE4 (PnpRequestDeviceAction.c)
 *     PiDmaGuardInitialize @ 0x1403B4328 (PiDmaGuardInitialize.c)
 *     ExSubscribeWnfStateChange @ 0x1407006B0 (ExSubscribeWnfStateChange.c)
 *     PpDevCfgProcessDevices @ 0x14078C65C (PpDevCfgProcessDevices.c)
 *     PiPnpRtlInit @ 0x14078C6F0 (PiPnpRtlInit.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 PnpBootPhaseComplete()
{
  int v0; // ebx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  v0 = PiPnpRtlInit(2LL);
  if ( v0 >= 0 )
  {
    PnpBootMode = 0;
    if ( PnpSetupOOBEInProgress
      && (int)ExSubscribeWnfStateChange(
                (__int64)&PnpSetupWnfSubscription,
                (__int64)&WNF_DEP_OOBE_COMPLETE,
                1,
                0,
                (__int64)PipUpdateSetupOobeCompleteWnfCallback,
                0LL) < 0 )
    {
      PnpSetupOOBEInProgress = 0;
    }
    v0 = PiDmaGuardInitialize(2);
    if ( v0 >= 0 )
    {
      PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 2, 0, 39LL, 0LL, 0LL, 0LL);
      v0 = PpDevCfgProcessDevices();
      if ( v0 >= 0 )
      {
        PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6E697050u);
        if ( PoolWithTag )
        {
          PoolWithTag->List.Flink = 0LL;
          PoolWithTag->WorkerRoutine = PipUpdateDeviceProducts;
          PoolWithTag->Parameter = PoolWithTag;
          ExQueueWorkItem(PoolWithTag, NormalWorkQueue);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return (unsigned int)v0;
}
