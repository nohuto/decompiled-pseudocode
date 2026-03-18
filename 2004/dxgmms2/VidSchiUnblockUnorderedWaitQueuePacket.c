/*
 * XREFs of VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C0014934
 * Callers:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000C130 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000F448 (VidSchiSubmitWaitCommand.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C001148C (VidSchiCleanupDeferredWaiterContext.c)
 *     ?VidSchiCompleteAllWaitsPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002A908 (-VidSchiCompleteAllWaitsPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002BDA4 (-VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x1C0031FF8 (VidSchiUnblockUnorderedWaiter.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0038470 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C0010578 (VidSchiUnwaitWaitQueuePacket.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E00 (McTemplateK0q_EtwWriteTransfer.c)
 */

int __fastcall VidSchiUnblockUnorderedWaitQueuePacket(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r9
  __int64 v6; // r9
  __int64 v7; // r11
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // r8
  _QWORD *v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx

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
  --*(_DWORD *)(v10 + 36);
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
  --*(_DWORD *)(v7 + 808);
  if ( a3 )
  {
    LOBYTE(v12) = a3;
    LODWORD(v13) = VidSchiUnwaitWaitQueuePacket(a1, a2, (__int64)v12, 0LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      LODWORD(v13) = McTemplateK0q_EtwWriteTransfer(v14, &EventPerformanceWarning);
    _InterlockedIncrement(&gulSyncObjTimeouted);
  }
  return v13;
}
