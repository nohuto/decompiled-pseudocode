/*
 * XREFs of ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00C7D64
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006ECA0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001D90 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1C0017820 (__security_check_cookie.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C0022674 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C0024E80 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     McTemplateK0qqqxxp_EtwWriteTransfer @ 0x1C00284D4 (McTemplateK0qqqxxp_EtwWriteTransfer.c)
 *     ?SetVPRPaging@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0028634 (-SetVPRPaging@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C006118C (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C006D860 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C008992C (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00C6634 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00CE840 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 */

void __fastcall VIDMM_SEGMENT::ProcessPendingMoves(VIDMM_SEGMENT *this)
{
  __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  VIDMM_GLOBAL *v9; // rcx
  __int64 v10; // rax
  bool v11; // r14
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // r15
  int v15; // edi
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rdx
  UINT v23; // eax
  __int64 v24; // rcx
  SIZE_T v25; // rdx
  SIZE_T v26; // rax
  SIZE_T v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // rax
  _BYTE v35[8]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v36; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 v37; // [rsp+60h] [rbp-9h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v38; // [rsp+68h] [rbp-1h] BYREF

  if ( !*((_BYTE *)this + 472) )
    return;
  *((_BYTE *)this + 472) = 0;
  v35[0] = 0;
  v36 = 0LL;
  if ( *((_QWORD *)this + 54) )
    v2 = *((_QWORD *)this + 52);
  else
    v2 = *((_QWORD *)this + 6);
  v3 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
         *((_QWORD *)this + 19),
         0,
         v2,
         1,
         (__int64)VIDMM_SEGMENT::MoveOneResource,
         (__int64)this,
         0LL,
         (__int64)&v36,
         (__int64)v35);
  v6 = v3;
  if ( v3 < 0 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdWarning(v5, v4);
    v7[3] = v36;
    v7[4] = v6;
LABEL_28:
    v7[5] = v35[0];
    WdLogEvent5_WdWarning(v7);
    return;
  }
  if ( !*((_QWORD *)this + 54) )
    return;
  v8 = *((unsigned int *)this + 95);
  v9 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  v10 = *(_QWORD *)(*((_QWORD *)v9 + 3) + 2584LL);
  v11 = (*(_DWORD *)(v10 + 360 * v8 + 16) & 8) != 0;
  if ( (*(_DWORD *)(v10 + 360 * v8 + 16) & 8) != 0 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(v9, v8, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
    LOBYTE(v12) = 1;
    VIDMM_GLOBAL::SetVPRPaging(*((VIDMM_GLOBAL **)this + 1), v12, v13);
  }
  v14 = *((_QWORD *)this + 53);
  v15 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
          *((_QWORD *)this + 19),
          v2,
          v14,
          1,
          (__int64)VIDMM_SEGMENT::MoveOneResource,
          (__int64)this,
          0LL,
          (__int64)&v36,
          (__int64)v35);
  if ( v11 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95), 0, 0LL, 0LL, 0, 1);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
    VIDMM_GLOBAL::SetVPRPaging(*((VIDMM_GLOBAL **)this + 1), 0LL, v16);
  }
  v17 = *((_QWORD *)this + 19);
  v37 = 0LL;
  if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                       v17,
                       v2,
                       v14,
                       0,
                       (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                       (__int64)this,
                       (__int64)&v37,
                       (__int64)&v36,
                       (__int64)v35) != -1073741823 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v19, v18, v20);
    *(_QWORD *)(v34 + 24) = 6301LL;
    WdLogEvent5_WdAssertion(v34);
    goto LABEL_26;
  }
  v21 = *((_QWORD *)this + 52);
  v22 = v37 & ~*((_QWORD *)this + 50);
  v37 = v22;
  if ( v22 <= v21 )
  {
LABEL_26:
    if ( v15 >= 0 )
      return;
    v7 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v22);
    v7[3] = v36;
    v7[4] = v15;
    goto LABEL_28;
  }
  v38.PhysicalAdapterIndex = *((_DWORD *)this + 95);
  *(_QWORD *)&v38.VprIndex = 0LL;
  v23 = VIDMM_SEGMENT::DriverId(this);
  v24 = *((_QWORD *)this + 1);
  v38.SegmentIndex = v23;
  v38.CurrentSize = *((_QWORD *)this + 54);
  v26 = *((_QWORD *)this + 53) - v25;
  v38.CurrentStartOffset = v27;
  v38.NewSize = v26;
  *((_QWORD *)this + 54) = v26;
  v38.NewStartOffset = v25;
  *((_QWORD *)this + 52) = v25;
  if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(v24 + 41104)) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, &EventPerformanceWarning, v30, 24);
    KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41152LL), Executive, 0, 0, 0LL);
  }
  VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1), v28, v30);
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
  VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v38);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0qqqxxp_EtwWriteTransfer(
      *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
      v31,
      v32,
      v38.PhysicalAdapterIndex,
      v38.SegmentIndex,
      v38.VprIndex,
      v38.NewStartOffset,
      v38.NewSize,
      *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
  v15 = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
          *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2704LL),
          &v38);
  if ( v15 < 0 )
  {
    if ( g_IsInternalRelease )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v22);
      v33[3] = 270LL;
      v33[4] = 9LL;
      v33[5] = 0LL;
      v33[6] = 0LL;
      v33[7] = 0LL;
      WdLogEvent5_WdCriticalError(v33);
    }
    goto LABEL_26;
  }
}
