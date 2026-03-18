/*
 * XREFs of VidSchiDiscardQueuePacket @ 0x1C00F2F7C
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1C00959B0 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0096600 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00F38D0 (VidSchiSubmitRenderCommand.c)
 *     VidSchFlushPendingCommand @ 0x1C00F44F0 (VidSchFlushPendingCommand.c)
 * Callees:
 *     VidSchiSignalRegisteredEvent @ 0x1C0010BF0 (VidSchiSignalRegisteredEvent.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0018420 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0018878 (VidSchiProcessCompletedQueuePacket.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?DdiCancelCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_CANCELCOMMAND@@@Z @ 0x1C002CA48 (-DdiCancelCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_CANCELCOMMAND@@@Z.c)
 *     ?UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C002E080 (-UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034CD4 (-VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?BeginCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAX@Z @ 0x1C00A4420 (-BeginCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAX@Z.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiDiscardQueuePacket(
        struct _VIDSCH_QUEUE_PACKET *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r14
  __int64 v6; // rdi
  __int64 v7; // r15
  __int64 v8; // rsi
  bool v9; // zf
  UINT v10; // ecx
  UINT v11; // eax
  __int64 v12; // rcx
  UINT v13; // eax
  void *v14; // rax
  UINT *v15; // rcx
  UINT v16; // eax
  UINT v17; // ecx
  const D3DDDI_PATCHLOCATIONLIST *v18; // rax
  int v19; // eax
  _DXGKARG_CANCELCOMMAND v21; // [rsp+38h] [rbp-29h] BYREF

  v4 = *((_QWORD *)a1 + 11);
  v6 = *((_QWORD *)a1 + 35);
  v7 = *(_QWORD *)(v4 + 96);
  v8 = *(_QWORD *)(*(_QWORD *)(v4 + 104) + 32LL);
  if ( *(_BYTE *)(v8 + 46) )
  {
    memset(&v21, 0, sizeof(v21));
    v9 = (*((_DWORD *)a1 + 18) & 0x8000000) == 0;
    v21.hContext = *(HANDLE *)(v4 + 64);
    if ( v9 )
    {
      if ( !v6 )
        goto LABEL_16;
      v15 = *(UINT **)(v6 + 136);
      v21.DmaBufferSize = *(_DWORD *)(v6 + 40);
      v21.pDmaBufferPrivateData = *(void **)(v6 + 128);
      v21.DmaBufferPrivateDataSize = v15[22];
      VIDMM_DMA_POOL::BeginCPUAccess((VIDMM_DMA_POOL *)v15, (struct _VIDMM_DMA_BUFFER *)v6, &v21.pDmaBuffer);
      v16 = *((_DWORD *)a1 + 81);
      v17 = *((_DWORD *)a1 + 86);
      v21.DmaBufferSubmissionStartOffset = 0;
      v21.DmaBufferSubmissionEndOffset = v16;
      v21.pAllocationList = *(const DXGK_ALLOCATIONLIST **)(v6 + 112);
      v21.AllocationListSize = *((_DWORD *)a1 + 83);
      v18 = *(const D3DDDI_PATCHLOCATIONLIST **)(v6 + 120);
      v21.DmaBufferPrivateDataSubmissionStartOffset = v17;
      v21.PatchLocationListSubmissionStart = 0;
      v21.pPatchLocationList = v18;
      v21.PatchLocationListSize = *(_DWORD *)(v6 + 52);
      v21.PatchLocationListSubmissionLength = v21.PatchLocationListSize;
      v21.DmaBufferPrivateDataSubmissionEndOffset = v21.DmaBufferPrivateDataSize + v17;
    }
    else
    {
      v10 = *((_DWORD *)a1 + 81);
      v21.DmaBufferVirtualAddress = *((_QWORD *)a1 + 39);
      v11 = *((_DWORD *)a1 + 88);
      v21.DmaBufferSize = v10;
      v21.DmaBufferSubmissionEndOffset = v10;
      v12 = *((_QWORD *)a1 + 36);
      v21.DmaBufferUmdPrivateDataSize = v11;
      v13 = *((_DWORD *)a1 + 87);
      v21.DmaBufferPrivateDataSubmissionEndOffset = v13;
      if ( v12 )
      {
        v21.DmaBufferPrivateDataSize = *(_DWORD *)(v12 + 8);
        v14 = (void *)(v12 + 16);
      }
      else if ( v6 )
      {
        v21.DmaBufferPrivateDataSize = v13;
        v14 = *(void **)(v6 + 128);
      }
      else
      {
        v21.DmaBufferPrivateDataSize = 0;
        v14 = 0LL;
      }
      v21.pDmaBufferPrivateData = v14;
    }
    v19 = ADAPTER_RENDER::DdiCancelCommand(*(ADAPTER_RENDER **)(v8 + 8), &v21);
    if ( v19 )
    {
      WdLogSingleEntry5(0LL, 281LL, 9LL, v19, &v21, a1);
      __debugbreak();
    }
  }
  if ( v6 && !*((_DWORD *)a1 + 12) )
    VIDMM_GLOBAL::UnreferenceDmaBuffer(
      *(VIDMM_GLOBAL **)(*(_QWORD *)(v8 + 8) + 656LL),
      (struct _VIDMM_DMA_BUFFER *)v6,
      0LL,
      a4);
LABEL_16:
  if ( (*((_DWORD *)a1 + 18) & 0x100) != 0 )
  {
    LOBYTE(a3) = *((_DWORD *)a1 + 12) == 8;
    VIDMM_DMA_POOL::ReleaseBuffer(*(VIDMM_DMA_POOL **)(v6 + 136), (struct _VIDMM_DMA_BUFFER *)v6, a3, a4);
    VidSchiSignalRegisteredEvent(v8, (struct _KEVENT **)(v4 + 376));
    VidSchiSignalRegisteredEvent(v8, (struct _KEVENT **)(v7 + 408));
    VidSchiSignalRegisteredEvent(v8, (struct _KEVENT **)(v8 + 1640));
    *(_QWORD *)(v4 + 352) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v4 + 320), 0, 0);
    *(_QWORD *)(v7 + 272) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v7 + 240), 0, 0);
    *(_QWORD *)(v8 + 1448) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v8 + 1416), 0, 0);
    VidSchiSignalRegisteredEvent(v8, (struct _KEVENT **)(v8 + 1688));
  }
  *((_DWORD *)a1 + 20) |= 0x20u;
  if ( *((_QWORD *)a1 + 33) )
    VidSchiFreeHistoryBufferStorage(a1);
  return VidSchiProcessCompletedQueuePacket(a1, a2, a3);
}
