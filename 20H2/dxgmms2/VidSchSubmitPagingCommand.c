/*
 * XREFs of VidSchSubmitPagingCommand @ 0x1C007780C
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0077180 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 * Callees:
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C00064F0 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchIsTDRPending @ 0x1C000AEF0 (VidSchIsTDRPending.c)
 *     VidSchiSetPriorityContext @ 0x1C0010184 (VidSchiSetPriorityContext.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0012118 (VidSchiSchedulerNodeToDriverEngine.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0015478 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     VidSchiAllocateQueuePacket @ 0x1C0067AA0 (VidSchiAllocateQueuePacket.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C00D47E8 (VidSchiSubmitHwPagingCommand.c)
 */

void __fastcall VidSchSubmitPagingCommand(__int64 a1, __int128 *a2)
{
  __int64 v4; // rcx
  struct _VIDSCH_CONTEXT *v5; // rsi
  _QWORD *QueuePacket; // rax
  __int128 v7; // xmm0
  __int64 v8; // r14
  __int128 v9; // xmm1
  __int64 v10; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  struct _VIDSCH_CONTEXT *v15; // rcx
  KPRIORITY PriorityThread; // eax

  if ( VidSchIsTDRPending(a1) )
  {
    if ( (*(_DWORD *)a2 & 0x100) != 0 )
      VIDMM_DMA_POOL::ReleaseBuffer(
        *(VIDMM_DMA_POOL **)(*((_QWORD *)a2 + 1) + 136LL),
        *((struct _VIDMM_DMA_BUFFER **)a2 + 1),
        1);
  }
  else if ( *(_BYTE *)(a1 + 55) )
  {
    VidSchiSubmitHwPagingCommand(a1, a2);
  }
  else
  {
    v4 = (unsigned int)VidSchiSchedulerNodeToDriverEngine(a1, *((_DWORD *)a2 + 19));
    v5 = *(struct _VIDSCH_CONTEXT **)(*(_QWORD *)(a1 + 256) + 8 * v4);
    if ( *((_BYTE *)a2 + 80) )
    {
      v15 = *(struct _VIDSCH_CONTEXT **)(*(_QWORD *)(a1 + 280) + 8 * v4);
      if ( v15 )
        v5 = v15;
    }
    QueuePacket = VidSchiAllocateQueuePacket((__int64)v5, 1);
    v7 = *a2;
    v8 = (__int64)QueuePacket;
    v9 = a2[1];
    *(_DWORD *)QueuePacket = 895576406;
    *((_DWORD *)QueuePacket + 12) = 8;
    QueuePacket[7] = MEMORY[0xFFFFF78000000320];
    v10 = *(_QWORD *)a2;
    *(_DWORD *)(v8 + 52) = 2;
    *(_QWORD *)(v8 + 88) = v5;
    CurrentThread = KeGetCurrentThread();
    *(_OWORD *)(v8 + 272) = v7;
    *(_QWORD *)(v8 + 104) = CurrentThread;
    v12 = a2[2];
    *(_OWORD *)(v8 + 288) = v9;
    *(_QWORD *)(v8 + 72) = v10;
    v13 = a2[3];
    *(_OWORD *)(v8 + 304) = v12;
    v14 = a2[4];
    *(_OWORD *)(v8 + 320) = v13;
    *(_QWORD *)&v13 = *((_QWORD *)a2 + 10);
    *(_OWORD *)(v8 + 336) = v14;
    *(_QWORD *)(v8 + 352) = v13;
    if ( (*(_DWORD *)(a1 + 2448) & 2) != 0 )
    {
      PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
      VidSchiSetPriorityContext(v5, PriorityThread);
    }
    VidSchiSubmitCommandPacketToQueue(v8);
  }
}
