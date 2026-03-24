/*
 * XREFs of ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0064208
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0064660 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00B3860 (-SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001618 (--3@YAXPEAX@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001D90 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002230 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0017820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0018C00 (memmove.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C0022674 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0pqqt_EtwWriteTransfer @ 0x1C0024AC8 (McTemplateK0pqqt_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C0024E80 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x1C0028414 (-QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z.c)
 *     McTemplateK0qqqxxp_EtwWriteTransfer @ 0x1C00284D4 (McTemplateK0qqqxxp_EtwWriteTransfer.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C006118C (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C00633B0 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0063778 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C0064188 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00651C4 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0065AD4 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0065AFC (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006802C (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1C0073CCC (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00750FC (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0075AE8 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C008992C (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C008A33C (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C008AF24 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C008BAFC (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRE.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C008BE38 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C008C818 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C008D408 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008DE60 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00B2E54 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B379C (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00C5D88 (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00C6634 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00CE840 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1C00CEE74 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::TransferToSystem(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3,
        PRKPROCESS **a4,
        bool a5)
{
  VIDMM_GLOBAL *v9; // rcx
  int *v10; // rdx
  int v11; // eax
  char v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  char v16; // bl
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // rax
  __int64 *v24; // r12
  NTSTATUS VirtualMemory; // ebx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // r13d
  unsigned int v35; // r12d
  __int64 v36; // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v38; // r8
  __int64 (__fastcall *v39)(struct _MDL *, struct _MDL *, void *); // rbx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rbx
  _QWORD *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  int v47; // r12d
  unsigned __int8 v48; // al
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  unsigned int i; // r13d
  unsigned int v54; // ebx
  char *v55; // rax
  char v56; // bl
  unsigned __int64 v57; // r8
  __int64 v58; // rcx
  unsigned __int64 v59; // rdx
  __int64 v60; // rcx
  SIZE_T v61; // rcx
  char *v62; // rbx
  _QWORD *v63; // rax
  _QWORD *v64; // r15
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // rcx
  _QWORD *v71; // rax
  signed __int32 v72[8]; // [rsp+0h] [rbp-188h] BYREF
  ULONG AllocationType[2]; // [rsp+20h] [rbp-168h]
  ULONG Protect[2]; // [rsp+28h] [rbp-160h]
  struct _MDL *v75; // [rsp+30h] [rbp-158h]
  bool v76; // [rsp+60h] [rbp-128h] BYREF
  _BYTE v77[7]; // [rsp+61h] [rbp-127h] BYREF
  SIZE_T v78; // [rsp+68h] [rbp-120h] BYREF
  int v79; // [rsp+70h] [rbp-118h]
  union _LARGE_INTEGER v80; // [rsp+78h] [rbp-110h] BYREF
  void *v81; // [rsp+80h] [rbp-108h] BYREF
  unsigned __int64 v82; // [rsp+88h] [rbp-100h] BYREF
  void *v83; // [rsp+90h] [rbp-F8h] BYREF
  size_t Size; // [rsp+98h] [rbp-F0h]
  PVOID BaseAddress[4]; // [rsp+A0h] [rbp-E8h] BYREF
  __int128 v86; // [rsp+C0h] [rbp-C8h] BYREF
  __int128 v87; // [rsp+D0h] [rbp-B8h]
  __int64 v88; // [rsp+E0h] [rbp-A8h]
  _DXGKARG_SETVIDEOPROTECTEDREGION v89; // [rsp+E8h] [rbp-A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+118h] [rbp-70h] BYREF

  BaseAddress[2] = this;
  BaseAddress[3] = a2;
  BaseAddress[1] = a4;
  memset(&ApcState, 0, sizeof(ApcState));
  v76 = 0;
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 1), a2, 0);
  if ( *(_QWORD *)(*((_QWORD *)this + 1) + 41024LL) )
  {
    v19 = VIDMM_SEGMENT::DriverId(this);
    VIDMM_GLOBAL::RecordPageMappingHistory(v22, v19, v20, v21, 4, a2, v75);
  }
  v9 = (VIDMM_GLOBAL *)*((unsigned int *)a2 + 19);
  if ( ((unsigned __int16)v9 & 0x100) != 0 || (*((_DWORD *)a2 + 20) & 0x400) != 0 )
    a3 = 0;
  if ( ((unsigned int)v9 & 0x8000000) != 0 )
    VIDMM_GLOBAL::NotifyContextAllocationEviction(v9, a2);
  v10 = (int *)*((_QWORD *)a2 + 64);
  v11 = *v10;
  if ( (*v10 & 0x10000) != 0 )
  {
    VIDMM_GLOBAL::NotifyResidency(*((VIDMM_GLOBAL **)this + 1), a2, 0);
    v10 = (int *)*((_QWORD *)a2 + 64);
    v11 = *v10;
  }
  if ( (v11 & 0x20000) != 0 && (*((_DWORD *)this + 20) & 0x40000) == 0 )
  {
    *((_DWORD *)a2 + 19) |= 0x100000u;
    v11 = *v10;
  }
  if ( (v11 & 0x20000000) == 0 && (unsigned __int8)PsIsProcessCommitRelinquished(*a4[1]) )
    *((_DWORD *)a2 + 19) |= 0x100000u;
  v12 = 0;
  if ( (*((_DWORD *)a2 + 19) & 0x100000) == 0 )
    v12 = a3;
  if ( VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 1)) )
  {
    v23 = WdLogNewEntry5_WdEvent(v14, v13);
    *(_QWORD *)(v23 + 24) = a2;
    WdLogEvent5_WdEvent(v23);
    v12 = 0;
  }
  if ( (VIDMM_GLOBAL::_Config & 8) == 0 && (*((_DWORD *)a2 + 21) & 8) != 0 )
    *((_BYTE *)a2 + 90) = 1;
  if ( v12 && (*((_DWORD *)a2 + 21) & 8) != 0 && !*((_BYTE *)a2 + 90) && a4 )
  {
    KeStackAttachProcess(*a4[1], &ApcState);
    v83 = 0LL;
    v24 = (__int64 *)((char *)a2 + 8);
    BaseAddress[0] = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)a4, 0LL, *((_QWORD *)a2 + 1), &v83, 1);
    if ( BaseAddress[0] )
    {
      VirtualMemory = ZwAllocateVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        BaseAddress,
                        0LL,
                        (PSIZE_T)a2 + 1,
                        0x1000000u,
                        4u);
      VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)a4, v83);
      if ( VirtualMemory < 0 )
      {
        *((_BYTE *)a2 + 90) = 1;
        if ( bTracingEnabled )
        {
          v30 = (unsigned __int64)*v24 >> 12;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v75) = 0;
            Protect[0] = v30;
            AllocationType[0] = 0;
            McTemplateK0pqqt_EtwWriteTransfer(
              v30,
              &EventUnreset,
              v26,
              a2,
              *(_QWORD *)AllocationType,
              *(_QWORD *)Protect,
              v75);
          }
        }
        v31 = *v24;
        v32 = *((_QWORD *)this + 1);
        ++*(_DWORD *)(v32 + 7432);
        *(_QWORD *)(v32 + 7440) += v31;
      }
      else
      {
        if ( bTracingEnabled )
        {
          v27 = (unsigned __int64)*v24 >> 12;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v75) = 1;
            Protect[0] = v27;
            AllocationType[0] = 0;
            McTemplateK0pqqt_EtwWriteTransfer(
              v27,
              &EventUnreset,
              v26,
              a2,
              *(_QWORD *)AllocationType,
              *(_QWORD *)Protect,
              v75);
          }
        }
        v28 = *v24;
        v29 = *((_QWORD *)this + 1);
        ++*(_DWORD *)(v29 + 7416);
        *(_QWORD *)(v29 + 7424) += v28;
      }
    }
    KeUnstackDetachProcess(&ApcState);
  }
  v16 = *((_BYTE *)a2 + 90) != 0 ? v12 : 0;
  v17 = *((unsigned int *)a2 + 21);
  if ( (v17 & 8) == 0 && (*((_DWORD *)a2 + 20) & 0x20000) != 0 )
  {
    if ( a4 )
    {
      LOBYTE(v14) = ((v17 & 2) == 0) & ~*((_BYTE *)a4 + 32);
      if ( (_BYTE)v14 )
      {
        if ( !*((_QWORD *)a2 + 32) )
        {
          if ( (*((_DWORD *)a2 + 19) & 0x4000000) == 0 )
          {
            v33 = WdLogNewEntry5_WdAssertion(v14, v17, v15);
            *(_QWORD *)(v33 + 24) = 1522LL;
            WdLogEvent5_WdAssertion(v33);
          }
          if ( !v16 )
            goto LABEL_25;
          VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
        }
      }
    }
  }
  if ( v16 && (**((_DWORD **)a2 + 64) & 0x8000000) != 0 )
  {
    if ( !a4 )
      goto LABEL_27;
    LOBYTE(v14) = ((*((_BYTE *)a2 + 84) & 2) == 0) & ~*((_BYTE *)a4 + 32);
    if ( (_BYTE)v14
      && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1)) >= 0 )
    {
      if ( (int)VIDMM_SEGMENT::LockAllocationBackingStore(this, a2) < 0 )
        VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
      else
        *((_DWORD *)a2 + 21) |= 2u;
    }
  }
LABEL_25:
  if ( a4 && ((_BYTE)a4[4] & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v14);
    v86 = 0LL;
    v87 = 0LL;
    v88 = 0LL;
    v34 = 3;
    v35 = 3;
    if ( v16 )
    {
      if ( *((_BYTE *)a2 + 281) )
      {
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
        v36 = **((_QWORD **)a2 + 32);
        MDLForRange = VidMmGetMDLForRange(a2, *((_QWORD *)a2 + 33), *((_QWORD *)a2 + 34));
        (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))(v36 + 120))(
          *((_QWORD *)a2 + 32),
          a2,
          *((_QWORD *)a2 + 33),
          *((_QWORD *)a2 + 34),
          MDLForRange);
        LOBYTE(v38) = 1;
        (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, __int64))(**((_QWORD **)a2 + 32) + 104LL))(
          *((_QWORD *)a2 + 32),
          a2,
          v38);
      }
      *(_QWORD *)&v86 = a2;
      *((_QWORD *)&v86 + 1) = this;
      *(_QWORD *)&v87 = *((_QWORD *)a2 + 17);
      DWORD2(v87) = 0;
      v39 = VIDMM_MEMORY_SEGMENT::RotateCopyCallback;
      v35 = 2;
    }
    else
    {
      v39 = 0LL;
    }
    KeStackAttachProcess(*a4[1], &ApcState);
    if ( !a5 || (*((_DWORD *)a2 + 21) & 0x20) == 0 )
      v34 = 1;
    v40 = VIDMM_GLOBAL::Rotate(*((_QWORD *)this + 1), a4[1][3], a4[3], v35, 0LL, 0LL, v39, &v86, v34, a2);
    v43 = v40;
    if ( v40 == -1073741558 )
    {
      *((_DWORD *)a2 + 19) |= 0x100000u;
    }
    else if ( v40 < 0 )
    {
      v44 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v42, v41);
      v44[3] = 270LL;
      v44[4] = 4LL;
      v44[5] = v35;
      v44[6] = v43;
      v44[7] = 0LL;
      WdLogEvent5_WdCriticalError(v44);
    }
    *((_BYTE *)a4 + 32) &= ~1u;
    KeUnstackDetachProcess(&ApcState);
    goto LABEL_33;
  }
LABEL_27:
  if ( v16 )
  {
    if ( (int)VIDMM_MEMORY_SEGMENT::TransferMemory(
                this,
                a2,
                DXGK_MEMORY_TRANSFER_LOCAL_TO_SYSTEM,
                *((struct VIDMM_SEGMENT **)a2 + 16),
                *(union _LARGE_INTEGER *)((char *)a2 + 136),
                &v76,
                0LL) < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v45);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v45, &EventPerformanceWarning, v46, 2);
      v47 = 0;
      if ( (**((_DWORD **)a2 + 64) & 8) == 0 && a4 )
      {
        KeStackAttachProcess(*a4[1], &ApcState);
        v47 = 1;
      }
      v79 = v47;
      v48 = Use64KbPagesForTransfer(a2, *((struct VIDMM_SEGMENT **)a2 + 16));
      v49 = *((_QWORD *)a2 + 1);
      v50 = v48 != 0 ? 0x10000 : 4096;
      LODWORD(v78) = v48 != 0 ? 0x10000 : 4096;
      v51 = v49 >> 12;
      v52 = v49 >> 16;
      if ( !v48 )
        v52 = (unsigned int)v51;
      v82 = v52;
      v80 = *(union _LARGE_INTEGER *)((char *)a2 + 136);
      for ( i = 0; i < (unsigned int)v52; ++i )
      {
        v54 = i * v50;
        Size = (unsigned int)v50;
        VIDMM_GLOBAL::MemoryTransfer(
          *((VIDMM_GLOBAL **)this + 1),
          a2,
          v50,
          i * (unsigned int)v50,
          this,
          &v80,
          0LL,
          0LL,
          0LL,
          *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL),
          0);
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
        v80.QuadPart += Size;
        v81 = 0LL;
        v55 = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)a4, v54, Size, &v81, 0);
        if ( v55 )
        {
          memmove(v55, *((const void **)this + 32), Size);
          VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)a4, v81);
        }
        else
        {
          *((_DWORD *)a2 + 19) |= 0x100000u;
        }
        LODWORD(v52) = v82;
        v50 = (unsigned int)v78;
      }
      if ( v47 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v14);
    if ( (*((_DWORD *)a2 + 19) & 0x100) == 0 )
      VIDMM_GLOBAL::DiscardAllocation(*((VIDMM_GLOBAL **)this + 1), a2);
  }
  if ( (**((_DWORD **)a2 + 64) & 0x20000) != 0 && *((_QWORD *)a2 + 18) )
  {
    memset(&v89, 0, sizeof(v89));
    v89.PhysicalAdapterIndex = *((_DWORD *)this + 95);
    v89.SegmentIndex = VIDMM_SEGMENT::DriverId(this);
    v56 = 1;
    if ( *((_DWORD *)this + 103) )
    {
      v56 = 0;
      v78 = 0LL;
      v82 = 0LL;
      v77[0] = 0;
      if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                           *((_QWORD *)this + 19),
                           *((_QWORD *)this + 52),
                           *((_QWORD *)this + 53),
                           0,
                           (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                           (__int64)this,
                           (__int64)&v78,
                           (__int64)&v82,
                           (__int64)v77) == -1073741823
        && v78 == *((_QWORD *)a2 + 17) )
      {
        v57 = *((_QWORD *)this + 53);
        v58 = *((_QWORD *)a2 + 18);
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
        v78 = v61;
        if ( v61 > *((_QWORD *)this + 52) )
        {
          v89.CurrentStartOffset = *((_QWORD *)this + 52);
          v89.CurrentSize = *((_QWORD *)this + 54);
          v89.NewStartOffset = v61;
          v89.NewSize = v57 - v61;
          *((_QWORD *)this + 54) = v57 - v61;
          *((_QWORD *)this + 52) = v61;
          v56 = 1;
        }
      }
    }
    else
    {
      v89.CurrentStartOffset = *((_QWORD *)a2 + 17);
      v89.CurrentSize = ~*((_QWORD *)this + 50) & (*((_QWORD *)this + 50) + *((_QWORD *)a2 + 2));
    }
    if ( v56 )
    {
      v62 = (char *)operator new[](0x68uLL, 0x31356956u, PagedPool);
      v63 = operator new[](0x28uLL, 0x38356956u, PagedPool);
      v64 = v63;
      if ( v62 )
      {
        if ( v63 )
        {
          memset(v62, 0, 0x68uLL);
          *((_QWORD *)v62 + 2) = DeferredSetVprCallback;
          *((_QWORD *)v62 + 4) = DeferredSetVprCompletionCallback;
          *(_DXGKARG_SETVIDEOPROTECTEDREGION *)(v62 + 56) = v89;
          *((_QWORD *)v62 + 5) = *((_QWORD *)this + 1);
          *((_QWORD *)v62 + 6) = v64;
          v64[2] = this;
          v64[3] = *((_QWORD *)a2 + 18);
          v64[4] = *((_QWORD *)a2 + 2);
          *((_QWORD *)v62 + 3) = v62;
          VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1));
          VIDMM_GLOBAL::FlushPagingBuffer(*((VIDMM_GLOBAL **)this + 1), 0, 0LL, 0LL);
          VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
            *((VIDMM_LINEAR_POOL **)this + 19),
            *((void **)a2 + 18),
            v89.CurrentStartOffset,
            v89.NewStartOffset);
          DXG_DEFERRED_WORK_QUEUE::QueueWorkItem(
            (DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1) + 41104LL),
            (struct DXG_DEFERRED_QUEUE_WORK_ITEM *)v62);
          *((_QWORD *)a2 + 18) = 0LL;
          if ( *((_DWORD *)a2 + 30) != 1 )
          {
            VIDMM_SEGMENT::DecrementBytesCommitted(this, **((struct VIDMM_PARTITION ***)a2 + 62), *((_QWORD *)a2 + 2));
            --*((_DWORD *)this + 80);
          }
          goto LABEL_33;
        }
        operator delete(v62);
      }
      if ( v64 )
        operator delete(v64);
      if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1)
                                                                                            + 41104LL)) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v65, &EventPerformanceWarning, v66, 24);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41152LL), Executive, 0, 0, 0LL);
      }
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1));
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
      VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v89);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqxxp_EtwWriteTransfer(
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
          v67,
          v68,
          v89.PhysicalAdapterIndex,
          v89.SegmentIndex,
          v89.VprIndex,
          v89.NewStartOffset,
          v89.NewSize,
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
      if ( (int)ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                  *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2704LL),
                  &v89) < 0
        && g_IsInternalRelease )
      {
        v71 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v70, v69);
        v71[3] = 270LL;
        v71[4] = 9LL;
        v71[5] = 0LL;
        v71[6] = 0LL;
        v71[7] = 0LL;
        WdLogEvent5_WdCriticalError(v71);
      }
    }
  }
LABEL_33:
  *((_DWORD *)a2 + 19) &= ~0x4000000u;
  *(_WORD *)(*((_QWORD *)a2 + 64) + 6LL) = 0;
  *(_QWORD *)(*((_QWORD *)a2 + 64) + 32LL) = 0LL;
  *((_QWORD *)a2 + 16) = 0LL;
  if ( v76 )
    (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *))(**((_QWORD **)a2 + 32) + 88LL))(
      *((_QWORD *)a2 + 32),
      a2);
  v18 = *((_QWORD *)this + 1);
  _InterlockedOr(v72, 0);
  ++*(_QWORD *)(v18 + 40);
}
