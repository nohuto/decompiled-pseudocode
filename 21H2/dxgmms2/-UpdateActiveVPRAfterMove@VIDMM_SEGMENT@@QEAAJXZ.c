/*
 * XREFs of ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00C9C1C
 * Callers:
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B193C (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001D90 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1C0017820 (__security_check_cookie.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C0022674 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C0024E80 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     McTemplateK0qqqxxp_EtwWriteTransfer @ 0x1C00284D4 (McTemplateK0qqqxxp_EtwWriteTransfer.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C006118C (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C008992C (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00C6634 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00CE840 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 */

__int64 __fastcall VIDMM_SEGMENT::UpdateActiveVPRAfterMove(VIDMM_SEGMENT *this)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  int v4; // edi
  unsigned __int64 v5; // r8
  UINT v6; // eax
  UINT v7; // eax
  __int64 v8; // rcx
  SIZE_T v9; // rdx
  SIZE_T v10; // rax
  SIZE_T v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  _QWORD *v18; // rax
  _BYTE v20[8]; // [rsp+58h] [rbp+7h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp+Fh] BYREF
  _BYTE v22[8]; // [rsp+68h] [rbp+17h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v23; // [rsp+70h] [rbp+1Fh] BYREF

  v1 = *((_QWORD *)this + 53);
  v2 = *((_QWORD *)this + 52);
  v4 = 0;
  v21 = 0LL;
  v20[0] = 0;
  if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                       *((_QWORD *)this + 19),
                       v2,
                       v1,
                       0,
                       (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                       (__int64)this,
                       (__int64)&v21,
                       (__int64)v22,
                       (__int64)v20) == -1073741823 )
  {
    v5 = *((_QWORD *)this + 52);
    v21 = v5 & ~*((_QWORD *)this + 50);
    if ( v21 > v5 )
    {
      v6 = *((_DWORD *)this + 95);
      *(_QWORD *)&v23.VprIndex = 0LL;
      v23.PhysicalAdapterIndex = v6;
      v7 = VIDMM_SEGMENT::DriverId(this);
      v8 = *((_QWORD *)this + 1);
      v23.SegmentIndex = v7;
      v23.CurrentSize = *((_QWORD *)this + 54);
      v10 = *((_QWORD *)this + 53) - v9;
      v23.CurrentStartOffset = v11;
      v23.NewSize = v10;
      *((_QWORD *)this + 54) = v10;
      v23.NewStartOffset = v9;
      *((_QWORD *)this + 52) = v9;
      if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(v8 + 41104)) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v13, &EventPerformanceWarning, v14, 24);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41152LL), Executive, 0, 0, 0LL);
      }
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1), v12, v14);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
      VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v23);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqxxp_EtwWriteTransfer(
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
          v15,
          v16,
          v23.PhysicalAdapterIndex,
          v23.SegmentIndex,
          v23.VprIndex,
          v23.NewStartOffset,
          v23.NewSize,
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
      v4 = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
             *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2704LL),
             &v23);
      if ( v4 < 0 && g_IsInternalRelease )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(*(_QWORD *)&g_IsInternalRelease, v17);
        v18[5] = 0LL;
        v18[6] = 0LL;
        v18[7] = 0LL;
        v18[3] = 270LL;
        v18[4] = 9LL;
        WdLogEvent5_WdCriticalError(v18);
      }
    }
  }
  return (unsigned int)v4;
}
