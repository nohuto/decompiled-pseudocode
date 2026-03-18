/*
 * XREFs of KiInitSystem @ 0x140A5FFA0
 * Callers:
 *     KiInitializeKernel @ 0x140998980 (KiInitializeKernel.c)
 * Callees:
 *     KiForceSymbolReferences @ 0x140A8F49C (KiForceSymbolReferences.c)
 */

__int64 (*KiInitSystem())()
{
  __int64 v0; // rcx
  _QWORD *v1; // rax
  __int64 (*result)(); // rax

  if ( KiForceSymbolReferencesTrigger )
    KiForceSymbolReferences();
  v0 = 1024LL;
  LODWORD(xmmword_140E018F0) = 0;
  qword_140C32138 = (__int64)&KeBugCheckCallbackListHead;
  KeBugCheckCallbackListHead = (__int64)&KeBugCheckCallbackListHead;
  qword_140C31BC8 = (__int64)&KeBugCheckReasonCallbackListHead;
  KeBugCheckReasonCallbackListHead = &KeBugCheckReasonCallbackListHead;
  qword_140C31BB8 = (__int64)&KeBugCheckAddRemovePagesCallbackListHead;
  KeBugCheckAddRemovePagesCallbackListHead = (__int64)&KeBugCheckAddRemovePagesCallbackListHead;
  qword_140C31BD8 = (__int64)&KeBugCheckTriageDumpDataArrayListHead;
  KeBugCheckTriageDumpDataArrayListHead = (__int64)&KeBugCheckTriageDumpDataArrayListHead;
  qword_140C31FB8 = (__int64)&KiProfileListHead;
  KiProfileListHead = (__int64)&KiProfileListHead;
  qword_140C31FA8 = (__int64)&KiProfileSourceListHead;
  KiProfileSourceListHead = (__int64)&KiProfileSourceListHead;
  KiSwapEvent.Header.WaitListHead.Blink = &KiSwapEvent.Header.WaitListHead;
  KiSwapEvent.Header.WaitListHead.Flink = &KiSwapEvent.Header.WaitListHead;
  *(_QWORD *)&KeServiceDescriptorTable = KiServiceTable;
  LODWORD(xmmword_140E018D0) = KiServiceLimit;
  *((_QWORD *)&xmmword_140E018D0 + 1) = KiArgumentTable;
  qword_140C320F8 = (__int64)KiBalanceSetManagerDeferredRoutine;
  qword_140C32100 = (__int64)&KiBalanceSetManagerPeriodicEvent;
  qword_140C32010 = (__int64)&qword_140C32008;
  qword_140C32008 = (__int64)&qword_140C32008;
  KiStackProtectNotifyEvent.Header.WaitListHead.Blink = &KiStackProtectNotifyEvent.Header.WaitListHead;
  KiStackProtectNotifyEvent.Header.WaitListHead.Flink = &KiStackProtectNotifyEvent.Header.WaitListHead;
  v1 = &KiAbTreeArray;
  KeBugCheckCallbackLock = 0LL;
  LOWORD(KiSwapEvent.Header.Lock) = 1;
  KiSwapEvent.Header.Size = 6;
  KiSwapEvent.Header.SignalState = 0;
  KiProcessInSwapListHead = 0LL;
  KiProcessOutSwapListHead = 0LL;
  KiStackInSwapListHead = 0LL;
  KeServiceDescriptorTableShadow = KeServiceDescriptorTable;
  xmmword_140CFCA50 = xmmword_140E018D0;
  xmmword_140CFCA60 = xmmword_140E018E0;
  xmmword_140CFCA70 = xmmword_140E018F0;
  KeServiceDescriptorTableFilter[0] = KeServiceDescriptorTable;
  xmmword_140CFCBD0 = xmmword_140E018D0;
  xmmword_140CFCBE0 = xmmword_140E018E0;
  xmmword_140CFCBF0 = xmmword_140E018F0;
  LODWORD(KiBalanceSetManagerPeriodicDpc) = 275;
  qword_140C32118 = 0LL;
  qword_140C320F0 = 0LL;
  KiBalanceSetManagerPeriodicEvent = 1;
  byte_140C32002 = 6;
  dword_140C32004 = 0;
  LOWORD(KiStackProtectNotifyEvent.Header.Lock) = 0;
  KiStackProtectNotifyEvent.Header.Size = 6;
  KiStackProtectNotifyEvent.Header.SignalState = 0;
  do
  {
    *v1 = 0LL;
    v1[1] = 0LL;
    v1[2] = 0LL;
    v1 += 8;
    --v0;
  }
  while ( v0 );
  KiDynamicProcessorLock.Count = 1;
  KiDynamicProcessorLock.Event.Header.WaitListHead.Blink = &KiDynamicProcessorLock.Event.Header.WaitListHead;
  KiDynamicProcessorLock.Event.Header.WaitListHead.Flink = &KiDynamicProcessorLock.Event.Header.WaitListHead;
  result = KiSetVirtualHeteroClockIntervalRequestDpcRoutine;
  qword_140C32038 = (__int64)KiSetVirtualHeteroClockIntervalRequestDpcRoutine;
  KiDynamicProcessorLock.Owner = 0LL;
  KiDynamicProcessorLock.Contention = 0;
  LOWORD(KiDynamicProcessorLock.Event.Header.Lock) = 1;
  KiDynamicProcessorLock.Event.Header.Size = 6;
  KiDynamicProcessorLock.Event.Header.SignalState = 0;
  LODWORD(KiSetVirtualHeteroClockIntervalRequestDpc) = 531;
  qword_140C32040 = 0LL;
  qword_140C32058 = 0LL;
  qword_140C32030 = 0LL;
  return result;
}
