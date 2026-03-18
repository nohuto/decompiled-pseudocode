/*
 * XREFs of VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C001F6F4
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C00054C0 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C0038574 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0009A80 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000B960 (VidSchiUnwaitMonitoredFences.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0014690 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0014924 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x1C001F44E (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0041394 (-VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z.c)
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
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[183], ListEntry);
  v2 = *((_QWORD *)&Next[1].Next + 1);
  v6 = 256;
  v5[0] = v2 + 1728;
  AcquireSpinLock::Acquire((Acquire *)v5);
  v4 = 0;
  v3[1] = v3;
  v3[0] = v3;
  VidSchiUnwaitNodeHwQueueProgress((struct HwQueueStagingList *)v3, (struct _VIDSCH_NODE *)Next);
  VidSchiUnwaitMonitoredFences((__int64)v3, v2, 0LL);
  VidSchiUpdateHwSchRunningTime((struct _VIDSCH_NODE *)Next);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v3);
  AcquireSpinLock::Release((AcquireSpinLock *)v5);
}
