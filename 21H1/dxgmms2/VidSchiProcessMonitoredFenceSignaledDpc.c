/*
 * XREFs of VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C003B8C0
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0006330 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002EED0 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C000A580 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000C130 (VidSchiUnwaitMonitoredFences.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C00115E0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C001217C (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x1C003960C (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00397E8 (-VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiProcessMonitoredFenceSignaledDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rdi
  __int64 v2; // rbx
  _QWORD v3[2]; // [rsp+20h] [rbp-40h] BYREF
  char v4; // [rsp+30h] [rbp-30h]
  _QWORD v5[4]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v6; // [rsp+58h] [rbp-8h]

  Next = ListEntry[2].Next;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[182], ListEntry);
  v2 = *((_QWORD *)&Next[1].Next + 1);
  v6 = 256;
  v5[0] = v2 + 1712;
  AcquireSpinLock::Acquire((Acquire *)v5);
  v4 = 0;
  v3[1] = v3;
  v3[0] = v3;
  VidSchiUnwaitNodeHwQueueProgress((struct HwQueueStagingList *)v3, (struct _VIDSCH_NODE *)Next);
  VidSchiUnwaitMonitoredFences((struct HwQueueStagingList *)v3, v2, 0LL);
  VidSchiUpdateHwSchRunningTime((struct _VIDSCH_NODE *)Next);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v3);
  AcquireSpinLock::Release((AcquireSpinLock *)v5);
}
