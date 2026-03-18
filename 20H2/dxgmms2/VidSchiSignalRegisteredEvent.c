/*
 * XREFs of VidSchiSignalRegisteredEvent @ 0x1C0013818
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008E70 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C001304C (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C0013430 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiFlushPendingTokenList @ 0x1C002F8A8 (VidSchiFlushPendingTokenList.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0036378 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00376A0 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0038124 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x1C003B62C (VidSchiProcessSuspendContextCompletedDpc.c)
 *     VidSchiSuspendResumeHwContext @ 0x1C003BF78 (VidSchiSuspendResumeHwContext.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00D08EC (VidSchiDiscardQueuePacket.c)
 *     VidSchUnreferenceDmaBuffer @ 0x1C00D3E90 (VidSchUnreferenceDmaBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiSignalRegisteredEvent(__int64 a1, struct _KEVENT **a2)
{
  KIRQL v4; // si
  struct _KEVENT *i; // rbx
  int Flink; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 1728), &LockHandle);
  for ( i = *a2; i != (struct _KEVENT *)a2; i = *(struct _KEVENT **)&i->Header.Lock )
  {
    if ( LODWORD(i->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&i[1].Header.Lock + 4LL * LODWORD(i[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&i[1].Header.Lock + 244LL) )
        continue;
LABEL_6:
      ++i[5].Header.LockNV;
      KeSetEvent(i + 4, 0, 0);
      continue;
    }
    if ( ((__int64)i[1].Header.WaitListHead.Flink & 0x10) == 0 )
      goto LABEL_6;
    Flink = (int)i[1].Header.WaitListHead.Blink->Flink;
    HIDWORD(i[5].Header.WaitListHead.Blink) = Flink;
    if ( !Flink )
      goto LABEL_6;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v4);
}
