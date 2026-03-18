/*
 * XREFs of ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00CF670
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C006D560 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1C00C5940 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1C00C5E78 (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 *     ?VerifyTransfer@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1C00C6C80 (-VerifyTransfer@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 *     ?AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00C6F20 (-AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00C7790 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00C8B64 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00CAA1C (-UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        __int64 (__fastcall *a5)(__int64, unsigned __int64, __int64, __int64),
        __int64 a6,
        __int64 a7,
        _QWORD *a8,
        __int64 a9)
{
  _QWORD *v12; // rbx
  unsigned int v13; // r8d
  _QWORD *v14; // rbp
  unsigned __int64 *v15; // rdi

  if ( a4 )
    v12 = *(_QWORD **)(a1 + 80);
  else
    v12 = *(_QWORD **)(a1 + 72);
  v13 = 0;
  v14 = (_QWORD *)(a1 + 72);
  while ( v12 != v14 )
  {
    v15 = v12 - 5;
    if ( a4 )
      v12 = (_QWORD *)v12[1];
    else
      v12 = (_QWORD *)*v12;
    if ( *v15 + v15[1] > a2 )
    {
      if ( *v15 < a3 )
      {
        if ( (unsigned __int8)(*((_BYTE *)v15 + 56) - 3) <= 1u )
        {
          v13 = a5(a6, v15[2], a9, a7);
          if ( (v13 & 0x80000000) != 0 )
          {
            *a8 = v15[2];
            return v13;
          }
        }
      }
      else if ( !a4 )
      {
        return v13;
      }
    }
    else if ( a4 )
    {
      return v13;
    }
  }
  return v13;
}
