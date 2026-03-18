/*
 * XREFs of ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C0062280
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00620B0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00B48B0 (-RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001194 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016B80 (memmove.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00222FC (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E80 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C0024EF0 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     McTemplateK0qqqxxp_EtwWriteTransfer @ 0x1C0028534 (McTemplateK0qqqxxp_EtwWriteTransfer.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C0061058 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0061414 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0061EBC (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0063778 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C0063834 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C006442C (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0064454 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00661CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FillAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0075E10 (-FillAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0083620 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C008698C (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00874B0 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C00889BC (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRE.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0088CF8 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C008A2B8 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00B4094 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B49DC (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C6DB4 (-SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00C7158 (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 *     ?ReclaimScrubRegionResources@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C9D74 (-ReclaimScrubRegionResources@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::TransferToSegment(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _MDL *a3,
        unsigned __int8 a4)
{
  int v4; // r12d
  __int64 v7; // r13
  __int64 v8; // rdx
  VIDMM_GLOBAL *v9; // rcx
  unsigned int v10; // r9d
  __int64 v11; // r15
  VIDMM_SEGMENT *v12; // rcx
  int v13; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // r9d
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned __int8 v23; // al
  unsigned __int64 v24; // r8
  unsigned int v25; // edx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r8
  unsigned int v28; // r12d
  size_t v29; // rcx
  char *v30; // rax
  SIZE_T v31; // r12
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r8
  SIZE_T v38; // rdx
  _QWORD *v39; // rax
  SIZE_T v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r8
  SIZE_T v44; // rdx
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  unsigned int v47; // eax
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r10
  struct _MDL *v51; // [rsp+30h] [rbp-148h]
  bool v52; // [rsp+60h] [rbp-118h] BYREF
  bool v53; // [rsp+61h] [rbp-117h] BYREF
  unsigned int v54; // [rsp+64h] [rbp-114h]
  size_t v55; // [rsp+68h] [rbp-110h]
  size_t Size; // [rsp+70h] [rbp-108h]
  int v57; // [rsp+78h] [rbp-100h]
  int v58; // [rsp+80h] [rbp-F8h]
  union _LARGE_INTEGER v59; // [rsp+88h] [rbp-F0h] BYREF
  void *v60; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v61; // [rsp+98h] [rbp-E0h]
  unsigned __int64 v62; // [rsp+A0h] [rbp-D8h]
  VIDMM_MEMORY_SEGMENT *v63; // [rsp+A8h] [rbp-D0h]
  __int64 v64; // [rsp+B0h] [rbp-C8h]
  struct _VIDMM_GLOBAL_ALLOC *v65; // [rsp+B8h] [rbp-C0h]
  unsigned __int64 v66; // [rsp+C0h] [rbp-B8h]
  unsigned __int64 v67; // [rsp+C8h] [rbp-B0h]
  struct _KAPC_STATE ApcState; // [rsp+D0h] [rbp-A8h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v69; // [rsp+100h] [rbp-78h] BYREF

  v4 = a4;
  Size = (size_t)a3;
  v63 = this;
  v65 = a2;
  v57 = 0;
  v52 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v7 = *((_QWORD *)a2 + 12);
  v64 = v7;
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 1), a2, 1u);
  if ( VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 1)) )
  {
    LODWORD(v11) = -1073741130;
    if ( !(_BYTE)v4 )
    {
      v17 = WdLogNewEntry5_WdEvent(v9, v8);
      *(_QWORD *)(v17 + 24) = a2;
      WdLogEvent5_WdEvent(v17);
      return (unsigned int)v11;
    }
    goto LABEL_12;
  }
  LODWORD(v11) = -1073741823;
  if ( (*((_DWORD *)a2 + 21) & 0x20) != 0 )
  {
    if ( *((int *)a2 + 85) > 0 )
    {
      VIDMM_GLOBAL::UnlockAllocation(v9, (struct _VIDMM_LOCAL_ALLOC *)v7, 0LL, *((_QWORD *)a2 + 1), 0, 0);
      VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
      *((_DWORD *)a2 + 21) &= ~2u;
      --*((_DWORD *)a2 + 85);
    }
    *(SIZE_T *)((char *)&v69.CurrentSize + 4) = 0LL;
    HIDWORD(v69.NewStartOffset) = 0;
    *(_QWORD *)&v69.VprIndex = this;
    v69.CurrentStartOffset = *((_QWORD *)a2 + 26);
    *(_QWORD *)&v69.PhysicalAdapterIndex = a2;
    LODWORD(v69.CurrentSize) = 0;
    KeStackAttachProcess(**(PRKPROCESS **)(v7 + 8), &ApcState);
    v11 = (int)VIDMM_GLOBAL::Rotate(
                 *((_QWORD *)this + 1),
                 *(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL),
                 *(_QWORD *)(v7 + 24),
                 0LL,
                 Size,
                 *((_QWORD *)a2 + 2),
                 VIDMM_MEMORY_SEGMENT::RotateFrameBufferCopyCallback,
                 &v69,
                 2 * v4,
                 a2);
    KeUnstackDetachProcess(&ApcState);
    v21 = *((_QWORD *)a2 + 32);
    if ( v21 )
      (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)v21 + 88LL))(*((_QWORD *)a2 + 32), a2);
    if ( (_BYTE)v4 )
    {
      if ( (int)v11 >= 0 )
        goto LABEL_42;
      *((_DWORD *)a2 + 19) |= 0x100000u;
      VIDMM_GLOBAL::FillAllocation(
        *((VIDMM_GLOBAL **)this + 1),
        a2,
        *((_QWORD *)a2 + 2),
        v20,
        *((struct VIDMM_SEGMENT **)a2 + 27),
        (union _LARGE_INTEGER *)a2 + 26);
    }
    else
    {
      if ( (int)v11 < 0 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v19, v18, v21);
        *(_QWORD *)(v22 + 24) = v11;
LABEL_39:
        WdLogEvent5_WdAssertion(v22);
        return (unsigned int)v11;
      }
      LODWORD(v11) = 0;
    }
    if ( (int)v11 < 0 )
    {
LABEL_43:
      *((_BYTE *)a2 + 90) = 1;
      v52 = 1;
      goto LABEL_12;
    }
LABEL_42:
    *(_BYTE *)(v7 + 32) |= 1u;
    goto LABEL_43;
  }
  if ( !*((_BYTE *)a2 + 89) )
  {
    if ( *(_QWORD *)(v7 + 24) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v7 + 8) + 24LL) + 144LL))(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL));
    if ( (*((_DWORD *)a2 + 19) & 0x100) == 0 && (*((_DWORD *)a2 + 20) & 0x800) == 0 )
      VIDMM_GLOBAL::FillAllocation(
        *((VIDMM_GLOBAL **)this + 1),
        a2,
        *((_QWORD *)a2 + 1),
        v10,
        this,
        (union _LARGE_INTEGER *)a2 + 26);
    LODWORD(v11) = 0;
    v52 = 1;
  }
  if ( (int)v11 < 0 )
  {
    v53 = 0;
    LODWORD(v11) = VIDMM_MEMORY_SEGMENT::TransferMemory(
                     this,
                     a2,
                     DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL,
                     *((struct VIDMM_SEGMENT **)a2 + 27),
                     *(union _LARGE_INTEGER *)((char *)a2 + 208),
                     &v53,
                     &v52);
    if ( v53 )
      (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *))(**((_QWORD **)a2 + 32) + 88LL))(
        *((_QWORD *)a2 + 32),
        a2);
    if ( (int)v11 < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v15);
      LODWORD(v11) = 0;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, &EventPerformanceWarning, v16, 2);
      if ( (**((_DWORD **)a2 + 62) & 8) == 0 )
        KeStackAttachProcess(**(PRKPROCESS **)(v7 + 8), &ApcState);
      v23 = Use64KbPagesForTransfer(a2, *((struct VIDMM_SEGMENT **)a2 + 27));
      v24 = *((_QWORD *)a2 + 1);
      v25 = v23 != 0 ? 0x10000 : 4096;
      LODWORD(v55) = v25;
      v26 = v24 >> 12;
      v27 = v24 >> 16;
      if ( !v23 )
        v27 = (unsigned int)v26;
      v62 = v27;
      v58 = v27;
      v59 = *(union _LARGE_INTEGER *)((char *)a2 + 208);
      v28 = 0;
      v54 = 0;
      v61 = v25;
      v29 = v25;
      for ( Size = v25; ; v29 = Size )
      {
        v67 = v29;
        if ( v28 >= (unsigned int)v27 )
          break;
        v60 = 0LL;
        v66 = v25 * v28;
        v30 = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v7, v66, v29, &v60, 0);
        if ( v30 )
        {
          memmove(*((void **)this + 32), v30, Size);
          VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v7, v60);
        }
        else
        {
          *((_DWORD *)a2 + 19) |= 0x100000u;
        }
        VIDMM_GLOBAL::MemoryTransfer(
          *((VIDMM_GLOBAL **)this + 1),
          a2,
          v67,
          v66,
          0LL,
          0LL,
          *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL),
          this,
          &v59,
          0LL,
          0);
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
        v59.QuadPart += v61;
        v54 = ++v28;
        v25 = v55;
        LODWORD(v27) = v62;
      }
      v52 = 1;
      if ( (**((_DWORD **)a2 + 62) & 8) == 0 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
  if ( (**((_DWORD **)a2 + 62) & 0x20000) == 0 )
    goto LABEL_12;
  v31 = *((_QWORD *)a2 + 2);
  memset(&v69, 0, sizeof(v69));
  v69.PhysicalAdapterIndex = *((_DWORD *)this + 95);
  v69.SegmentIndex = VIDMM_SEGMENT::DriverId(this);
  if ( *((_DWORD *)this + 103) )
  {
    v40 = *((_QWORD *)a2 + 26) & ~*((_QWORD *)this + 50);
    if ( v40 < *((_QWORD *)this + 52) )
    {
      if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1)
                                                                                            + 41104LL)) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v41, &EventPerformanceWarning, v42, 24);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41152LL), Executive, 0, 0, 0LL);
      }
      VIDMM_MEMORY_SEGMENT::SuspendPurgeForVPRGrow(this, a2);
      VIDMM_SEGMENT::ReclaimScrubRegionResources(this, a2);
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1));
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
      v69.CurrentStartOffset = *((_QWORD *)this + 52);
      v69.CurrentSize = *((_QWORD *)this + 54);
      v69.NewStartOffset = v40;
      v44 = *((_QWORD *)this + 53) - v40;
      v69.NewSize = v44;
      *((_QWORD *)this + 54) = v44;
      *((_QWORD *)this + 52) = v40;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqxxp_EtwWriteTransfer(
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
          v44,
          v43,
          v69.PhysicalAdapterIndex,
          v69.SegmentIndex,
          v69.VprIndex,
          v40,
          v44,
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
      LODWORD(v11) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                       *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2680LL),
                       &v69);
      if ( (int)v11 < 0 && g_IsInternalRelease )
      {
        v45 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32);
        v45[3] = 270LL;
        v45[4] = 9LL;
        v45[5] = 0LL;
        v45[6] = 0LL;
        v45[7] = 0LL;
        WdLogEvent5_WdCriticalError(v45);
      }
    }
    if ( (int)v11 < 0 )
      goto LABEL_38;
    *((_DWORD *)a2 + 20) |= 0x200u;
    *((_QWORD *)this + 55) += v31;
    if ( g_IsInternalReleaseOrDbg )
    {
      v46 = (_QWORD *)WdLogNewEntry5_WdTrace(v33);
      v46[3] = v31;
      v33 = *((_QWORD *)this + 55);
      v46[4] = v33;
      v46[5] = a2;
    }
  }
  else
  {
    if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1)
                                                                                          + 41104LL)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v35, &EventPerformanceWarning, v36, 24);
      KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41152LL), Executive, 0, 0, 0LL);
    }
    VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1));
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
    v38 = *((_QWORD *)a2 + 26);
    v69.NewStartOffset = v38;
    v69.NewSize = v31;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqqxxp_EtwWriteTransfer(
        *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
        v38,
        v37,
        v69.PhysicalAdapterIndex,
        v69.SegmentIndex,
        v69.VprIndex,
        v38,
        v31,
        *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
    LODWORD(v11) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                     *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2680LL),
                     &v69);
    if ( (int)v11 < 0 && g_IsInternalRelease )
    {
      v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32);
      v39[3] = 270LL;
      v39[4] = 9LL;
      v39[5] = 0LL;
      v39[6] = 0LL;
      v39[7] = 0LL;
      WdLogEvent5_WdCriticalError(v39);
    }
  }
  if ( (int)v11 < 0 )
  {
LABEL_38:
    v22 = WdLogNewEntry5_WdAssertion(v33, v32, v34);
    *(_QWORD *)(v22 + 24) = 1018LL;
    goto LABEL_39;
  }
LABEL_12:
  v12 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 27);
  *((_QWORD *)a2 + 16) = v12;
  *((_QWORD *)a2 + 17) = *((_QWORD *)a2 + 26);
  *(_WORD *)(*((_QWORD *)a2 + 62) + 6LL) = VIDMM_SEGMENT::DriverId(v12);
  *(_QWORD *)(*((_QWORD *)a2 + 62) + 32LL) = *((_QWORD *)a2 + 17) + *(_QWORD *)(*((_QWORD *)a2 + 16) + 24LL);
  *((_QWORD *)a2 + 27) = 0LL;
  v13 = *((_DWORD *)a2 + 21);
  if ( (v13 & 2) != 0 )
  {
    VIDMM_SEGMENT::UnlockAllocationBackingStore(*((struct VIDMM_GLOBAL **)this + 1), a2, 0LL);
    VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
    *((_DWORD *)a2 + 21) &= ~2u;
    v13 = *((_DWORD *)a2 + 21);
  }
  if ( v52 && (v13 & 8) == 0 && !*((_QWORD *)a2 + 32) )
    VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
  if ( (**((_DWORD **)a2 + 62) & 0x10000) != 0 )
    VIDMM_GLOBAL::NotifyResidency(*((VIDMM_GLOBAL **)this + 1), a2, 1u);
  if ( *(_QWORD *)(*((_QWORD *)this + 1) + 41024LL) )
  {
    v47 = VIDMM_SEGMENT::DriverId(this);
    VIDMM_GLOBAL::RecordPageMappingHistory(v50, v47, v48, v49, 3, a2, v51);
  }
  return (unsigned int)v11;
}
