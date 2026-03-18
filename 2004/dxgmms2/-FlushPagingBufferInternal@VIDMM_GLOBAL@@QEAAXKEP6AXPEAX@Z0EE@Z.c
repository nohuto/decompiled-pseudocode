/*
 * XREFs of ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067E30
 * Callers:
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00644A8 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066220 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067E30 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1C0069B80 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006FFA0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C0072A10 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C0072E60 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0074C34 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C00750EC (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C00753B4 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C007564C (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?AddGlobalAllocReferenceToDmaBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0075A6C (-AddGlobalAllocReferenceToDmaBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C00869EC (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C0087DB4 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0088CD8 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C0088F18 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C008970C (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B2B5C (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1C00B3854 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B61D0 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00C7D40 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00C9164 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     VidSchIsMonitoredFenceSignaled @ 0x1C0001850 (VidSchIsMonitoredFenceSignaled.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C48 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007440 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0013A18 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C00357D0 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067E30 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchSubmitPagingCommand @ 0x1C00684BC (VidSchSubmitPagingCommand.c)
 *     VidSchGetNodeOrdinal @ 0x1C00685D8 (VidSchGetNodeOrdinal.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C00718C8 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0074364 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C00807F0 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1C00B4F74 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 *     ?RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER@@K@Z @ 0x1C00BF20C (-RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_HISTORY_FLUSH_PAGING.c)
 */

void __fastcall VIDMM_GLOBAL::FlushPagingBufferInternal(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned __int8 a3,
        void (*a4)(void *),
        void *a5,
        char a6,
        char a7)
{
  __int64 v7; // r13
  __int64 v9; // rbx
  void (*v10)(void *); // r14
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r10
  __int64 v14; // r15
  __int64 v15; // r12
  unsigned __int8 v16; // al
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  struct _KTHREAD **v19; // r13
  char v20; // r14
  _QWORD **v21; // rcx
  _QWORD *v22; // rbx
  VIDMM_GLOBAL *v23; // rsi
  char *v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // ecx
  int v27; // r13d
  _QWORD *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rbx
  unsigned int i; // r14d
  __int64 v33; // rcx
  __int64 v34; // rcx
  bool v35; // al
  __int64 v36; // rdx
  struct _VIDSCH_SYNC_OBJECT *v37; // r8
  __int64 v38; // rdx
  struct _VIDSCH_SYNC_OBJECT *v39; // r9
  unsigned __int64 v40; // r14
  unsigned int v41; // r15d
  struct _VIDMM_DMA_BUFFER **v42; // r12
  unsigned int v43; // ecx
  unsigned int v44; // eax
  unsigned int v45; // ecx
  __int64 v46; // rax
  char v47; // bl
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r8
  _QWORD *v51; // r9
  unsigned int v52; // r10d
  _QWORD *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rax
  VIDMM_GLOBAL *v56; // r14
  unsigned __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  _QWORD *v60; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v61; // rbx
  struct VIDMM_VAD *v62; // rax
  char v63; // bl
  __int64 v64; // rcx
  _QWORD *v65; // r13
  VIDMM_GLOBAL *v66; // r15
  int v67; // eax
  VIDMM_GLOBAL **v68; // rax
  VIDMM_GLOBAL **v69; // rcx
  _QWORD *v70; // rax
  _QWORD *v71; // r15
  VIDMM_GLOBAL *v72; // r14
  int v73; // eax
  VIDMM_GLOBAL **v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rax
  int v77; // [rsp+40h] [rbp-81h]
  unsigned int v78; // [rsp+48h] [rbp-79h]
  struct VIDMM_VAD *v79; // [rsp+48h] [rbp-79h]
  unsigned __int64 v80; // [rsp+50h] [rbp-71h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v81; // [rsp+58h] [rbp-69h] BYREF
  _QWORD v82[20]; // [rsp+60h] [rbp-61h] BYREF
  struct VIDMM_MAPPED_VA_RANGE *v83; // [rsp+110h] [rbp+4Fh] BYREF
  unsigned int v84; // [rsp+118h] [rbp+57h]
  unsigned __int8 v85; // [rsp+120h] [rbp+5Fh]
  void (*v86)(void *); // [rsp+128h] [rbp+67h]

  v86 = a4;
  v85 = a3;
  v84 = a2;
  v7 = a2;
  v9 = a3;
  v10 = a4;
  memset(v82, 0, 0x58uLL);
  v12 = (unsigned int)v7;
  v13 = *((_QWORD *)this + 5027);
  v14 = 1584 * v7;
  v15 = v13 + 1584 * v7;
  if ( g_IsInternalReleaseOrDbg )
  {
    v70 = (_QWORD *)WdLogNewEntry5_WdTrace(v11);
    v70[3] = v9;
    v70[4] = *((unsigned int *)this + v7 + 414);
    v70[5] = *((unsigned int *)this + v7 + 478);
    v13 = *((_QWORD *)this + 5027);
  }
  v16 = *((_BYTE *)this + 40937);
  v17 = v16;
  if ( (v16 & 1) != 0 && (_BYTE)v9 )
  {
    LOBYTE(v17) = v16 | 2;
    *((_BYTE *)this + 40937) = v16 | 2;
  }
  v18 = (unsigned __int8)v17;
  if ( (*(_BYTE *)(v13 + v14 + 436) & 1) != 0 && *((_QWORD *)this + v7 + 143) && *((_DWORD *)this + 2) && (v17 & 1) == 0 )
  {
    LOBYTE(v17) = v17 | 1;
    *((_BYTE *)this + 40937) = v17;
    v19 = (struct _KTHREAD **)*((_QWORD *)this + v7 + 5052);
    while ( 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        v21 = (_QWORD **)(v14 + *((_QWORD *)this + 5027) + 464LL);
        v22 = *v21;
        if ( *v21 == v21 )
          break;
        v57 = v22[2];
        v58 = *((_QWORD *)this + v12 + 747);
        v83 = (struct VIDMM_MAPPED_VA_RANGE *)(v22 - 3);
        if ( !VidSchIsMonitoredFenceSignaled(v58, v57) )
          break;
        v59 = *v22;
        if ( *(_QWORD **)(*v22 + 8LL) != v22 || (v60 = (_QWORD *)v22[1], (_QWORD *)*v60 != v22) )
LABEL_86:
          __fastfail(3u);
        *v60 = v59;
        *(_QWORD *)(v59 + 8) = v60;
        *v22 = 0LL;
        v22[1] = 0LL;
        v61 = v83;
        if ( VIDMM_GLOBAL::_Config >= 0 )
        {
          v20 = 1;
          CVirtualAddressAllocator::UncommitVirtualAddressRange(
            *((CVirtualAddressAllocator **)this + v12 + 5052),
            v83,
            0LL,
            1u);
        }
        v62 = *(struct VIDMM_VAD **)v61;
        v63 = 0;
        v79 = v62;
        if ( v19[8] != KeGetCurrentThread() )
        {
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v19 + 7));
          v63 = 1;
        }
        CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)v19, v79);
        if ( v63 )
        {
          v19[8] = 0LL;
          ExReleasePushLockExclusiveEx(v19 + 7, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      if ( !v20 )
        break;
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v84, 0, 0LL, 0LL, 0, 0);
    }
    *((_BYTE *)this + 40937) &= ~1u;
    v18 = *((unsigned __int8 *)this + 40937);
    v10 = v86;
    LODWORD(v7) = v84;
    LOBYTE(v9) = v85;
  }
  if ( (v18 & 1) == 0 )
  {
    if ( a6 && (v18 & 2) != 0 )
    {
      LOBYTE(v9) = 0;
      v85 = 0;
    }
    LOBYTE(v18) = v18 & 0xFD;
    *((_BYTE *)this + 40937) = v18;
  }
  if ( *((_DWORD *)this + v12 + 478) == *((_DWORD *)this + v12 + 414)
    && *((_DWORD *)this + v12 + 606) == *((_DWORD *)this + v12 + 542)
    && !(_BYTE)v9 )
  {
    v23 = (VIDMM_GLOBAL *)*((_QWORD *)this + 471);
    if ( v23 != (VIDMM_GLOBAL *)((char *)this + 3768) )
    {
      while ( 1 )
      {
        v71 = (_QWORD *)((char *)v23 - 224);
        v72 = v23;
        v73 = *((_DWORD *)v23 - 37);
        v23 = *(VIDMM_GLOBAL **)v23;
        if ( (v73 & 0x3F) == (_DWORD)v7 )
        {
          if ( *((VIDMM_GLOBAL **)v23 + 1) != v72 )
            goto LABEL_86;
          v74 = (VIDMM_GLOBAL **)*((_QWORD *)v72 + 1);
          if ( *v74 != v72 )
            goto LABEL_86;
          *v74 = v23;
          *((_QWORD *)v23 + 1) = v74;
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v18) + 24) = v71;
          v18 = *((_QWORD *)this + 474);
          if ( *(VIDMM_GLOBAL **)v18 != (VIDMM_GLOBAL *)((char *)this + 3784) )
            goto LABEL_86;
          *(_QWORD *)v72 = (char *)this + 3784;
          *((_QWORD *)v72 + 1) = v18;
          *(_QWORD *)v18 = v72;
          *((_QWORD *)this + 474) = v72;
        }
        if ( v23 == (VIDMM_GLOBAL *)((char *)this + 3768) )
          return;
      }
    }
    return;
  }
  if ( !*((_DWORD *)this + 2) )
  {
    v75 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17);
    v75[3] = 270LL;
    v75[4] = 33LL;
    v75[5] = this;
    v75[6] = 0LL;
    v75[7] = 0LL;
    WdLogEvent5_WdCriticalError(v75);
  }
  v24 = (char *)this + 8 * v12;
  v25 = *((_QWORD *)v24 + 143);
  v26 = *(_DWORD *)(v25 + 172);
  v27 = *(_DWORD *)(v25 + 168);
  *(_DWORD *)(v25 + 172) = v27;
  v28 = (_QWORD *)*((_QWORD *)v24 + 143);
  v78 = v26;
  v29 = v28[7];
  if ( v29 )
  {
    v30 = *(_QWORD *)(v29 + 128);
    if ( (*(_DWORD *)(v30 + 80) & 0x1000) != 0 )
      v77 = 0;
    else
      v77 = *(_DWORD *)(v30 + 16) + 1;
    v31 = *(_QWORD *)(v29 + 136) + *(_QWORD *)(v30 + 24);
  }
  else
  {
    v31 = v28[11];
    v77 = 0;
  }
  if ( v10 )
  {
    ((void (__fastcall *)(void *))v10)(a5);
    v28 = (_QWORD *)*((_QWORD *)this + v12 + 143);
  }
  if ( *(_DWORD *)(v28[17] + 36LL) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v28[7] + 128LL) + 56LL))(*(_QWORD *)(v28[7] + 128LL));
  for ( i = 0; i < *(_DWORD *)(v15 + 24); ++i )
  {
    v33 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (i + *(_DWORD *)(*((_QWORD *)this + 5027) + v14 + 20)));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 160LL))(v33);
  }
  v34 = *((unsigned int *)this + v12 + 414);
  v35 = (_DWORD)v34 == *((_DWORD *)this + v12 + 478) && *((_DWORD *)this + v12 + 542) == *((_DWORD *)this + v12 + 606);
  v36 = *((unsigned int *)this + v12 + 1173);
  if ( !(_DWORD)v36 && v35 )
  {
    v42 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 8 * v12 + 1144);
    goto LABEL_54;
  }
  if ( (*(_BYTE *)(*((_QWORD *)this + 5027) + v14 + 436) & 0x40) != 0 )
  {
    v76 = WdLogNewEntry5_WdWarning(v34, v36);
    *(_QWORD *)(v76 + 24) = v12;
    WdLogEvent5_WdWarning(v76);
    LODWORD(v36) = *((_DWORD *)this + v12 + 1173);
  }
  if ( !(_DWORD)v36 )
  {
    *((_DWORD *)this + v12 + 1173) = 1;
    ++*((_QWORD *)this + v12 + 619);
  }
  v37 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)this + v12 + 747);
  v38 = *((_QWORD *)this + 2);
  v39 = v37;
  v40 = *((_QWORD *)this + v12 + 619);
  v41 = v84;
  LOBYTE(v83) = *(_BYTE *)(*(_QWORD *)(v38 + 624) + 55LL);
  v81 = v37;
  v80 = v40;
  if ( (_BYTE)v83 && !*(_BYTE *)(*(_QWORD *)(v38 + 624) + 58LL) )
  {
    VIDMM_GLOBAL::SignalMonitoredFence(this, v84, v37, v40, (bool *)&v83);
    v39 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)this + v12 + 747);
  }
  v82[4] = *((_QWORD *)v39 + 8);
  v42 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 8 * v12 + 1144);
  v82[3] = *((_QWORD *)this + v12 + 811);
  v82[1] = *v42;
  LODWORD(v82[0]) = 256;
  v82[2] = v40;
  _InterlockedIncrement((volatile signed __int32 *)(v82[1] + 32LL));
  v43 = *((_DWORD *)this + v12 + 478);
  v82[6] = __PAIR64__(v43, v77);
  v44 = *((_DWORD *)this + v12 + 414) - v43;
  v45 = *((_DWORD *)this + v12 + 606);
  v82[7] = __PAIR64__(v45, v44);
  v82[8] = __PAIR64__(v78, *((_DWORD *)this + v12 + 542) - v45);
  v46 = *((_QWORD *)this + 3);
  v82[5] = v31;
  v47 = a7;
  LODWORD(v82[9]) = v27;
  v48 = *(_QWORD *)(v46 + 2560) + 360 * v12;
  if ( a7 )
    v49 = *(unsigned int *)(v48 + 20);
  else
    v49 = *(unsigned __int16 *)(v48 + 2);
  HIDWORD(v82[9]) = VidSchGetNodeOrdinal(*(_QWORD *)(*((_QWORD *)this + 2) + 624LL), v41, v49);
  LOBYTE(v82[10]) = v47 != 0;
  if ( (*((_BYTE *)this + 40936) & 2) != 0 && *((_QWORD *)this + 5123) )
    VIDMM_GLOBAL::RecordVaPagingHistoryFlushPagingBuffer(
      this,
      (struct VIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER *)v82,
      v41);
  VidSchSubmitPagingCommand(*(_QWORD *)(*((_QWORD *)this + 2) + 624LL), v82);
  if ( !(_BYTE)v83 )
  {
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0;
    v53 = 0LL;
    v54 = *(_QWORD *)(*((_QWORD *)this + 2) + 624LL);
    if ( *(_BYTE *)(v54 + 55) )
    {
      v53 = *(_QWORD **)(v54 + 272);
      if ( !*v53 )
      {
        VidSchSignalSyncObjectsFromCpu(1LL, &v81, 0LL, (char *)&v80);
        goto LABEL_53;
      }
      if ( v41 == -1 )
      {
        v52 = *(_DWORD *)(v54 + 68);
      }
      else
      {
        v52 = 1;
        v53 += v12;
      }
    }
    else if ( v41 == -1 )
    {
      v50 = *(unsigned int *)(v54 + 68);
      if ( v47 )
        v51 = *(_QWORD **)(v54 + 280);
      else
        v51 = *(_QWORD **)(v54 + 256);
    }
    else
    {
      v50 = 1LL;
      if ( v47 )
        v55 = *(_QWORD *)(v54 + 280);
      else
        v55 = *(_QWORD *)(v54 + 256);
      v51 = (_QWORD *)(v55 + 8 * v12);
    }
    VidSchSignalSyncObjectsFromGpu(v52, (__int64)v53, v50, v51, 1u, (__int64)&v81, 0, &v80);
  }
LABEL_53:
  *((_QWORD *)this + v12 + 683) = v40;
  LODWORD(v34) = *((_DWORD *)this + v12 + 414);
LABEL_54:
  *((_DWORD *)this + v12 + 606) = *((_DWORD *)this + v12 + 542);
  *((_DWORD *)this + v12 + 478) = v34;
  v56 = (VIDMM_GLOBAL *)*((_QWORD *)this + 471);
  if ( v56 != (VIDMM_GLOBAL *)((char *)this + 3768) )
  {
    v64 = v84;
    do
    {
      v65 = (_QWORD *)((char *)v56 - 224);
      v66 = v56;
      v67 = *((_DWORD *)v56 - 37);
      v56 = *(VIDMM_GLOBAL **)v56;
      if ( (v67 & 0x3F) == (_DWORD)v64 )
      {
        if ( *((VIDMM_GLOBAL **)v56 + 1) != v66 )
          goto LABEL_86;
        v68 = (VIDMM_GLOBAL **)*((_QWORD *)v66 + 1);
        if ( *v68 != v66 )
          goto LABEL_86;
        *v68 = v56;
        *((_QWORD *)v56 + 1) = v68;
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v64) + 24) = v65;
        v69 = (VIDMM_GLOBAL **)*((_QWORD *)this + 474);
        if ( *v69 != (VIDMM_GLOBAL *)((char *)this + 3784) )
          goto LABEL_86;
        *((_QWORD *)v66 + 1) = v69;
        *(_QWORD *)v66 = (char *)this + 3784;
        *v69 = v66;
        v64 = v84;
        *((_QWORD *)this + 474) = v66;
      }
    }
    while ( v56 != (VIDMM_GLOBAL *)((char *)this + 3768) );
  }
  *((_DWORD *)this + v12 + 960) = 1;
  *((_DWORD *)this + v12 + 1173) = 0;
  if ( v85 )
  {
    VIDMM_DMA_POOL::ReleaseBuffer(*((VIDMM_DMA_POOL **)this + v12 + 79), *v42, 1);
    VIDMM_DMA_POOL::AcquireBuffer(*((VIDMM_DMA_POOL **)this + v12 + 79), v42, 0, 1u);
    *((_DWORD *)*v42 + 8) = 1;
    *((_DWORD *)this + v12 + 414) = 0;
    *((_DWORD *)this + v12 + 478) = 0;
    *((_DWORD *)this + v12 + 542) = 0;
    *((_DWORD *)this + v12 + 606) = 0;
  }
  *(_QWORD *)(*((_QWORD *)this + 5027) + 448LL) = 0LL;
}
