/*
 * XREFs of IovpUnloadDriver @ 0x140A81078
 * Callers:
 *     IovUnloadDrivers @ 0x140A80940 (IovUnloadDrivers.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     IopCheckUnloadDriver @ 0x1403D8834 (IopCheckUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObMakeTemporaryObject @ 0x1406E1700 (ObMakeTemporaryObject.c)
 */

__int64 __fastcall IovpUnloadDriver(_QWORD *Object)
{
  bool v1; // zf
  _BYTE WorkItem[80]; // [rsp+30h] [rbp-50h] BYREF
  char v5; // [rsp+90h] [rbp+10h] BYREF

  v1 = Object[13] == 0LL;
  v5 = 0;
  if ( v1 )
    return 3221225488LL;
  ObfReferenceObject(Object);
  if ( (int)IopCheckUnloadDriver(Object, &v5) >= 0 )
    return 259LL;
  ObfDereferenceObject(Object);
  if ( !v5 )
    return 259LL;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
  {
    ((void (__fastcall *)(_QWORD *))Object[13])(Object);
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
  ObfDereferenceObject(Object);
  return 0LL;
}
