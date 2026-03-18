/*
 * XREFs of ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00ECA28
 * Callers:
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C009BD90 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 * Callees:
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C009C224 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00D6564 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEAU_VIDMM_GLOBAL_ALLOC@@@ZXZ @ 0x1C00D75E4 (-GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEAU_VIDMM_GLOBAL_ALLOC@@@ZXZ.c)
 *     ?AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00E9C8C (-AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1C00ED5DC (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x1C00EEDD8 (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z@Z @ 0x1C00EFF80 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveVPRResource(
        VIDMM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3,
        char a4)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v6; // r15
  __int64 v9; // rsi
  VIDMM_GLOBAL *v10; // rcx
  VIDMM_GLOBAL *v11; // rcx
  bool (__fastcall *v12)(struct _VIDMM_GLOBAL_ALLOC *); // rax
  VIDMM_LINEAR_POOL *v13; // rcx
  int v14; // eax
  __int64 v15; // r10
  VIDMM_GLOBAL *v16; // rcx
  VIDMM_GLOBAL *v17; // rcx
  bool (__fastcall *MoveableResourceCallback)(struct _VIDMM_GLOBAL_ALLOC *); // rax
  VIDMM_LINEAR_POOL *v19; // rcx
  int v20; // eax
  int v21; // eax
  unsigned __int8 v23[8]; // [rsp+20h] [rbp-99h]
  unsigned __int64 v24; // [rsp+28h] [rbp-91h]
  __int64 v25; // [rsp+30h] [rbp-89h]
  __int64 v26; // [rsp+38h] [rbp-81h]
  _QWORD v27[22]; // [rsp+60h] [rbp-59h] BYREF
  unsigned __int64 v28; // [rsp+120h] [rbp+67h]
  char v29; // [rsp+120h] [rbp+67h]
  unsigned int v30; // [rsp+128h] [rbp+6Fh]

  v4 = *((_QWORD *)this + 53);
  v6 = *((_QWORD *)this + 52);
  v28 = *((_QWORD *)a2 + 2);
  v30 = *((_DWORD *)a2 + 8);
  LODWORD(v9) = VIDMM_LINEAR_POOL::Allocate(
                  *((VIDMM_LINEAR_POOL **)this + 19),
                  v28,
                  v30,
                  0LL,
                  v6,
                  v4,
                  a3,
                  a4,
                  a2,
                  (union _LARGE_INTEGER *)a2 + 24,
                  (void **)a2 + 23);
  if ( (int)v9 < 0 )
  {
    VIDMM_SEGMENT::TrimOfferLists(this, 1LL, v28, *((unsigned int *)a2 + 8));
    LODWORD(v9) = VIDMM_LINEAR_POOL::Allocate(
                    *((VIDMM_LINEAR_POOL **)this + 19),
                    v28,
                    v30,
                    0LL,
                    v6,
                    v4,
                    a3,
                    a4,
                    a2,
                    (union _LARGE_INTEGER *)a2 + 24,
                    (void **)a2 + 23);
    if ( (int)v9 < 0 )
    {
      v9 = v28;
      if ( v28 + *((_QWORD *)this + 55) < (unsigned __int64)(unsigned int)dword_1C006E538
                                        * *((_QWORD *)this + 54)
                                        / (unsigned int)dword_1C006E53C )
      {
        v15 = v6;
        v16 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
        v29 = 0;
        if ( (*(_DWORD *)(344LL * *((unsigned int *)this + 95) + *(_QWORD *)(*((_QWORD *)v16 + 3) + 2680LL) + 16) & 4) == 0 )
          goto LABEL_11;
        VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(v16);
        memset(v27, 0, 0x78uLL);
        v17 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
        v27[3] = VIDMM_SEGMENT::UpdatePendingResourceReserveCB;
        v27[0] = v6;
        v27[1] = v4;
        LODWORD(v27[2]) = 1;
        MoveableResourceCallback = VIDMM_GLOBAL::GetMoveableResourceCallback(v17);
        v19 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 19);
        LODWORD(v27[8]) |= 4u;
        v27[4] = MoveableResourceCallback;
        v27[5] = VIDMM_SEGMENT::IsNonOverlappingResourceCB;
        v27[7] = VIDMM_SEGMENT::GetAlignmentCB;
        VIDMM_LINEAR_POOL::DefragmentRange(v19, (struct VIDMM_DEFRAGMENT_ARGS *)v27);
        v20 = VIDMM_LINEAR_POOL::Allocate(
                *((VIDMM_LINEAR_POOL **)this + 19),
                v9,
                v30,
                0LL,
                v6,
                v4,
                a3,
                a4,
                a2,
                (union _LARGE_INTEGER *)a2 + 24,
                (void **)a2 + 23);
        v15 = v27[9];
        LODWORD(v9) = v20;
        v29 = 1;
        if ( v20 < 0 )
        {
LABEL_11:
          v21 = VIDMM_SEGMENT::AttemptToGrowVPRForAllocation(this, v15, a2, a3, a4);
          v9 = v21;
          if ( v21 < 0 )
          {
            if ( v29 )
              goto LABEL_12;
          }
        }
      }
      else
      {
        LODWORD(v9) = VIDMM_SEGMENT::AttemptToGrowVPRForAllocation(this, *((_QWORD *)this + 52), a2, a3, a4);
        if ( (int)v9 < 0 )
        {
          v10 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
          if ( (*(_DWORD *)(344LL * *((unsigned int *)this + 95) + *(_QWORD *)(*((_QWORD *)v10 + 3) + 2680LL) + 16) & 4) != 0 )
          {
            VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(v10);
            memset(v27, 0, 0x78uLL);
            v11 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
            v27[3] = VIDMM_SEGMENT::UpdatePendingResourceReserveCB;
            v27[0] = v6;
            v27[1] = v4;
            LODWORD(v27[2]) = 1;
            v12 = VIDMM_GLOBAL::GetMoveableResourceCallback(v11);
            v13 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 19);
            LODWORD(v27[8]) |= 4u;
            v27[4] = v12;
            v27[5] = VIDMM_SEGMENT::IsNonOverlappingResourceCB;
            v27[7] = VIDMM_SEGMENT::GetAlignmentCB;
            VIDMM_LINEAR_POOL::DefragmentRange(v13, (struct VIDMM_DEFRAGMENT_ARGS *)v27);
            v14 = VIDMM_LINEAR_POOL::Allocate(
                    *((VIDMM_LINEAR_POOL **)this + 19),
                    v28,
                    v30,
                    0LL,
                    v6,
                    v4,
                    a3,
                    a4,
                    a2,
                    (union _LARGE_INTEGER *)a2 + 24,
                    (void **)a2 + 23);
            v9 = v14;
            if ( v14 < 0 )
            {
LABEL_12:
              WdLogSingleEntry1(3LL, v9);
              VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(
                *((_QWORD *)this + 19),
                v6,
                v4,
                1LL,
                *(_QWORD *)v23,
                v24,
                v25,
                v26);
            }
          }
        }
      }
    }
  }
  return (unsigned int)v9;
}
