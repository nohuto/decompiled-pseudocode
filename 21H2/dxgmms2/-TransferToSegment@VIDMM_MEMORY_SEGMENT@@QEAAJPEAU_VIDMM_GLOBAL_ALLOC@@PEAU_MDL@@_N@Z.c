/*
 * XREFs of ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C0084964
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0084720 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00D9800 (-RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001D980 (memmove.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C002CBB0 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C002EF60 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     McTemplateK0qqqxxp_EtwWriteTransfer @ 0x1C0032AA0 (McTemplateK0qqqxxp_EtwWriteTransfer.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C007C090 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C007C1D4 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?FillAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C00838F4 (-FillAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00856F4 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0085A4C (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0085AA0 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0085EBC (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C0085F74 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?VidMmiRemoveProbeAndLockReference@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0086088 (-VidMmiRemoveProbeAndLockReference@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0086108 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00A2358 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00A5F18 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00A67B0 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C00A7774 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRE.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00A7A1C (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A90B8 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00D6A68 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00D937C (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E95DC (-SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00E9950 (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 *     ?ReclaimScrubRegionResources@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00EC4AC (-ReclaimScrubRegionResources@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::TransferToSegment(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _MDL *a3,
        bool a4)
{
  __int64 v6; // r13
  VIDMM_GLOBAL *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r15
  VIDMM_SEGMENT *v10; // rcx
  int v11; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int8 v20; // al
  unsigned __int64 v21; // r8
  unsigned int v22; // edx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r8
  unsigned int v25; // eax
  size_t v26; // rcx
  char *v27; // rax
  SIZE_T v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r8
  SIZE_T v36; // rdx
  SIZE_T v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r8
  SIZE_T v41; // rdx
  _QWORD *v42; // rax
  unsigned int v43; // eax
  __int64 v44; // r10
  struct _MDL *v45; // [rsp+30h] [rbp-148h]
  bool v46; // [rsp+60h] [rbp-118h] BYREF
  bool v47; // [rsp+61h] [rbp-117h] BYREF
  unsigned int v48; // [rsp+64h] [rbp-114h]
  size_t v49; // [rsp+68h] [rbp-110h]
  size_t Size; // [rsp+70h] [rbp-108h]
  int v51; // [rsp+78h] [rbp-100h]
  int v52; // [rsp+80h] [rbp-F8h]
  union _LARGE_INTEGER v53; // [rsp+88h] [rbp-F0h] BYREF
  void *v54; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v55; // [rsp+98h] [rbp-E0h]
  unsigned __int64 v56; // [rsp+A0h] [rbp-D8h]
  VIDMM_MEMORY_SEGMENT *v57; // [rsp+A8h] [rbp-D0h]
  __int64 v58; // [rsp+B0h] [rbp-C8h]
  struct _VIDMM_GLOBAL_ALLOC *v59; // [rsp+B8h] [rbp-C0h]
  unsigned __int64 v60; // [rsp+C0h] [rbp-B8h]
  unsigned __int64 v61; // [rsp+C8h] [rbp-B0h]
  struct _KAPC_STATE ApcState; // [rsp+D0h] [rbp-A8h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v63; // [rsp+100h] [rbp-78h] BYREF

  v47 = a4;
  Size = (size_t)a3;
  v57 = this;
  v59 = a2;
  v51 = 0;
  v46 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v6 = *((_QWORD *)a2 + 11);
  v58 = v6;
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 1), a2, 1u);
  if ( VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 1)) )
  {
    LODWORD(v9) = -1073741130;
    if ( !v47 )
    {
      WdLogSingleEntry1(4LL, a2);
      return (unsigned int)v9;
    }
    goto LABEL_12;
  }
  LODWORD(v9) = -1073741823;
  if ( *((_BYTE *)a2 + 80) )
  {
    if ( *((int *)a2 + 91) > 0 )
    {
      VIDMM_GLOBAL::UnlockAllocation(v7, (struct _VIDMM_LOCAL_ALLOC *)v6, 0LL, *((_QWORD *)a2 + 1), 0, 0);
      VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
      *((_DWORD *)a2 + 19) &= ~2u;
      VidMmiRemoveProbeAndLockReference(a2);
    }
    *(SIZE_T *)((char *)&v63.CurrentSize + 4) = 0LL;
    HIDWORD(v63.NewStartOffset) = 0;
    *(_QWORD *)&v63.VprIndex = this;
    v63.CurrentStartOffset = *((_QWORD *)a2 + 24);
    *(_QWORD *)&v63.PhysicalAdapterIndex = a2;
    LODWORD(v63.CurrentSize) = 0;
    KeStackAttachProcess(**(PRKPROCESS **)(v6 + 8), &ApcState);
    v9 = (int)VIDMM_GLOBAL::Rotate(
                *((_QWORD *)this + 1),
                *(_QWORD *)(*(_QWORD *)(v6 + 8) + 24LL),
                *(_QWORD *)(v6 + 24),
                0LL,
                Size,
                *((_QWORD *)a2 + 2),
                VIDMM_MEMORY_SEGMENT::RotateFrameBufferCopyCallback,
                &v63,
                2 * (unsigned int)v47,
                a2);
    KeUnstackDetachProcess(&ApcState);
    v18 = *((_QWORD *)a2 + 30);
    if ( v18 )
      (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)v18 + 88LL))(*((_QWORD *)a2 + 30), a2);
    if ( v47 )
    {
      if ( (int)v9 >= 0 )
        goto LABEL_35;
      *((_DWORD *)a2 + 17) |= 0x200000u;
      VIDMM_GLOBAL::FillAllocation(
        *((VIDMM_GLOBAL **)this + 1),
        a2,
        *((_QWORD *)a2 + 2),
        v17,
        *((struct VIDMM_SEGMENT **)a2 + 25),
        (union _LARGE_INTEGER *)a2 + 24);
    }
    else
    {
      if ( (int)v9 < 0 )
      {
        WdLogSingleEntry1(1LL, v9);
LABEL_43:
        DxgkLogInternalTriageEvent(v19, 0x40000LL);
        return (unsigned int)v9;
      }
      LODWORD(v9) = 0;
    }
    if ( (int)v9 < 0 )
    {
LABEL_36:
      *((_BYTE *)a2 + 83) = 1;
      v46 = 1;
      goto LABEL_12;
    }
LABEL_35:
    *(_BYTE *)(v6 + 32) |= 1u;
    goto LABEL_36;
  }
  if ( !*((_BYTE *)a2 + 82) )
  {
    if ( *(_QWORD *)(v6 + 24) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v6 + 8) + 24LL) + 144LL))(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 24LL));
    if ( (*((_DWORD *)a2 + 17) & 0x100) == 0 && (*((_DWORD *)a2 + 18) & 0x800) == 0 )
      VIDMM_GLOBAL::FillAllocation(
        *((VIDMM_GLOBAL **)this + 1),
        a2,
        *((_QWORD *)a2 + 1),
        v8,
        this,
        (union _LARGE_INTEGER *)a2 + 24);
    LODWORD(v9) = 0;
    v46 = 1;
  }
  if ( (int)v9 < 0 )
  {
    v47 = 0;
    LODWORD(v9) = VIDMM_MEMORY_SEGMENT::TransferMemory(
                    this,
                    a2,
                    DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL,
                    *((struct VIDMM_SEGMENT **)a2 + 25),
                    *(union _LARGE_INTEGER *)((char *)a2 + 192),
                    &v47,
                    &v46);
    if ( v47 )
      (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *))(**((_QWORD **)a2 + 30) + 88LL))(
        *((_QWORD *)a2 + 30),
        a2);
    if ( (int)v9 < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
      LODWORD(v9) = 0;
      if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventPerformanceWarning, v15, 2);
      if ( (**((_DWORD **)a2 + 66) & 8) == 0 )
        KeStackAttachProcess(**(PRKPROCESS **)(v6 + 8), &ApcState);
      v20 = Use64KbPagesForTransfer(a2, *((struct VIDMM_SEGMENT **)a2 + 25));
      v21 = *((_QWORD *)a2 + 1);
      v22 = v20 != 0 ? 0x10000 : 4096;
      LODWORD(v49) = v22;
      v23 = v21 >> 12;
      v24 = v21 >> 16;
      if ( !v20 )
        v24 = (unsigned int)v23;
      v56 = v24;
      v52 = v24;
      v53 = *(union _LARGE_INTEGER *)((char *)a2 + 192);
      v25 = 0;
      v26 = v22;
      v55 = v22;
      for ( Size = v22; ; v26 = Size )
      {
        v48 = v25;
        v61 = v26;
        if ( v25 >= (unsigned int)v24 )
          break;
        v54 = 0LL;
        v60 = v22 * v25;
        v27 = VidMmMapViewOfAllocation(
                (struct _VIDMM_LOCAL_ALLOC *)v6,
                (struct _VIDMM_LOCAL_ALLOC *)(unsigned int)v60,
                v26,
                &v54,
                0);
        if ( v27 )
        {
          memmove(*((void **)this + 32), v27, Size);
          VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v6, v54);
        }
        else
        {
          *((_DWORD *)a2 + 17) |= 0x200000u;
        }
        VIDMM_GLOBAL::MemoryTransfer(
          *((VIDMM_GLOBAL **)this + 1),
          a2,
          v61,
          v60,
          0LL,
          0LL,
          *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL),
          this,
          &v53,
          0LL,
          0);
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
        v53.QuadPart += v55;
        v25 = v48 + 1;
        v22 = v49;
        LODWORD(v24) = v56;
      }
      v46 = 1;
      if ( (**((_DWORD **)a2 + 66) & 8) == 0 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
  if ( (**((_DWORD **)a2 + 66) & 0x20000) == 0 )
    goto LABEL_12;
  v28 = *((_QWORD *)a2 + 2);
  memset(&v63, 0, sizeof(v63));
  v63.PhysicalAdapterIndex = *((_DWORD *)this + 95);
  v63.SegmentIndex = VIDMM_SEGMENT::DriverId(this);
  if ( *((_DWORD *)this + 103) )
  {
    v37 = *((_QWORD *)a2 + 24) & ~*((_QWORD *)this + 50);
    if ( v37 < *((_QWORD *)this + 52) )
    {
      if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1)
                                                                                            + 41104LL)) )
      {
        if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v38, (__int64)&EventPerformanceWarning, v39, 24);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41152LL), Executive, 0, 0, 0LL);
      }
      VIDMM_MEMORY_SEGMENT::SuspendPurgeForVPRGrow(this, a2);
      VIDMM_SEGMENT::ReclaimScrubRegionResources(this, a2);
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1), 0LL);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
      v63.CurrentStartOffset = *((_QWORD *)this + 52);
      v63.CurrentSize = *((_QWORD *)this + 54);
      v63.NewStartOffset = v37;
      v41 = *((_QWORD *)this + 53) - v37;
      v63.NewSize = v41;
      *((_QWORD *)this + 54) = v41;
      *((_QWORD *)this + 52) = v37;
      if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
        McTemplateK0qqqxxp_EtwWriteTransfer(
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
          v41,
          v40,
          v63.PhysicalAdapterIndex,
          v63.SegmentIndex,
          v63.VprIndex,
          v37,
          v41,
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
      LODWORD(v9) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                      *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2800LL),
                      &v63);
      if ( (int)v9 < 0 && g_IsInternalRelease )
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    }
    if ( (int)v9 < 0 )
      goto LABEL_42;
    *((_DWORD *)a2 + 18) |= 0x200u;
    *((_QWORD *)this + 55) += v28;
    if ( g_IsInternalReleaseOrDbg )
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdTrace(v30, v29, v31, v32);
      v42[3] = v28;
      v42[4] = *((_QWORD *)this + 55);
      v42[5] = a2;
    }
  }
  else
  {
    if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1)
                                                                                          + 41104LL)) )
    {
      if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventPerformanceWarning, v34, 24);
      KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41152LL), Executive, 0, 0, 0LL);
    }
    VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1), 0LL);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
    v36 = *((_QWORD *)a2 + 24);
    v63.NewStartOffset = v36;
    v63.NewSize = v28;
    if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
      McTemplateK0qqqxxp_EtwWriteTransfer(
        *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
        v36,
        v35,
        v63.PhysicalAdapterIndex,
        v63.SegmentIndex,
        v63.VprIndex,
        v36,
        v28,
        *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
    LODWORD(v9) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                    *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2800LL),
                    &v63);
    if ( (int)v9 < 0 && g_IsInternalRelease )
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
  }
  if ( (int)v9 < 0 )
  {
LABEL_42:
    WdLogSingleEntry1(1LL, 1033LL);
    goto LABEL_43;
  }
LABEL_12:
  v10 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 25);
  *((_QWORD *)a2 + 15) = v10;
  *((_QWORD *)a2 + 16) = *((_QWORD *)a2 + 24);
  *(_WORD *)(*((_QWORD *)a2 + 66) + 6LL) = VIDMM_SEGMENT::DriverId(v10);
  *(_QWORD *)(*((_QWORD *)a2 + 66) + 32LL) = *((_QWORD *)a2 + 16) + *(_QWORD *)(*((_QWORD *)a2 + 15) + 24LL);
  *((_QWORD *)a2 + 25) = 0LL;
  v11 = *((_DWORD *)a2 + 19);
  if ( (v11 & 2) != 0 )
  {
    VIDMM_SEGMENT::UnlockAllocationBackingStore(*((struct VIDMM_GLOBAL **)this + 1), a2, 0LL);
    VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
    *((_DWORD *)a2 + 19) &= ~2u;
    v11 = *((_DWORD *)a2 + 19);
  }
  if ( v46 && (v11 & 8) == 0 && !*((_QWORD *)a2 + 30) )
    VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
  if ( (**((_DWORD **)a2 + 66) & 0x10000) != 0 )
    VIDMM_GLOBAL::NotifyResidency(*((VIDMM_GLOBAL **)this + 1), a2, 1u);
  if ( *(_QWORD *)(*((_QWORD *)this + 1) + 41024LL) )
  {
    v43 = VIDMM_SEGMENT::DriverId(this);
    VIDMM_GLOBAL::RecordPageMappingHistory(v44, v43, *((__int64 *)a2 + 16) >> 12, *((_QWORD *)a2 + 2) >> 12, 3, a2, v45);
  }
  return (unsigned int)v9;
}
