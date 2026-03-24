/*
 * XREFs of VidSchiSubmitRenderCommand @ 0x1C00D062C
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C0090830 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00D04F0 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0001898 (VidSchiSchedulerNodeToDriverEngine.c)
 *     ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x1C0006A90 (-UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ.c)
 *     VidSchIsTDRPending @ 0x1C000C0E0 (VidSchIsTDRPending.c)
 *     VidSchMarkDeviceAsError @ 0x1C0015CB0 (VidSchMarkDeviceAsError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C002259C (-DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z.c)
 *     ?BeginCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAX@Z @ 0x1C00756EC (-BeginCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAX@Z.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C0089B80 (VidSchiSendToExecutionQueueWithWait.c)
 *     VidSchiAllocateDmaPacket @ 0x1C0089BEC (VidSchiAllocateDmaPacket.c)
 *     VidSchGetNewSubmissionFenceId @ 0x1C008D9B8 (VidSchGetNewSubmissionFenceId.c)
 *     ?PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C00B2334 (-PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_IN.c)
 *     ?FlushPendingCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C00BAB34 (-FlushPendingCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00CFABC (VidSchiDiscardQueuePacket.c)
 */

__int64 __fastcall VidSchiSubmitRenderCommand(union _LARGE_INTEGER *a1, struct VIDMM_DEVICE *a2, __int64 a3)
{
  union _LARGE_INTEGER v3; // r14
  union _LARGE_INTEGER v4; // rsi
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // rdi
  VIDMM_GLOBAL *v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r12
  _QWORD *v14; // rax
  VIDMM_DMA_POOL *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  UINT LowPart; // ecx
  unsigned int v19; // edx
  __int64 v20; // rax
  UINT v21; // ecx
  UINT v22; // ecx
  UINT v23; // ecx
  UINT v24; // eax
  DWORD v25; // r8d
  bool v26; // cl
  ADAPTER_RENDER *v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  union _LARGE_INTEGER *DmaPacket; // r15
  union _LARGE_INTEGER v32; // rax
  union _LARGE_INTEGER v33; // rdx
  LONG v34; // ecx
  LONG v35; // ecx
  bool v36; // cf
  LONG v37; // ecx
  DWORD v38; // edx
  __int64 HighPart; // rax
  void (__fastcall *v40)(_QWORD); // rax
  signed __int32 v42[8]; // [rsp+0h] [rbp-99h] BYREF
  struct _DXGKARG_PATCH v43; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v44; // [rsp+100h] [rbp+67h] BYREF
  union _LARGE_INTEGER v45; // [rsp+108h] [rbp+6Fh] BYREF
  void *v46; // [rsp+110h] [rbp+77h] BYREF
  union _LARGE_INTEGER v47; // [rsp+118h] [rbp+7Fh] BYREF

  v3 = a1[11];
  v4 = a1[35];
  v44 = 0;
  v47.QuadPart = 0LL;
  v6 = *(_QWORD *)(v3.QuadPart + 104);
  v7 = *(_QWORD *)(v3.QuadPart + 96);
  v8 = *(_QWORD *)(v6 + 32);
  if ( (*(_BYTE *)(v8 + 2940) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v6 + 32))
    || *(_BYTE *)(v6 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 200), 0, 0) )
  {
    LODWORD(v13) = -1073741823;
    goto LABEL_24;
  }
  v10 = VIDMM_GLOBAL::PrepareDmaBuffer(v9, a2, (struct _VIDMM_DMA_BUFFER *)v4.QuadPart, a1[41].HighPart, &v44, &v47);
  v13 = v10;
  if ( v10 < 0 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11);
    v14[3] = v8;
    v14[4] = v3.QuadPart;
    v14[5] = a1;
    v14[6] = v13;
    WdLogEvent5_WdWarning(v14);
    VidSchMarkDeviceAsError(v6);
LABEL_24:
    VidSchiDiscardQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1, (__int64)a2, a3);
    return (unsigned int)v13;
  }
  v15 = *(VIDMM_DMA_POOL **)(v4.QuadPart + 136);
  v45.QuadPart = 0LL;
  v46 = 0LL;
  VIDMM_DMA_POOL::BeginCPUAccess(v15, (struct _VIDMM_DMA_BUFFER *)v4.QuadPart, &v46);
  a1[7].QuadPart = MEMORY[0xFFFFF78000000320];
  a1[6].HighPart = 7;
  VidSchGetNewSubmissionFenceId(v8, (__int64)a1, *(unsigned __int16 *)(v7 + 4), (__int64 *)&v45);
  _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer((_VIDSCH_QUEUE_PACKET *)a1);
  v16 = *(_QWORD *)(v3.QuadPart + 56);
  if ( ((*(_DWORD *)(v16 + 224) & 1) == 0
     || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 16LL) + 2624LL) & 1) == 0)
    && ((*(_DWORD *)(v4.QuadPart + 28) & 4) == 0
     || (v17 = *(_QWORD *)(**(_QWORD **)(v4.QuadPart + 136) + 40LL),
         _InterlockedOr(v42, 0),
         *(_QWORD *)(v4.QuadPart + 152) != v17))
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 648LL) + 7048LL) & 1) != 0 )
  {
    LowPart = a1[40].LowPart;
    v19 = *(unsigned __int16 *)(v7 + 4);
    *(&v43.DmaBufferSegmentId + 1) = 0;
    *(&v43.DmaBufferSubmissionEndOffset + 1) = 0;
    *(&v43.DmaBufferPrivateDataSubmissionEndOffset + 1) = 0;
    *(&v43.AllocationListSize + 1) = 0;
    v43.hDevice = *(HANDLE *)(v3.QuadPart + 64);
    v43.DmaBufferSegmentId = v44;
    v43.DmaBufferPhysicalAddress = v47;
    v43.DmaBufferSize = *(_DWORD *)(v4.QuadPart + 40);
    v43.pDmaBuffer = v46;
    v43.pDmaBufferPrivateData = *(void **)(v4.QuadPart + 128);
    v20 = *(_QWORD *)(v4.QuadPart + 136);
    v43.DmaBufferSubmissionStartOffset = LowPart;
    v43.DmaBufferSubmissionEndOffset = a1[40].HighPart + LowPart;
    v21 = *(_DWORD *)(v20 + 88);
    v43.pAllocationList = *(const DXGK_ALLOCATIONLIST **)(v4.QuadPart + 112);
    v43.AllocationListSize = a1[41].HighPart;
    v43.pPatchLocationList = *(const D3DDDI_PATCHLOCATIONLIST **)(v4.QuadPart + 120);
    LODWORD(v20) = *(_DWORD *)(v4.QuadPart + 52);
    v43.DmaBufferPrivateDataSize = v21;
    v22 = a1[43].LowPart;
    v43.PatchLocationListSize = v20;
    LODWORD(v20) = a1[42].LowPart;
    v43.DmaBufferPrivateDataSubmissionStartOffset = v22;
    v23 = a1[43].HighPart + v22;
    v43.PatchLocationListSubmissionStart = v20;
    v43.PatchLocationListSubmissionLength = a1[42].HighPart;
    v43.DmaBufferPrivateDataSubmissionEndOffset = v23;
    v43.SubmissionFenceId = v45.LowPart;
    v24 = VidSchiSchedulerNodeToDriverEngine(v8, v19);
    v25 = a1[9].LowPart;
    v26 = (*(_BYTE *)(v3.QuadPart + 112) & 2) == 0;
    v43.EngineOrdinal = v24;
    v43.Flags.Value = ((v25 & 0x20 | (v25 >> 1) & 0x40) >> 4) | ((v25 & 0x8000) == 0 && v26 ? 0 : 8);
    LODWORD(v13) = ADAPTER_RENDER::DdiPatch(v27, &v43);
    if ( (int)v13 < 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v28);
      v30[3] = 281LL;
      v30[4] = 3LL;
      v30[5] = v8;
      v30[6] = v3.QuadPart;
      v30[7] = a1;
      WdLogEvent5_WdCriticalError(v30);
      __debugbreak();
    }
    VIDMM_DMA_POOL::FlushPendingCPUAccess(
      *(VIDMM_DMA_POOL **)(v4.QuadPart + 136),
      (struct _VIDMM_DMA_BUFFER *)v4.QuadPart);
  }
  DmaPacket = (union _LARGE_INTEGER *)VidSchiAllocateDmaPacket(v7);
  DmaPacket[7].QuadPart = (LONGLONG)a1;
  DmaPacket->LowPart = 912353622;
  DmaPacket[6] = v3;
  DmaPacket[8] = v4;
  v32.QuadPart = MEMORY[0xFFFFF78000000320];
  DmaPacket[11].HighPart = 0;
  v33 = DmaPacket[7];
  DmaPacket[10] = v32;
  DmaPacket[9].LowPart = 7;
  v32.LowPart = (*(_DWORD *)(v33.QuadPart + 72) >> 3) & 4;
  DmaPacket[11].HighPart = v32.LowPart;
  v34 = v32.LowPart | (*(_DWORD *)(v33.QuadPart + 72) >> 4) & 8;
  DmaPacket[11].HighPart = v34;
  v32.LowPart = v34 | (*(_DWORD *)(v33.QuadPart + 72) >> 8) & 0x100;
  DmaPacket[11].HighPart = v32.LowPart;
  v35 = v32.LowPart | (4 * (*(_DWORD *)(v33.QuadPart + 72) & 4));
  DmaPacket[11].HighPart = v35;
  v36 = a1[16].LowPart != 0;
  DmaPacket[13] = v45;
  DmaPacket[11].LowPart = 0;
  v33.LowPart = v35 | (v36 ? 0x4000 : 0);
  DmaPacket[11].HighPart = v33.LowPart;
  DmaPacket[12].LowPart = a1[14].LowPart;
  DmaPacket[15].QuadPart = (LONGLONG)v46;
  DmaPacket[16].LowPart = v44;
  DmaPacket[17] = v47;
  DmaPacket[18].LowPart = a1[40].LowPart;
  DmaPacket[18].HighPart = a1[40].LowPart + a1[40].HighPart;
  DmaPacket[19].LowPart = a1[43].LowPart;
  DmaPacket[19].HighPart = a1[43].LowPart + a1[43].HighPart;
  DmaPacket[20].LowPart = a1[41].LowPart;
  DmaPacket[20].HighPart = a1[41].HighPart;
  DmaPacket[21].LowPart = a1[42].LowPart;
  DmaPacket[21].HighPart = a1[42].HighPart;
  DmaPacket[14] = *(union _LARGE_INTEGER *)(v4.QuadPart + 160);
  v37 = v33.LowPart | ((a1[9].LowPart & 0x100 | 0x200) >> 8);
  DmaPacket[11].HighPart = v37;
  v38 = a1[9].LowPart;
  if ( (v38 & 1) != 0 )
  {
    HighPart = (unsigned int)a1[48].HighPart;
    if ( (_DWORD)HighPart != -1 && (v38 & 0x40000) == 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v8 + 8 * HighPart + 3104) + 33288LL) != -1 )
      {
        v40 = *(void (__fastcall **)(_QWORD))(v8 + 2960);
        if ( v40 )
        {
          v40(*(_QWORD *)(v8 + 3024));
          v37 = DmaPacket[11].HighPart;
        }
      }
      DmaPacket[11].HighPart = v37 | 0x800;
    }
  }
  VidSchiSendToExecutionQueueWithWait((__int64)DmaPacket, 0);
  return (unsigned int)v13;
}
