/*
 * XREFs of VidSchiDiscardQueuePacket @ 0x1C00D0F0C
 * Callers:
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C007E090 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0084EA0 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00D1A7C (VidSchiSubmitRenderCommand.c)
 *     VidSchFlushPendingCommand @ 0x1C00D2C20 (VidSchFlushPendingCommand.c)
 * Callees:
 *     VidSchiSignalRegisteredEvent @ 0x1C000EBF8 (VidSchiSignalRegisteredEvent.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0013A18 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1C001510C (VidSchiProcessCompletedQueuePacket.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     ?DdiCancelCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_CANCELCOMMAND@@@Z @ 0x1C00221B8 (-DdiCancelCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_CANCELCOMMAND@@@Z.c)
 *     ?UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0023C78 (-UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002B0A4 (-VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?BeginCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAX@Z @ 0x1C0075A68 (-BeginCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAX@Z.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiDiscardQueuePacket(
        struct _VIDSCH_QUEUE_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // rsi
  bool v8; // zf
  UINT v9; // ecx
  UINT v10; // eax
  __int64 v11; // rcx
  UINT v12; // eax
  void *v13; // rax
  UINT *v14; // rcx
  UINT v15; // eax
  UINT v16; // ecx
  const D3DDDI_PATCHLOCATIONLIST *v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r15
  _QWORD *v21; // rax
  _DXGKARG_CANCELCOMMAND v23; // [rsp+28h] [rbp-29h] BYREF

  v3 = *((_QWORD *)a1 + 11);
  v5 = *((_QWORD *)a1 + 35);
  v6 = *(_QWORD *)(v3 + 96);
  v7 = *(_QWORD *)(*(_QWORD *)(v3 + 104) + 32LL);
  if ( *(_BYTE *)(v7 + 46) )
  {
    memset(&v23, 0, sizeof(v23));
    v8 = (*((_DWORD *)a1 + 18) & 0x8000000) == 0;
    v23.hContext = *(HANDLE *)(v3 + 64);
    if ( v8 )
    {
      if ( !v5 )
        goto LABEL_16;
      v14 = *(UINT **)(v5 + 136);
      v23.DmaBufferSize = *(_DWORD *)(v5 + 40);
      v23.pDmaBufferPrivateData = *(void **)(v5 + 128);
      v23.DmaBufferPrivateDataSize = v14[22];
      VIDMM_DMA_POOL::BeginCPUAccess((VIDMM_DMA_POOL *)v14, (struct _VIDMM_DMA_BUFFER *)v5, &v23.pDmaBuffer);
      v15 = *((_DWORD *)a1 + 81);
      v16 = *((_DWORD *)a1 + 86);
      v23.DmaBufferSubmissionStartOffset = 0;
      v23.DmaBufferSubmissionEndOffset = v15;
      v23.pAllocationList = *(const DXGK_ALLOCATIONLIST **)(v5 + 112);
      v23.AllocationListSize = *((_DWORD *)a1 + 83);
      v17 = *(const D3DDDI_PATCHLOCATIONLIST **)(v5 + 120);
      v23.DmaBufferPrivateDataSubmissionStartOffset = v16;
      v23.PatchLocationListSubmissionStart = 0;
      v23.pPatchLocationList = v17;
      v23.PatchLocationListSize = *(_DWORD *)(v5 + 52);
      v23.PatchLocationListSubmissionLength = v23.PatchLocationListSize;
      v23.DmaBufferPrivateDataSubmissionEndOffset = v23.DmaBufferPrivateDataSize + v16;
    }
    else
    {
      v9 = *((_DWORD *)a1 + 81);
      v23.DmaBufferVirtualAddress = *((_QWORD *)a1 + 39);
      v10 = *((_DWORD *)a1 + 88);
      v23.DmaBufferSize = v9;
      v23.DmaBufferSubmissionEndOffset = v9;
      v11 = *((_QWORD *)a1 + 36);
      v23.DmaBufferUmdPrivateDataSize = v10;
      v12 = *((_DWORD *)a1 + 87);
      v23.DmaBufferPrivateDataSubmissionEndOffset = v12;
      if ( v11 )
      {
        v23.DmaBufferPrivateDataSize = *(_DWORD *)(v11 + 8);
        v13 = (void *)(v11 + 16);
      }
      else if ( v5 )
      {
        v23.DmaBufferPrivateDataSize = v12;
        v13 = *(void **)(v5 + 128);
      }
      else
      {
        v23.DmaBufferPrivateDataSize = 0;
        v13 = 0LL;
      }
      v23.pDmaBufferPrivateData = v13;
    }
    v18 = ADAPTER_RENDER::DdiCancelCommand(*(ADAPTER_RENDER **)(v7 + 8), &v23);
    v20 = v18;
    if ( v18 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, a2);
      v21[6] = &v23;
      v21[3] = 281LL;
      v21[4] = 9LL;
      v21[5] = v20;
      v21[7] = a1;
      WdLogEvent5_WdCriticalError(v21);
      __debugbreak();
    }
  }
  if ( v5 && !*((_DWORD *)a1 + 12) )
    VIDMM_GLOBAL::UnreferenceDmaBuffer(
      *(VIDMM_GLOBAL **)(*(_QWORD *)(v7 + 8) + 648LL),
      (struct _VIDMM_DMA_BUFFER *)v5,
      0);
LABEL_16:
  if ( (*((_DWORD *)a1 + 18) & 0x100) != 0 )
  {
    VIDMM_DMA_POOL::ReleaseBuffer(
      *(VIDMM_DMA_POOL **)(v5 + 136),
      (struct _VIDMM_DMA_BUFFER *)v5,
      *((_DWORD *)a1 + 12) == 8);
    VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v3 + 376));
    VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v6 + 408));
    VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v7 + 1624));
    *(_QWORD *)(v3 + 352) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v3 + 320), 0, 0);
    *(_QWORD *)(v6 + 272) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v6 + 240), 0, 0);
    *(_QWORD *)(v7 + 1432) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v7 + 1400), 0, 0);
    VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v7 + 1672));
  }
  *((_DWORD *)a1 + 20) |= 0x20u;
  if ( *((_QWORD *)a1 + 33) )
    VidSchiFreeHistoryBufferStorage(a1);
  return VidSchiProcessCompletedQueuePacket(a1, a2, a3);
}
