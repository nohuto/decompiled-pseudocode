/*
 * XREFs of KiInitSystem @ 0x140B1B2C0
 * Callers:
 *     KiInitializeKernel @ 0x140A580F0 (KiInitializeKernel.c)
 * Callees:
 *     KiInitializeIdleProcess @ 0x140B1B59C (KiInitializeIdleProcess.c)
 *     KiForceSymbolReferences @ 0x140B50C78 (KiForceSymbolReferences.c)
 */

__int64 __fastcall KiInitSystem(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax

  if ( KiForceSymbolReferencesTrigger )
    KiForceSymbolReferences();
  v2 = 1024LL;
  LODWORD(xmmword_140E018F0) = 0;
  qword_140C2BD28 = (__int64)&KeBugCheckCallbackListHead;
  KeBugCheckCallbackListHead = (__int64)&KeBugCheckCallbackListHead;
  qword_140C2B818 = (__int64)&KeBugCheckReasonCallbackListHead;
  KeBugCheckReasonCallbackListHead = &KeBugCheckReasonCallbackListHead;
  qword_140C2B808 = (__int64)&KeBugCheckAddRemovePagesCallbackListHead;
  KeBugCheckAddRemovePagesCallbackListHead = (__int64)&KeBugCheckAddRemovePagesCallbackListHead;
  qword_140C2B828 = (__int64)&KeBugCheckTriageDumpDataArrayListHead;
  KeBugCheckTriageDumpDataArrayListHead = (__int64)&KeBugCheckTriageDumpDataArrayListHead;
  qword_140C2BB88 = (__int64)&KiProfileListHead;
  KiProfileListHead = (__int64)&KiProfileListHead;
  qword_140C2BB98 = (__int64)&KiProfileSourceListHead;
  KiProfileSourceListHead = (__int64)&KiProfileSourceListHead;
  KiSwapEvent.Header.WaitListHead.Blink = &KiSwapEvent.Header.WaitListHead;
  KiSwapEvent.Header.WaitListHead.Flink = &KiSwapEvent.Header.WaitListHead;
  *(_QWORD *)&KeServiceDescriptorTable = KiServiceTable;
  LODWORD(xmmword_140E018D0) = KiServiceLimit;
  *((_QWORD *)&xmmword_140E018D0 + 1) = &KiArgumentTable;
  qword_140C2BCD8 = (__int64)KiBalanceSetManagerDeferredRoutine;
  qword_140C2BCE0 = (__int64)&KiBalanceSetManagerPeriodicEvent;
  qword_140C2BC30 = (__int64)&qword_140C2BC28;
  qword_140C2BC28 = (__int64)&qword_140C2BC28;
  KiStackProtectNotifyEvent.Header.WaitListHead.Blink = &KiStackProtectNotifyEvent.Header.WaitListHead;
  KiStackProtectNotifyEvent.Header.WaitListHead.Flink = &KiStackProtectNotifyEvent.Header.WaitListHead;
  v3 = &KiAbTreeArray;
  KeBugCheckCallbackLock = 0LL;
  LOWORD(KiSwapEvent.Header.Lock) = 1;
  KiSwapEvent.Header.Size = 6;
  KiSwapEvent.Header.SignalState = 0;
  KiProcessInSwapListHead = 0LL;
  KiProcessOutSwapListHead = 0LL;
  KiStackInSwapListHead = 0LL;
  KeServiceDescriptorTableShadow[0] = KeServiceDescriptorTable;
  xmmword_140D06F90 = xmmword_140E018D0;
  xmmword_140D06FA0 = xmmword_140E018E0;
  xmmword_140D06FB0 = xmmword_140E018F0;
  KeServiceDescriptorTableFilter[0] = KeServiceDescriptorTable;
  xmmword_140D07110 = xmmword_140E018D0;
  xmmword_140D07120 = xmmword_140E018E0;
  xmmword_140D07130 = xmmword_140E018F0;
  LODWORD(KiBalanceSetManagerPeriodicDpc) = 275;
  qword_140C2BCF8 = 0LL;
  qword_140C2BCD0 = 0LL;
  KiBalanceSetManagerPeriodicEvent = 1;
  byte_140C2BC22 = 6;
  dword_140C2BC24 = 0;
  LOWORD(KiStackProtectNotifyEvent.Header.Lock) = 0;
  KiStackProtectNotifyEvent.Header.Size = 6;
  KiStackProtectNotifyEvent.Header.SignalState = 0;
  do
  {
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3 += 8;
    --v2;
  }
  while ( v2 );
  KiDynamicProcessorLock.Count = 1;
  KiDynamicProcessorLock.Event.Header.WaitListHead.Blink = &KiDynamicProcessorLock.Event.Header.WaitListHead;
  KiDynamicProcessorLock.Event.Header.WaitListHead.Flink = &KiDynamicProcessorLock.Event.Header.WaitListHead;
  qword_140C2BBD8 = (__int64)KiSetVirtualHeteroClockIntervalRequestDpcRoutine;
  qword_140C2BC08 = (__int64)&KiProcessListHead;
  KiProcessListHead = (__int64)&KiProcessListHead;
  KiDynamicProcessorLock.Owner = 0LL;
  KiDynamicProcessorLock.Contention = 0;
  LOWORD(KiDynamicProcessorLock.Event.Header.Lock) = 1;
  KiDynamicProcessorLock.Event.Header.Size = 6;
  KiDynamicProcessorLock.Event.Header.SignalState = 0;
  LODWORD(KiSetVirtualHeteroClockIntervalRequestDpc) = 531;
  qword_140C2BBE0 = 0LL;
  qword_140C2BBF8 = 0LL;
  qword_140C2BBD0 = 0LL;
  return KiInitializeIdleProcess(a1);
}
