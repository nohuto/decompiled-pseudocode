/*
 * XREFs of VidSchRegisterCompletionEvent @ 0x1C0069CA0
 * Callers:
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C0011178 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     VidSchSubmitCommand @ 0x1C0067440 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C0067AA0 (VidSchiAllocateQueuePacket.c)
 *     VidSchiWaitFlushCompletion @ 0x1C00695DC (VidSchiWaitFlushCompletion.c)
 *     VidSchWaitForQueuedPresentLimit @ 0x1C0069640 (VidSchWaitForQueuedPresentLimit.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C0069A38 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C00B86F8 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     VidSchBlockUntilNoUnorderedWaitsInDevice @ 0x1C00D1D20 (VidSchBlockUntilNoUnorderedWaitsInDevice.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00D43BC (VidSchiAllocateHwQueuePacket.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C00068D0 (VidSchiInterlockedInsertTailList.c)
 */

void __fastcall VidSchRegisterCompletionEvent(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rdx

  KeInitializeEvent((PRKEVENT)(a2 + 96), SynchronizationEvent, 0);
  v4 = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a2 + 32) = v4 | 0x20;
  v5 = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 128) = KeGetCurrentThread();
  if ( !v5 )
  {
    if ( (v4 & 2) != 0 )
    {
      v9 = *(_QWORD *)(a2 + 24) + 376LL;
    }
    else if ( (v4 & 4) != 0 )
    {
      v9 = *(_QWORD *)(a2 + 24) + 328LL;
    }
    else if ( (v4 & 1) != 0 )
    {
      v12 = *(unsigned int *)(a2 + 48);
      v13 = *(_QWORD **)(a1 + 624);
      if ( (unsigned int)v12 < *(_DWORD *)(a1 + 696) )
        v13 += v12;
      v9 = *v13 + 408LL;
    }
    else
    {
      v9 = a1 + 1624;
    }
    goto LABEL_8;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v9 = a1 + 1640;
    goto LABEL_8;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    v11 = *(_QWORD *)(a2 + 24);
    v9 = v11 + 136;
    if ( !v11 )
      v9 = a1 + 1656;
    goto LABEL_8;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = *(_QWORD *)(a2 + 24) + 120LL;
LABEL_8:
    VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 1728), v9, (_QWORD *)a2, 0LL);
    return;
  }
  v10 = v8 - 1;
  if ( !v10 )
  {
    v9 = a1 + 1672;
    goto LABEL_8;
  }
  if ( v10 == 1 )
  {
    v9 = *(_QWORD *)(a2 + 24) + 168LL;
    goto LABEL_8;
  }
}
