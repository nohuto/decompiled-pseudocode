/*
 * XREFs of ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00C7D40
 * Callers:
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B2B5C (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C8D78 (-MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_.c)
 * Callees:
 *     memset @ 0x1C0016DC0 (memset.c)
 *     ?SetVPRPaging@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0028614 (-SetVPRPaging@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067E30 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0083600 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B0598 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEAU_VIDMM_GLOBAL_ALLOC@@@ZXZ @ 0x1C00B13F4 (-GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEAU_VIDMM_GLOBAL_ALLOC@@@ZXZ.c)
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x1C00CF860 (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00CFC70 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z@Z @ 0x1C00D0AEC (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 */

__int64 __fastcall VIDMM_SEGMENT::DefragmentResourcesOverRange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  VIDMM_GLOBAL *v10; // rcx
  bool (__fastcall *MoveableResourceCallback)(struct _VIDMM_GLOBAL_ALLOC *); // rax
  VIDMM_LINEAR_POOL *v12; // rcx
  bool v14; // dl
  __int64 v15; // r11
  VIDMM_GLOBAL *v16; // r10
  __int64 v17; // rax
  bool v18; // si
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  unsigned __int64 v24; // r8
  __int64 v25; // rax
  _QWORD v26[16]; // [rsp+58h] [rbp-51h] BYREF

  VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(*(VIDMM_GLOBAL **)(a1 + 8));
  memset(v26, 0, 0x78uLL);
  v10 = *(VIDMM_GLOBAL **)(a1 + 8);
  v26[3] = VIDMM_SEGMENT::UpdatePendingResourceReserveCB;
  v26[0] = a2;
  v26[1] = a3;
  LODWORD(v26[2]) = a4;
  MoveableResourceCallback = VIDMM_GLOBAL::GetMoveableResourceCallback(v10);
  v12 = *(VIDMM_LINEAR_POOL **)(a1 + 152);
  LODWORD(v26[8]) |= 4u;
  v26[4] = MoveableResourceCallback;
  v26[5] = VIDMM_SEGMENT::IsNonOverlappingResourceCB;
  v26[6] = VIDMM_SEGMENT::IsDisplayingResourceCB;
  v26[7] = VIDMM_SEGMENT::GetAlignmentCB;
  VIDMM_LINEAR_POOL::DefragmentRange(v12, (struct VIDMM_DEFRAGMENT_ARGS *)v26);
  if ( !*(_BYTE *)(a1 + 472) )
    return 0LL;
  *(_BYTE *)(a1 + 472) = 0;
  v14 = a2 == *(_QWORD *)(a1 + 416) && a3 == *(_QWORD *)(a1 + 424);
  v15 = *(unsigned int *)(a1 + 380);
  v16 = *(VIDMM_GLOBAL **)(a1 + 8);
  v17 = *(_QWORD *)(*((_QWORD *)v16 + 3) + 2560LL);
  v18 = (*(_DWORD *)(v17 + 360 * v15 + 16) & 8) != 0;
  if ( (*(_DWORD *)(v17 + 360 * v15 + 16) & 8) != 0 && v14 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(v16, v15, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 8), *(_DWORD *)(a1 + 380));
    LOBYTE(v19) = 1;
    VIDMM_GLOBAL::SetVPRPaging(*(VIDMM_GLOBAL **)(a1 + 8), v19, v20);
  }
  v23 = (int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
               *(_QWORD *)(a1 + 152),
               a2,
               a3,
               a4,
               (__int64)VIDMM_SEGMENT::MoveOneResource,
               a1,
               0LL,
               a6,
               a5);
  if ( v18 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(*(VIDMM_GLOBAL **)(a1 + 8), *(_DWORD *)(a1 + 380), 0, 0LL, 0LL, 0, 1);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 8), *(_DWORD *)(a1 + 380));
    VIDMM_GLOBAL::SetVPRPaging(*(VIDMM_GLOBAL **)(a1 + 8), 0LL, v24);
  }
  if ( (int)v23 < 0 )
  {
    v25 = WdLogNewEntry5_WdWarning(v22, v21);
    *(_QWORD *)(v25 + 24) = v23;
    WdLogEvent5_WdWarning(v25);
    VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(*(_QWORD *)(a1 + 152), a2, a3, a4);
  }
  return (unsigned int)v23;
}
