/*
 * XREFs of VidSchiSignalRegisteredEvent @ 0x1C0010BF0
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00087D0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000F070 (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000FA04 (VidSchiProcessDpcSystemRequest.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C000FE70 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0010190 (VidSchiCompleteFlipEntry.c)
 *     VidSchiFlushPendingTokenList @ 0x1C0019B18 (VidSchiFlushPendingTokenList.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001EAF0 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003ED78 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C00403E8 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x1C00435F8 (VidSchiProcessSuspendContextCompletedDpc.c)
 *     VidSchiSuspendResumeHwContext @ 0x1C0043E14 (VidSchiSuspendResumeHwContext.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00F2F7C (VidSchiDiscardQueuePacket.c)
 *     VidSchUnreferenceDmaBuffer @ 0x1C00F5B5C (VidSchUnreferenceDmaBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiSignalRegisteredEvent(__int64 a1, struct _KEVENT **a2)
{
  KIRQL v4; // bl
  struct _KEVENT *i; // rdi
  int Flink; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 1744), &LockHandle);
  for ( i = *a2; i != (struct _KEVENT *)a2; i = *(struct _KEVENT **)&i->Header.Lock )
  {
    if ( LODWORD(i->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&i[1].Header.Lock + 4LL * LODWORD(i[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&i[1].Header.Lock + 244LL) )
        continue;
    }
    else if ( ((__int64)i[1].Header.WaitListHead.Flink & 0x10) != 0 )
    {
      Flink = (int)i[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(i[5].Header.WaitListHead.Blink) = Flink;
      if ( Flink )
        continue;
    }
    ++i[5].Header.LockNV;
    KeSetEvent(i + 4, 0, 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v4);
}
