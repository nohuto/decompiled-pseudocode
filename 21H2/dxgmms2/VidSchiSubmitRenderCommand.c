/*
 * XREFs of VidSchiSubmitRenderCommand @ 0x1C00F38D0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C00AE010 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00F379C (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0003AE0 (VidSchiSchedulerNodeToDriverEngine.c)
 *     ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x1C00053F4 (-UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ.c)
 *     VidSchIsTDRPending @ 0x1C000AD70 (VidSchIsTDRPending.c)
 *     VidSchMarkDeviceAsError @ 0x1C0018900 (VidSchMarkDeviceAsError.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C002CAB4 (-DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z.c)
 *     VidSchGetNewSubmissionFenceId @ 0x1C009A7A0 (VidSchGetNewSubmissionFenceId.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C009A9EC (VidSchiSendToExecutionQueueWithWait.c)
 *     VidSchiAllocateDmaPacket @ 0x1C009AA58 (VidSchiAllocateDmaPacket.c)
 *     ?BeginCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAX@Z @ 0x1C00A4420 (-BeginCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAX@Z.c)
 *     ?PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C00D8D30 (-PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_IN.c)
 *     ?FlushPendingCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C00E0570 (-FlushPendingCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00F2F7C (VidSchiDiscardQueuePacket.c)
 */

__int64 __fastcall VidSchiSubmitRenderCommand(
        union _LARGE_INTEGER *a1,
        struct VIDMM_DEVICE *a2,
        __int64 a3,
        __int64 a4)
{
  union _LARGE_INTEGER v4; // r15
  union _LARGE_INTEGER v5; // rsi
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rdi
  VIDMM_GLOBAL *v10; // rcx
  int v11; // eax
  int v12; // r12d
  VIDMM_DMA_POOL *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  UINT LowPart; // ecx
  unsigned int v17; // edx
  __int64 v18; // rax
  UINT v19; // ecx
  UINT v20; // ecx
  UINT v21; // ecx
  UINT v22; // eax
  DWORD v23; // r8d
  bool v24; // cl
  ADAPTER_RENDER *v25; // r9
  union _LARGE_INTEGER *DmaPacket; // r14
  union _LARGE_INTEGER v27; // rax
  union _LARGE_INTEGER v28; // rdx
  LONG v29; // ecx
  LONG v30; // ecx
  bool v31; // cf
  LONG v32; // r8d
  DWORD v33; // ecx
  __int64 HighPart; // rax
  void (__fastcall *v35)(_QWORD); // rax
  signed __int32 v37[8]; // [rsp+0h] [rbp-99h] BYREF
  struct _DXGKARG_PATCH v38; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v39; // [rsp+100h] [rbp+67h] BYREF
  union _LARGE_INTEGER v40; // [rsp+108h] [rbp+6Fh] BYREF
  void *v41; // [rsp+110h] [rbp+77h] BYREF
  union _LARGE_INTEGER v42; // [rsp+118h] [rbp+7Fh] BYREF

  v4 = a1[11];
  v5 = a1[35];
  v39 = 0;
  v42.QuadPart = 0LL;
  v7 = *(_QWORD *)(v4.QuadPart + 104);
  v8 = *(_QWORD *)(v4.QuadPart + 96);
  v9 = *(_QWORD *)(v7 + 32);
  if ( (*(_BYTE *)(v9 + 3036) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v7 + 32))
    || *(_BYTE *)(v7 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 200), 0, 0) )
  {
    v12 = -1073741823;
    goto LABEL_24;
  }
  v11 = VIDMM_GLOBAL::PrepareDmaBuffer(v10, a2, (struct _VIDMM_DMA_BUFFER *)v5.QuadPart, a1[41].HighPart, &v39, &v42);
  v12 = v11;
  if ( v11 < 0 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry4)(
      3LL,
      v9,
      (union _LARGE_INTEGER)v4.QuadPart,
      a1,
      v11);
    VidSchMarkDeviceAsError(v7);
LABEL_24:
    VidSchiDiscardQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1, (__int64)a2, a3, a4);
    return (unsigned int)v12;
  }
  v13 = *(VIDMM_DMA_POOL **)(v5.QuadPart + 136);
  v40.QuadPart = 0LL;
  v41 = 0LL;
  VIDMM_DMA_POOL::BeginCPUAccess(v13, (struct _VIDMM_DMA_BUFFER *)v5.QuadPart, &v41);
  a1[7].QuadPart = MEMORY[0xFFFFF78000000320];
  a1[6].HighPart = 7;
  VidSchGetNewSubmissionFenceId(v9, (__int64)a1, *(unsigned __int16 *)(v8 + 4), (__int64 *)&v40);
  _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer((_VIDSCH_QUEUE_PACKET *)a1);
  v14 = *(_QWORD *)(v4.QuadPart + 56);
  if ( ((*(_DWORD *)(v14 + 224) & 1) == 0
     || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 16LL) + 2720LL) & 1) == 0)
    && ((*(_DWORD *)(v5.QuadPart + 28) & 4) == 0
     || (v15 = *(_QWORD *)(**(_QWORD **)(v5.QuadPart + 136) + 40LL),
         _InterlockedOr(v37, 0),
         *(_QWORD *)(v5.QuadPart + 152) != v15))
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 656LL) + 7056LL) & 1) != 0 )
  {
    LowPart = a1[40].LowPart;
    v17 = *(unsigned __int16 *)(v8 + 4);
    *(&v38.DmaBufferSegmentId + 1) = 0;
    *(&v38.DmaBufferSubmissionEndOffset + 1) = 0;
    *(&v38.DmaBufferPrivateDataSubmissionEndOffset + 1) = 0;
    *(&v38.AllocationListSize + 1) = 0;
    v38.hDevice = *(HANDLE *)(v4.QuadPart + 64);
    v38.DmaBufferSegmentId = v39;
    v38.DmaBufferPhysicalAddress = v42;
    v38.DmaBufferSize = *(_DWORD *)(v5.QuadPart + 40);
    v38.pDmaBuffer = v41;
    v38.pDmaBufferPrivateData = *(void **)(v5.QuadPart + 128);
    v18 = *(_QWORD *)(v5.QuadPart + 136);
    v38.DmaBufferSubmissionStartOffset = LowPart;
    v38.DmaBufferSubmissionEndOffset = a1[40].HighPart + LowPart;
    v19 = *(_DWORD *)(v18 + 88);
    v38.pAllocationList = *(const DXGK_ALLOCATIONLIST **)(v5.QuadPart + 112);
    v38.AllocationListSize = a1[41].HighPart;
    v38.pPatchLocationList = *(const D3DDDI_PATCHLOCATIONLIST **)(v5.QuadPart + 120);
    LODWORD(v18) = *(_DWORD *)(v5.QuadPart + 52);
    v38.DmaBufferPrivateDataSize = v19;
    v20 = a1[43].LowPart;
    v38.PatchLocationListSize = v18;
    LODWORD(v18) = a1[42].LowPart;
    v38.DmaBufferPrivateDataSubmissionStartOffset = v20;
    v21 = a1[43].HighPart + v20;
    v38.PatchLocationListSubmissionStart = v18;
    v38.PatchLocationListSubmissionLength = a1[42].HighPart;
    v38.DmaBufferPrivateDataSubmissionEndOffset = v21;
    v38.SubmissionFenceId = v40.LowPart;
    v22 = VidSchiSchedulerNodeToDriverEngine(v9, v17);
    v23 = a1[9].LowPart;
    v24 = (*(_BYTE *)(v4.QuadPart + 112) & 2) == 0;
    v38.EngineOrdinal = v22;
    v38.Flags.Value = ((v23 & 0x20 | (v23 >> 1) & 0x40) >> 4) | ((v23 & 0x8000) == 0 && v24 ? 0 : 8);
    v12 = ADAPTER_RENDER::DdiPatch(v25, &v38);
    if ( v12 < 0 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry5)(
        0LL,
        281LL,
        3LL,
        v9,
        (union _LARGE_INTEGER)v4.QuadPart,
        a1);
      __debugbreak();
    }
    VIDMM_DMA_POOL::FlushPendingCPUAccess(
      *(VIDMM_DMA_POOL **)(v5.QuadPart + 136),
      (struct _VIDMM_DMA_BUFFER *)v5.QuadPart);
  }
  DmaPacket = (union _LARGE_INTEGER *)VidSchiAllocateDmaPacket(v8);
  DmaPacket[7].QuadPart = (LONGLONG)a1;
  DmaPacket->LowPart = 912353622;
  DmaPacket[6] = v4;
  DmaPacket[8] = v5;
  v27.QuadPart = MEMORY[0xFFFFF78000000320];
  DmaPacket[11].HighPart = 0;
  v28 = DmaPacket[7];
  DmaPacket[10] = v27;
  DmaPacket[9].LowPart = 7;
  v27.LowPart = (*(_DWORD *)(v28.QuadPart + 72) >> 3) & 4;
  DmaPacket[11].HighPart = v27.LowPart;
  v29 = v27.LowPart | (*(_DWORD *)(v28.QuadPart + 72) >> 4) & 8;
  DmaPacket[11].HighPart = v29;
  v27.LowPart = v29 | (*(_DWORD *)(v28.QuadPart + 72) >> 8) & 0x100;
  DmaPacket[11].HighPart = v27.LowPart;
  v30 = v27.LowPart | (4 * (*(_DWORD *)(v28.QuadPart + 72) & 4));
  DmaPacket[11].HighPart = v30;
  v31 = a1[16].LowPart != 0;
  DmaPacket[13] = v40;
  DmaPacket[11].LowPart = 0;
  v28.LowPart = v30 | (v31 ? 0x4000 : 0);
  DmaPacket[11].HighPart = v28.LowPart;
  DmaPacket[12].LowPart = a1[14].LowPart;
  DmaPacket[15].QuadPart = (LONGLONG)v41;
  DmaPacket[16].LowPart = v39;
  DmaPacket[17] = v42;
  DmaPacket[18].LowPart = a1[40].LowPart;
  DmaPacket[18].HighPart = a1[40].LowPart + a1[40].HighPart;
  DmaPacket[19].LowPart = a1[43].LowPart;
  DmaPacket[19].HighPart = a1[43].LowPart + a1[43].HighPart;
  DmaPacket[20].LowPart = a1[41].LowPart;
  DmaPacket[20].HighPart = a1[41].HighPart;
  DmaPacket[21].LowPart = a1[42].LowPart;
  DmaPacket[21].HighPart = a1[42].HighPart;
  DmaPacket[14] = *(union _LARGE_INTEGER *)(v5.QuadPart + 160);
  v32 = v28.LowPart | ((a1[9].LowPart & 0x100 | 0x200) >> 8);
  DmaPacket[11].HighPart = v32;
  v33 = a1[9].LowPart;
  if ( (v33 & 1) != 0 )
  {
    HighPart = (unsigned int)a1[48].HighPart;
    if ( (_DWORD)HighPart != -1 && (v33 & 0x40000) == 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v9 + 8 * HighPart + 3200) + 44232LL) != -1 )
      {
        v35 = *(void (__fastcall **)(_QWORD))(v9 + 3056);
        if ( v35 )
        {
          v35(*(_QWORD *)(v9 + 3120));
          v32 = DmaPacket[11].HighPart;
        }
      }
      DmaPacket[11].HighPart = v32 | 0x800;
    }
  }
  VidSchiSendToExecutionQueueWithWait((__int64)DmaPacket, 0);
  return (unsigned int)v12;
}
