/*
 * XREFs of VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C003AAF4
 * Callers:
 *     VidSchiSubmitWaitCommand @ 0x1C000EC78 (VidSchiSubmitWaitCommand.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C001453C (VidSchiCleanupDeferredWaiterContext.c)
 *     ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001EA1C (-VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCompleteAllWaitsPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034A2C (-VidSchiCompleteAllWaitsPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035688 (-VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x1C003AC04 (VidSchiUnblockUnorderedWaiter.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000EA80 (VidSchiUnwaitWaitQueuePacket.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 */

char __fastcall VidSchiUnblockUnorderedWaitQueuePacket(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r9
  __int64 v6; // r9
  __int64 v7; // r10
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // r8
  _QWORD *v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8

  v3 = *(_QWORD *)(a2 + 88);
  if ( v3 )
    v6 = *(_QWORD *)(v3 + 104);
  else
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 40LL) + 8LL);
  v7 = *(_QWORD *)(v6 + 32);
  v8 = (_QWORD *)(a2 + 288);
  v9 = *(_QWORD *)(a2 + 288);
  v10 = *(_QWORD *)(a2 + 280);
  if ( *(_QWORD *)(v9 + 8) != a2 + 288
    || (v11 = *(_QWORD **)(a2 + 296), (_QWORD *)*v11 != v8)
    || (*v11 = v9, *(_QWORD *)(v9 + 8) = v11, v12 = *(_QWORD **)(v10 + 104), *v12 != v10 + 96) )
  {
    __fastfail(3u);
  }
  *v8 = v10 + 96;
  *(_QWORD *)(a2 + 296) = v12;
  *v12 = v8;
  *(_QWORD *)(v10 + 104) = v8;
  *(_DWORD *)(a2 + 272) &= ~4u;
  --*(_DWORD *)(v10 + 40);
  v13 = *(_QWORD *)(a2 + 88);
  if ( v13 )
  {
    --*(_DWORD *)(v13 + 796);
  }
  else
  {
    v13 = *(_QWORD *)(a2 + 96);
    if ( v13 )
      --*(_DWORD *)(v13 + 156);
  }
  --*(_DWORD *)(v6 + 1588);
  --*(_DWORD *)(v7 + 816);
  if ( a3 )
  {
    LOBYTE(v12) = a3;
    LOBYTE(v13) = VidSchiUnwaitWaitQueuePacket(a1, a2, (__int64)v12, 0LL);
    if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
      LOBYTE(v13) = McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventPerformanceWarning, v15, 15);
    _InterlockedIncrement(&gulSyncObjTimeouted);
  }
  return v13;
}
