/*
 * XREFs of ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C0036D94
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00381B0 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0038440 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 *     ?VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x1C00393BC (-VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDS.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C000C9A8 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000CB40 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000D800 (VidSchUnwaitFlipQueue.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0037900 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiCompleteHwQueueSignalPacket(struct HwQueueStagingList *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v7; // rbp
  __int64 v8; // rcx
  int v9; // eax
  struct _KEVENT *v10; // rcx
  unsigned int i; // esi

  v2 = *((_QWORD *)a2 + 12);
  v4 = *((_QWORD *)a2 + 99);
  v5 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 40) + 8LL) + 32LL);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 800) = *((_QWORD *)a2 + 100);
    v8 = *((_QWORD *)a2 + 100);
    if ( !v8 )
    {
LABEL_14:
      *((_QWORD *)a2 + 99) = 0LL;
      *((_QWORD *)a2 + 100) = 0LL;
      goto LABEL_15;
    }
LABEL_13:
    *(_QWORD *)(v8 + 792) = *((_QWORD *)a2 + 99);
    goto LABEL_14;
  }
  v8 = *((_QWORD *)a2 + 100);
  if ( v8 )
    goto LABEL_13;
  v9 = *((_DWORD *)a2 + 68);
  if ( (v9 & 2) != 0 )
  {
    v10 = (struct _KEVENT *)*((_QWORD *)a2 + 67);
    if ( (v9 & 8) != 0 )
    {
      ((void (__fastcall *)(struct _KEVENT *))DxgCoreInterface[63])(v10);
    }
    else
    {
      KeSetEvent(v10, 0, 0);
      ObfDereferenceObject(*((PVOID *)a2 + 67));
    }
    *((_QWORD *)a2 + 67) = 0LL;
  }
  else
  {
    for ( i = 0; i < *((_DWORD *)a2 + 69); ++i )
      VidSchiCompleteSignalSyncObject(
        (__int64)a1,
        *((_QWORD *)a2 + i + 35),
        (*((_DWORD *)a2 + 68) & 4) != 0,
        (unsigned __int64 *)a2 + i + 67,
        1);
    if ( *(_DWORD *)(v7 + 796) )
      VidSchUnwaitFlipQueue((__int64)a1, v7);
  }
LABEL_15:
  *((_DWORD *)a2 + 20) |= 4u;
  if ( (*((_DWORD *)a2 + 68) & 2) == 0 && *((_DWORD *)a2 + 69) )
  {
    do
      VidSchiReleaseSyncObjectReference(*((char **)a2 + v5++ + 35));
    while ( v5 < *((_DWORD *)a2 + 69) );
  }
  VidSchiFreeCompletedHwQueuePacket(a2);
}
