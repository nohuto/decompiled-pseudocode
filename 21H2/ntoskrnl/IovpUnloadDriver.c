/*
 * XREFs of IovpUnloadDriver @ 0x1409C5A18
 * Callers:
 *     IovUnloadDrivers @ 0x1409C52F0 (IovUnloadDrivers.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x1403538F0 (KeInitializeEvent.c)
 *     IopCheckUnloadDriver @ 0x14037C4EC (IopCheckUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memset @ 0x140414200 (memset.c)
 *     ObMakeTemporaryObject @ 0x14062C010 (ObMakeTemporaryObject.c)
 */

__int64 __fastcall IovpUnloadDriver(struct _DMA_ADAPTER *Object)
{
  bool v1; // zf
  _BYTE WorkItem[80]; // [rsp+30h] [rbp-50h] BYREF
  char v5; // [rsp+90h] [rbp+10h] BYREF

  v1 = Object[6].DmaOperations == 0LL;
  v5 = 0;
  if ( v1 )
    return 3221225488LL;
  ObfReferenceObject(Object);
  if ( (int)IopCheckUnloadDriver(Object, &v5) >= 0 )
    return 259LL;
  HalPutDmaAdapter(Object);
  if ( !v5 )
    return 259LL;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
  {
    ((void (__fastcall *)(struct _DMA_ADAPTER *))Object[6].DmaOperations)(Object);
  }
  else
  {
    memset(WorkItem, 0, sizeof(WorkItem));
    KeInitializeEvent((PRKEVENT)&WorkItem[32], NotificationEvent, 0);
    *(_QWORD *)WorkItem = 0LL;
    *(_QWORD *)&WorkItem[16] = IopLoadUnloadDriver;
    *(_QWORD *)&WorkItem[56] = Object;
    *(_QWORD *)&WorkItem[24] = WorkItem;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)WorkItem, DelayedWorkQueue);
    KeWaitForSingleObject(&WorkItem[32], Executive, 0, 0, 0LL);
  }
  ObMakeTemporaryObject(Object);
  HalPutDmaAdapter(Object);
  return 0LL;
}
