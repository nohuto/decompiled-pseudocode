/*
 * XREFs of IovpUnloadDriver @ 0x1409C29F8
 * Callers:
 *     IovUnloadDrivers @ 0x1409C22D0 (IovUnloadDrivers.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IopCheckUnloadDriver @ 0x1403797AC (IopCheckUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObMakeTemporaryObject @ 0x140704430 (ObMakeTemporaryObject.c)
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
