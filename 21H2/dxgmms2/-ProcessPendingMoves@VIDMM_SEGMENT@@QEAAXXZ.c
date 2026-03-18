/*
 * XREFs of ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00EB918
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C00873F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C002CBB0 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C002EF60 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     McTemplateK0qqqxxp_EtwWriteTransfer @ 0x1C0032AA0 (McTemplateK0qqqxxp_EtwWriteTransfer.c)
 *     ?SetVPRPaging@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0032BC4 (-SetVPRPaging@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095CE0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00A2358 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00D6A68 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00EA1F0 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00EF1A0 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 */

void __fastcall VIDMM_SEGMENT::ProcessPendingMoves(VIDMM_SEGMENT *this)
{
  __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // r8
  __int64 v5; // rdx
  VIDMM_GLOBAL *v6; // rcx
  __int64 v7; // rax
  bool v8; // r14
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // r15
  int v12; // edi
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // r8
  UINT v16; // eax
  __int64 v17; // rcx
  SIZE_T v18; // rdx
  SIZE_T v19; // rax
  SIZE_T v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  _BYTE v27[8]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v28; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 v29; // [rsp+60h] [rbp-9h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v30; // [rsp+68h] [rbp-1h] BYREF

  if ( *((_BYTE *)this + 472) )
  {
    *((_BYTE *)this + 472) = 0;
    v27[0] = 0;
    v28 = 0LL;
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
           (__int64)&v28,
           (__int64)v27);
    if ( v3 < 0 )
    {
      v4 = v3;
LABEL_28:
      WdLogSingleEntry3(3LL, v28, v4, v27[0]);
      return;
    }
    if ( !*((_QWORD *)this + 54) )
      return;
    v5 = *((unsigned int *)this + 95);
    v6 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
    v7 = *(_QWORD *)(*((_QWORD *)v6 + 3) + 2680LL);
    v8 = (*(_DWORD *)(v7 + 344 * v5 + 16) & 8) != 0;
    if ( (*(_DWORD *)(v7 + 344 * v5 + 16) & 8) != 0 )
    {
      VIDMM_GLOBAL::FlushPagingBufferInternal(v6, v5, 0, 0LL, 0LL, 0, 0);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
      LOBYTE(v9) = 1;
      VIDMM_GLOBAL::SetVPRPaging(*((VIDMM_GLOBAL **)this + 1), v9, v10);
    }
    v11 = *((_QWORD *)this + 53);
    v12 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
            *((_QWORD *)this + 19),
            v2,
            v11,
            1,
            (__int64)VIDMM_SEGMENT::MoveOneResource,
            (__int64)this,
            0LL,
            (__int64)&v28,
            (__int64)v27);
    if ( v8 )
    {
      VIDMM_GLOBAL::FlushPagingBufferInternal(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95), 0, 0LL, 0LL, 0, 1);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
      VIDMM_GLOBAL::SetVPRPaging(*((VIDMM_GLOBAL **)this + 1), 0LL, v13);
    }
    v14 = *((_QWORD *)this + 19);
    v29 = 0LL;
    if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                         v14,
                         v2,
                         v11,
                         0,
                         (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                         (__int64)this,
                         (__int64)&v29,
                         (__int64)&v28,
                         (__int64)v27) != -1073741823 )
    {
      WdLogSingleEntry1(1LL, 6129LL);
      DxgkLogInternalTriageEvent(v26, 0x40000LL);
      goto LABEL_26;
    }
    v15 = *((_QWORD *)this + 52);
    v29 &= ~*((_QWORD *)this + 50);
    if ( v29 <= v15 )
      goto LABEL_26;
    v30.PhysicalAdapterIndex = *((_DWORD *)this + 95);
    *(_QWORD *)&v30.VprIndex = 0LL;
    v16 = VIDMM_SEGMENT::DriverId(this);
    v17 = *((_QWORD *)this + 1);
    v30.SegmentIndex = v16;
    v30.CurrentSize = *((_QWORD *)this + 54);
    v19 = *((_QWORD *)this + 53) - v18;
    v30.CurrentStartOffset = v20;
    v30.NewSize = v19;
    *((_QWORD *)this + 54) = v19;
    v30.NewStartOffset = v18;
    *((_QWORD *)this + 52) = v18;
    if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(v17 + 41104)) )
    {
      if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventPerformanceWarning, v22, 24);
      KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41152LL), Executive, 0, 0, 0LL);
    }
    VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1), 0LL, v22, v23);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
    VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v30);
    if ( bTracingEnabled )
    {
      if ( (byte_1C006E941 & 1) != 0 )
        McTemplateK0qqqxxp_EtwWriteTransfer(
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
          v24,
          v25,
          v30.PhysicalAdapterIndex,
          v30.SegmentIndex,
          v30.VprIndex,
          v30.NewStartOffset,
          v30.NewSize,
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
    }
    v12 = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2800LL),
            &v30);
    if ( v12 < 0 )
    {
      if ( !g_IsInternalRelease )
      {
LABEL_27:
        v4 = v12;
        goto LABEL_28;
      }
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
LABEL_26:
      if ( v12 >= 0 )
        return;
      goto LABEL_27;
    }
  }
}
