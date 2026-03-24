/*
 * XREFs of VidSchWaitForCompletionEvent @ 0x1C0082620
 * Callers:
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C00128B8 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C003CAD8 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C007F970 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchSubmitCommand @ 0x1C007FE90 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C00804F0 (VidSchiAllocateQueuePacket.c)
 *     VidSchiWaitFlushCompletion @ 0x1C008207C (VidSchiWaitFlushCompletion.c)
 *     VidSchWaitForQueuedPresentLimit @ 0x1C00820E0 (VidSchWaitForQueuedPresentLimit.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C00824D8 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0086C40 (VidSchiSubmitPagingCommand.c)
 *     VidSchiAllocateDmaPacket @ 0x1C0089BEC (VidSchiAllocateDmaPacket.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C00B7858 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     VidSchiWaitForCompletePreemption @ 0x1C00D0B74 (VidSchiWaitForCompletePreemption.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C00D0C38 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C00D0D10 (VidSchiWaitForEmptyHwQueue.c)
 *     VidSchBlockUntilNoUnorderedWaitsInDevice @ 0x1C00D0EF0 (VidSchBlockUntilNoUnorderedWaitsInDevice.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00D367C (VidSchiAllocateHwQueuePacket.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000C0E0 (VidSchIsTDRPending.c)
 *     VidSchiCheckTimeoutForced @ 0x1C000C320 (VidSchiCheckTimeoutForced.c)
 *     VidSchWaitForEvents @ 0x1C0011AA4 (VidSchWaitForEvents.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E10 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchiReportHwHang @ 0x1C003D0B4 (VidSchiReportHwHang.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00D019C (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00D02E4 (VidSchiResetEngines.c)
 */

__int64 __fastcall VidSchWaitForCompletionEvent(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ecx
  __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // eax
  int v9; // ebx
  unsigned int v10; // r12d
  __int64 v12; // rax
  __int64 *v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r13
  int v18; // r14d
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD v23[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v25; // [rsp+98h] [rbp+20h]

  v24 = 0LL;
  if ( bTracingEnabled && (_DWORD)a3 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0q_EtwWriteTransfer(a1, (const EVENT_DESCRIPTOR *)"g", a3, a3);
  v5 = *(_DWORD *)(a2 + 32);
  v6 = 0LL;
  if ( (v5 & 0x40) != 0 )
  {
    v12 = *(unsigned int *)(a2 + 48);
    v13 = *(__int64 **)(a1 + 624);
    if ( (unsigned int)v12 < *(_DWORD *)(a1 + 696) )
      v13 += v12;
    v6 = *v13;
  }
  else if ( (v5 & 2) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 96LL);
  }
  else if ( (v5 & 4) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL);
  }
  if ( !*(_DWORD *)(a2 + 136) )
  {
    *(_DWORD *)(a2 + 64) = 0;
    if ( (v5 & 0x20) != 0 )
    {
      v7 = a2 + 96;
    }
    else
    {
      v14 = *(_QWORD *)(a2 + 24);
      v15 = *(int *)(a2 + 16);
      if ( !v14 )
      {
        if ( (v5 & 1) != 0 )
          v16 = v6 + 56 * v15 + 240;
        else
          v16 = a1 + 56 * (v15 + 25);
        *(_QWORD *)(a2 + 72) = v16;
        goto LABEL_13;
      }
      v7 = 56 * v15 + v14 + 320;
    }
    *(_QWORD *)(a2 + 72) = v7;
LABEL_13:
    ++*(_DWORD *)(a2 + 64);
    *(_QWORD *)(a2 + 144) = MEMORY[0xFFFFF78000000320];
    goto LABEL_14;
  }
  while ( 1 )
  {
LABEL_14:
    v8 = *(_DWORD *)(a2 + 136);
    v9 = 0;
    if ( v8 != -1 )
      *(_DWORD *)(a2 + 136) = v8 + 1;
    if ( *(_DWORD *)(a2 + 20) == 1
      && (v24 = -10000000LL * g_TdrConfig[1], *(_QWORD *)(a2 + 56) = &v24, VidSchiCheckTimeoutForced(a1)) )
    {
      v9 = 1;
      v10 = 258;
    }
    else
    {
      v10 = VidSchWaitForEvents(
              a1,
              *(_DWORD *)(a2 + 64),
              (PVOID *)(a2 + 72),
              *(union _LARGE_INTEGER **)(a2 + 56),
              *(_BYTE *)(a2 + 152));
    }
    if ( (*(_DWORD *)(a2 + 20) != 1 || v10 != 258)
      && (KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 160)
       || !v6
       || !*(_DWORD *)(v6 + 2020) && !*(_DWORD *)(v6 + 2024)) )
    {
      return v10;
    }
    v17 = 0LL;
    if ( v9 )
    {
      v18 = 1;
    }
    else if ( *(_DWORD *)(a2 + 16) == 3 )
    {
      v18 = 3;
    }
    else
    {
      v18 = 2;
      v17 = v6;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 348LL) & 0x200) != 0 )
    {
      v19 = __rdtsc();
      v20 = __readmsr(0x400000F6u);
      v21 = *((unsigned int *)KeGetCurrentPrcb() + 17);
      v25 = 10 * (v19 - v20) / v21;
      v22 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v21, 10 * (v19 - v20) % v21);
      v22[5] = v25;
      v22[3] = v20;
      v22[4] = v19;
      WdLogEvent5_WdPresentTokenEvent(v22);
      if ( v20 > v19 || v25 <= 10000000 * (unsigned __int64)g_TdrConfig[1] )
        continue;
    }
    if ( VidSchIsTDRPending(a1) || v18 != 2 || !*(_BYTE *)(a1 + 44) )
    {
LABEL_55:
      if ( v6 )
      {
        if ( v18 == 2 && *(_DWORD *)(v6 + 2024) )
          v18 = (*(_BYTE *)(v6 + 2017) != 0) + 10;
        *(_BYTE *)(v6 + 2017) = 0;
        *(_DWORD *)(v6 + 2020) = 0;
        *(_BYTE *)(v6 + 2018) = 0;
        *(_DWORD *)(v6 + 2024) = 0;
      }
      goto LABEL_60;
    }
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 2024) )
        goto LABEL_55;
      v23[0] = 0LL;
      if ( !(unsigned __int8)VidSchiPrepareToResetEngine(v6, v23) || !(unsigned __int8)VidSchiResetEngines(v6, v23[0]) )
      {
        v18 = 9;
        *(_DWORD *)(v6 + 2020) = 0;
        *(_BYTE *)(v6 + 2018) = 0;
        goto LABEL_60;
      }
      *(_DWORD *)(v6 + 2020) = 0;
      *(_BYTE *)(v6 + 2018) = 0;
    }
    else
    {
LABEL_60:
      if ( VidSchIsTDRPending(a1) || (unsigned int)VidSchiReportHwHang(a1, *(_QWORD *)(a2 + 144), v18, v17) )
        return v10;
    }
  }
}
