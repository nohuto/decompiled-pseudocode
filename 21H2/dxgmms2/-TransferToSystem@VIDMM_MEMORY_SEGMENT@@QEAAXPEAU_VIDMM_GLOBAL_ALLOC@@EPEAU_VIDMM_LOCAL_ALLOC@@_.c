/*
 * XREFs of ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00843BC
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0084CC0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00D9940 (-SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001D980 (memmove.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C002CBB0 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0pqqt_EtwWriteTransfer @ 0x1C002EC0C (McTemplateK0pqqt_EtwWriteTransfer.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C002EF60 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x1C00329E4 (-QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z.c)
 *     McTemplateK0qqqxxp_EtwWriteTransfer @ 0x1C0032AA0 (McTemplateK0qqqxxp_EtwWriteTransfer.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C007C090 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C007C1D4 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0083E3C (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00856F4 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0085A4C (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0085AA0 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0085AC8 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0086108 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1C00A0F44 (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00A2358 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00A5F18 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A633C (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C00A6554 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00A67B0 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C00A7158 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C00A7774 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRE.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00A7A1C (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00A8444 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A90B8 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00D6A68 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00D937C (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00E9950 (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00EA1F0 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00EF1A0 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1C00EF788 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::TransferToSystem(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int8 a3,
        struct _VIDMM_LOCAL_ALLOC *a4,
        bool a5)
{
  VIDMM_GLOBAL *v9; // rcx
  int *v10; // rdx
  int v11; // eax
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // bl
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // edi
  __int64 (__fastcall *v20)(struct _MDL *, struct _MDL *, void *); // rbx
  int v21; // r9d
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r10
  __int64 *v27; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v29; // ebx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdi
  void (__fastcall *v39)(__int64, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *, union _LARGE_INTEGER *, struct _MDL *, struct VIDMM_SEGMENT *); // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // edi
  unsigned __int8 v47; // al
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  unsigned int v52; // eax
  VIDMM_GLOBAL *v53; // rcx
  unsigned int v54; // ebx
  char *v55; // rax
  char v56; // bl
  unsigned __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned __int64 v59; // rax
  __int64 v60; // rcx
  SIZE_T v61; // rcx
  __int64 v62; // rbx
  _QWORD *v63; // rax
  void *v64; // rdi
  void (*v65)(void *); // r8
  void *v66; // r9
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // r8
  signed __int32 v71[8]; // [rsp+0h] [rbp-168h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-148h]
  union _LARGE_INTEGER *v73; // [rsp+28h] [rbp-140h]
  struct _MDL *v74; // [rsp+30h] [rbp-138h]
  struct VIDMM_SEGMENT *v75; // [rsp+38h] [rbp-130h]
  bool v76; // [rsp+60h] [rbp-108h] BYREF
  char v77[3]; // [rsp+61h] [rbp-107h] BYREF
  unsigned int v78; // [rsp+64h] [rbp-104h]
  SIZE_T v79; // [rsp+68h] [rbp-100h] BYREF
  int v80; // [rsp+70h] [rbp-F8h]
  union _LARGE_INTEGER v81; // [rsp+78h] [rbp-F0h] BYREF
  void *v82; // [rsp+80h] [rbp-E8h] BYREF
  unsigned __int64 v83; // [rsp+88h] [rbp-E0h] BYREF
  void *v84; // [rsp+90h] [rbp-D8h] BYREF
  size_t Size; // [rsp+98h] [rbp-D0h]
  _QWORD v86[4]; // [rsp+A0h] [rbp-C8h] BYREF
  _DXGKARG_SETVIDEOPROTECTEDREGION v87; // [rsp+C0h] [rbp-A8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-78h] BYREF

  v86[2] = this;
  v86[3] = a2;
  v86[1] = a4;
  memset(&ApcState, 0, sizeof(ApcState));
  v76 = 0;
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 1), a2, 0);
  if ( *(_QWORD *)(*((_QWORD *)this + 1) + 41024LL) )
  {
    v23 = VIDMM_SEGMENT::DriverId(this);
    VIDMM_GLOBAL::RecordPageMappingHistory(v26, v23, v24, v25, 4, a2, v74);
  }
  v9 = (VIDMM_GLOBAL *)*((unsigned int *)a2 + 17);
  if ( ((unsigned __int16)v9 & 0x100) != 0 || (*((_DWORD *)a2 + 18) & 0x400) != 0 )
    a3 = 0;
  if ( ((unsigned int)v9 & 0x10000000) != 0 )
    VIDMM_GLOBAL::NotifyContextAllocationEviction(v9, a2);
  v10 = (int *)*((_QWORD *)a2 + 66);
  v11 = *v10;
  if ( (*v10 & 0x10000) != 0 )
  {
    VIDMM_GLOBAL::NotifyResidency(*((VIDMM_GLOBAL **)this + 1), a2, 0);
    v10 = (int *)*((_QWORD *)a2 + 66);
    v11 = *v10;
  }
  if ( (v11 & 0x20000) != 0 && (*((_DWORD *)this + 20) & 0x40000) == 0 )
  {
    *((_DWORD *)a2 + 17) |= 0x200000u;
    v11 = *v10;
  }
  if ( (v11 & 0x20000000) == 0 && (unsigned __int8)PsIsProcessCommitRelinquished(**((_QWORD **)a4 + 1)) )
    *((_DWORD *)a2 + 17) |= 0x200000u;
  v12 = 0;
  if ( (*((_DWORD *)a2 + 17) & 0x200000) == 0 )
    v12 = a3;
  v78 = v12;
  if ( VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 1)) )
  {
    WdLogSingleEntry1(4LL, a2);
    LOBYTE(v14) = 0;
    v78 = v14;
  }
  if ( (VIDMM_GLOBAL::_Config & 8) == 0 && (*((_DWORD *)a2 + 19) & 8) != 0 )
    *((_BYTE *)a2 + 83) = 1;
  if ( (_BYTE)v14 && (*((_DWORD *)a2 + 19) & 8) != 0 && !*((_BYTE *)a2 + 83) && a4 )
  {
    KeStackAttachProcess(**((PRKPROCESS **)a4 + 1), &ApcState);
    v84 = 0LL;
    v27 = (__int64 *)((char *)a2 + 8);
    v86[0] = VidMmMapViewOfAllocation(a4, 0LL, *((_QWORD *)a2 + 1), &v84, 1);
    if ( v86[0] )
    {
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      v29 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, char *, int, int))VirtualMemoryInterface)(
              -1LL,
              v86,
              0LL,
              (char *)a2 + 8,
              0x1000000,
              4);
      VidMmUnmapViewOfAllocation(a4, v84);
      if ( v29 < 0 )
      {
        *((_BYTE *)a2 + 83) = 1;
        if ( bTracingEnabled )
        {
          v34 = (unsigned __int64)*v27 >> 12;
          if ( (byte_1C006E941 & 1) != 0 )
          {
            LODWORD(v74) = 0;
            LODWORD(v73) = v34;
            LODWORD(Timeout) = 0;
            McTemplateK0pqqt_EtwWriteTransfer(v34, &EventUnreset, v30, a2, Timeout, v73, v74);
          }
        }
        v35 = *v27;
        v36 = *((_QWORD *)this + 1);
        ++*(_DWORD *)(v36 + 7440);
        *(_QWORD *)(v36 + 7448) += v35;
      }
      else
      {
        if ( bTracingEnabled )
        {
          v31 = (unsigned __int64)*v27 >> 12;
          if ( (byte_1C006E941 & 1) != 0 )
          {
            LODWORD(v74) = 1;
            LODWORD(v73) = v31;
            LODWORD(Timeout) = 0;
            McTemplateK0pqqt_EtwWriteTransfer(v31, &EventUnreset, v30, a2, Timeout, v73, v74);
          }
        }
        v32 = *v27;
        v33 = *((_QWORD *)this + 1);
        ++*(_DWORD *)(v33 + 7424);
        *(_QWORD *)(v33 + 7432) += v32;
      }
    }
    KeUnstackDetachProcess(&ApcState);
    v14 = v78;
  }
  v16 = *((_BYTE *)a2 + 83) != 0 ? v14 : 0;
  v17 = *((unsigned int *)a2 + 19);
  if ( (v17 & 8) == 0 && (*((_DWORD *)a2 + 18) & 0x20000) != 0 )
  {
    if ( a4 )
    {
      LOBYTE(v13) = ((v17 & 2) == 0) & ~*((_BYTE *)a4 + 32);
      if ( (_BYTE)v13 )
      {
        if ( !*((_QWORD *)a2 + 30) )
        {
          if ( (*((_DWORD *)a2 + 17) & 0x8000000) == 0 )
          {
            WdLogSingleEntry1(1LL, 1539LL);
            v75 = 0LL;
            v74 = 0LL;
            v73 = 0LL;
            Timeout = (PLARGE_INTEGER)1539;
            DxgkLogInternalTriageEvent(v37, 0x40000LL);
          }
          if ( !v16 )
            goto LABEL_21;
          VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
        }
      }
    }
  }
  if ( v16 && (**((_DWORD **)a2 + 66) & 0x8000000) != 0 )
  {
    if ( !a4 )
      goto LABEL_23;
    LOBYTE(v13) = ((*((_BYTE *)a2 + 76) & 2) == 0) & ~*((_BYTE *)a4 + 32);
    if ( (_BYTE)v13
      && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1)) >= 0 )
    {
      if ( (int)VIDMM_SEGMENT::LockAllocationBackingStore(this, a2) < 0 )
        VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
      else
        *((_DWORD *)a2 + 19) |= 2u;
    }
  }
LABEL_21:
  if ( a4 && (*((_BYTE *)a4 + 32) & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v13, v17, v14, v15);
    memset(&v87, 0, 40);
    v19 = 3;
    if ( v16 )
    {
      if ( *((_BYTE *)a2 + 265) )
      {
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
        v38 = *((_QWORD *)a2 + 30);
        v39 = *(void (__fastcall **)(__int64, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *, union _LARGE_INTEGER *, struct _MDL *, struct VIDMM_SEGMENT *))(*(_QWORD *)v38 + 120LL);
        MDLForRange = VidMmGetMDLForRange(a2, *((_QWORD *)a2 + 31), *((_QWORD *)a2 + 32));
        v39(v38, a2, *((_QWORD *)a2 + 31), *((_QWORD *)a2 + 32), MDLForRange, v73, v74, v75);
        LOBYTE(v41) = 1;
        (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, __int64))(**((_QWORD **)a2 + 30) + 104LL))(
          *((_QWORD *)a2 + 30),
          a2,
          v41);
      }
      *(_QWORD *)&v87.PhysicalAdapterIndex = a2;
      *(_QWORD *)&v87.VprIndex = this;
      v87.CurrentStartOffset = *((_QWORD *)a2 + 16);
      LODWORD(v87.CurrentSize) = 0;
      v20 = VIDMM_MEMORY_SEGMENT::RotateCopyCallback;
      v19 = 2;
    }
    else
    {
      v20 = 0LL;
    }
    KeStackAttachProcess(**((PRKPROCESS **)a4 + 1), &ApcState);
    if ( !a5 || (v21 = 3, !*((_BYTE *)a2 + 80)) )
      v21 = 1;
    v22 = VIDMM_GLOBAL::Rotate(
            *((_QWORD *)this + 1),
            *(_QWORD *)(*((_QWORD *)a4 + 1) + 24LL),
            *((_QWORD *)a4 + 3),
            v19,
            0LL,
            0LL,
            v20,
            &v87,
            v21,
            a2);
    if ( v22 == -1073741558 )
    {
      *((_DWORD *)a2 + 17) |= 0x200000u;
    }
    else if ( v22 < 0 )
    {
      WdLogSingleEntry5(0LL, 270LL, 4LL, v19, v22, 0LL);
    }
    *((_BYTE *)a4 + 32) &= ~1u;
    KeUnstackDetachProcess(&ApcState);
    goto LABEL_29;
  }
LABEL_23:
  if ( v16 )
  {
    if ( (int)VIDMM_MEMORY_SEGMENT::TransferMemory(
                this,
                a2,
                DXGK_MEMORY_TRANSFER_LOCAL_TO_SYSTEM,
                *((struct VIDMM_SEGMENT **)a2 + 15),
                *(union _LARGE_INTEGER *)((char *)a2 + 128),
                &v76,
                0LL) < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v43, v42, v44, v45);
      if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v43, (__int64)&EventPerformanceWarning, v44, 2);
      v46 = 0;
      if ( (**((_DWORD **)a2 + 66) & 8) == 0 && a4 )
      {
        KeStackAttachProcess(**((PRKPROCESS **)a4 + 1), &ApcState);
        v46 = 1;
      }
      v80 = v46;
      v47 = Use64KbPagesForTransfer(a2, *((struct VIDMM_SEGMENT **)a2 + 15));
      v48 = *((_QWORD *)a2 + 1);
      v49 = v47 != 0 ? 0x10000 : 4096;
      LODWORD(v79) = v47 != 0 ? 0x10000 : 4096;
      v50 = v48 >> 12;
      v51 = v48 >> 16;
      if ( !v47 )
        v51 = (unsigned int)v50;
      v83 = v51;
      v81 = *(union _LARGE_INTEGER *)((char *)a2 + 128);
      v52 = 0;
      while ( 1 )
      {
        v78 = v52;
        if ( v52 >= (unsigned int)v51 )
          break;
        v53 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
        v54 = v49 * v52;
        Size = (unsigned int)v49;
        VIDMM_GLOBAL::MemoryTransfer(
          v53,
          a2,
          v49,
          (unsigned int)v49 * v52,
          this,
          &v81,
          0LL,
          0LL,
          0LL,
          *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL),
          0);
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
        v81.QuadPart += Size;
        v82 = 0LL;
        v55 = VidMmMapViewOfAllocation(a4, (struct _VIDMM_LOCAL_ALLOC *)v54, Size, &v82, 0);
        if ( v55 )
        {
          memmove(v55, *((const void **)this + 32), Size);
          VidMmUnmapViewOfAllocation(a4, v82);
        }
        else
        {
          *((_DWORD *)a2 + 17) |= 0x200000u;
        }
        v52 = v78 + 1;
        LODWORD(v51) = v83;
        v49 = (unsigned int)v79;
      }
      if ( v46 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v13, v17, v14, v15);
    if ( (*((_DWORD *)a2 + 17) & 0x100) == 0 )
      VIDMM_GLOBAL::DiscardAllocation(*((ADAPTER_RENDER ***)this + 1), a2);
  }
  if ( (**((_DWORD **)a2 + 66) & 0x20000) != 0 && *((_QWORD *)a2 + 17) )
  {
    memset(&v87, 0, sizeof(v87));
    v87.PhysicalAdapterIndex = *((_DWORD *)this + 95);
    v87.SegmentIndex = VIDMM_SEGMENT::DriverId(this);
    v56 = 1;
    if ( *((_DWORD *)this + 103) )
    {
      v56 = 0;
      v79 = 0LL;
      v83 = 0LL;
      v77[0] = 0;
      if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                           *((_QWORD *)this + 19),
                           *((_QWORD *)this + 52),
                           *((_QWORD *)this + 53),
                           0,
                           (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                           (__int64)this,
                           (__int64)&v79,
                           (__int64)&v83,
                           (__int64)v77) == -1073741823
        && v79 == *((_QWORD *)a2 + 16) )
      {
        v57 = *((_QWORD *)this + 53);
        v58 = *((_QWORD *)a2 + 17);
        v59 = *(_QWORD *)v58 + *(_QWORD *)(v58 + 8);
        if ( v59 >= v57 )
        {
LABEL_110:
          v59 = *((_QWORD *)this + 53);
        }
        else
        {
          while ( 1 )
          {
            v60 = *(_QWORD *)(v58 + 40);
            if ( v60 == *((_QWORD *)this + 19) + 72LL )
              break;
            v58 = v60 - 40;
            if ( *(_BYTE *)(v58 + 56) != 2 )
              break;
            v59 = *(_QWORD *)v58 + *(_QWORD *)(v58 + 8);
            if ( v59 >= v57 )
              goto LABEL_110;
          }
        }
        v61 = v59 & ~*((_QWORD *)this + 50);
        v79 = v61;
        if ( v61 > *((_QWORD *)this + 52) )
        {
          v87.CurrentStartOffset = *((_QWORD *)this + 52);
          v87.CurrentSize = *((_QWORD *)this + 54);
          v87.NewStartOffset = v61;
          v87.NewSize = v57 - v61;
          *((_QWORD *)this + 54) = v57 - v61;
          *((_QWORD *)this + 52) = v61;
          v56 = 1;
        }
      }
    }
    else
    {
      v87.CurrentStartOffset = *((_QWORD *)a2 + 16);
      v87.CurrentSize = ~*((_QWORD *)this + 50) & (*((_QWORD *)this + 50) + *((_QWORD *)a2 + 2));
    }
    if ( v56 )
    {
      v62 = operator new(104LL, 0x31356956u, 256LL);
      v63 = (_QWORD *)operator new(40LL, 0x38356956u, 256LL);
      v64 = v63;
      if ( v62 )
      {
        if ( v63 )
        {
          *(_QWORD *)(v62 + 16) = DeferredSetVprCallback;
          *(_QWORD *)(v62 + 32) = DeferredSetVprCompletionCallback;
          *(_DXGKARG_SETVIDEOPROTECTEDREGION *)(v62 + 56) = v87;
          *(_QWORD *)(v62 + 40) = *((_QWORD *)this + 1);
          *(_QWORD *)(v62 + 48) = v63;
          v63[2] = this;
          v63[3] = *((_QWORD *)a2 + 17);
          v63[4] = *((_QWORD *)a2 + 2);
          *(_QWORD *)(v62 + 24) = v62;
          VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1), 0LL);
          VIDMM_GLOBAL::FlushPagingBuffer(*((VIDMM_GLOBAL **)this + 1), 0, v65, v66);
          VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
            *((VIDMM_LINEAR_POOL **)this + 19),
            *((void **)a2 + 17),
            v87.CurrentStartOffset,
            v87.NewStartOffset);
          DXG_DEFERRED_WORK_QUEUE::QueueWorkItem(
            (DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1) + 41104LL),
            (struct DXG_DEFERRED_QUEUE_WORK_ITEM *)v62);
          *((_QWORD *)a2 + 17) = 0LL;
          if ( *((_DWORD *)a2 + 28) != 1 )
          {
            VIDMM_SEGMENT::DecrementBytesCommitted(this, **((struct VIDMM_PARTITION ***)a2 + 63), *((_QWORD *)a2 + 2));
            --*((_DWORD *)this + 80);
          }
          goto LABEL_29;
        }
        operator delete((void *)v62);
      }
      if ( v64 )
        operator delete(v64);
      if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1)
                                                                                            + 41104LL)) )
      {
        if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v67, (__int64)&EventPerformanceWarning, v68, 24);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41152LL), Executive, 0, 0, 0LL);
      }
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1), 0LL);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
      VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v87);
      if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
        McTemplateK0qqqxxp_EtwWriteTransfer(
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
          v69,
          v70,
          v87.PhysicalAdapterIndex,
          v87.SegmentIndex,
          v87.VprIndex,
          v87.NewStartOffset,
          v87.NewSize,
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
      if ( (int)ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                  *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2800LL),
                  &v87) < 0
        && g_IsInternalRelease )
      {
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      }
    }
  }
LABEL_29:
  *((_DWORD *)a2 + 17) &= ~0x8000000u;
  *(_WORD *)(*((_QWORD *)a2 + 66) + 6LL) = 0;
  *(_QWORD *)(*((_QWORD *)a2 + 66) + 32LL) = 0LL;
  *((_QWORD *)a2 + 15) = 0LL;
  if ( v76 )
    (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *))(**((_QWORD **)a2 + 30) + 88LL))(
      *((_QWORD *)a2 + 30),
      a2);
  v18 = *((_QWORD *)this + 1);
  _InterlockedOr(v71, 0);
  ++*(_QWORD *)(v18 + 40);
}
