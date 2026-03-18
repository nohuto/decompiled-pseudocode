/*
 * XREFs of ?AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00C6F20
 * Callers:
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00C9CE4 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 * Callees:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C006EA40 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00CF670 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z@Z @ 0x1C00D04EC (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 */

__int64 __fastcall VIDMM_SEGMENT::AttemptToGrowVPRForAllocation(
        VIDMM_SEGMENT *this,
        __int64 a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        char a4,
        char a5)
{
  unsigned __int64 v5; // r13
  unsigned __int64 v7; // r12
  __int64 v9; // r15
  unsigned __int64 v10; // rsi
  int v11; // ebx
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r14
  __int64 result; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r14
  char v18; // r15
  __int64 v19; // r8
  __int64 v20; // rdx
  int (*v21)(VIDMM_SEGMENT *__hidden, struct _VIDMM_GLOBAL_ALLOC *, bool *, void *); // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  _QWORD v25[9]; // [rsp+60h] [rbp-48h] BYREF
  union _LARGE_INTEGER v26; // [rsp+B8h] [rbp+10h] BYREF
  char v27; // [rsp+C0h] [rbp+18h] BYREF
  char v28; // [rsp+C8h] [rbp+20h]

  v28 = a4;
  v5 = *((unsigned int *)a3 + 8);
  v7 = *((_QWORD *)a3 + 2);
  v9 = ~(v5 - 1);
  v10 = a2 & v9;
  if ( (a2 & (unsigned __int64)v9) < v7 || v10 - v7 <= *((_QWORD *)this + 48) )
  {
    return (unsigned int)-1073741801;
  }
  else
  {
    v11 = -1073741801;
    KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41152LL), Executive, 0, 0, 0LL);
    if ( !*((_QWORD *)this + 54) )
    {
      v12 = *((_QWORD *)this + 58);
      if ( v12 )
      {
        v13 = *((_QWORD *)this + 52);
        v14 = v13 - v12;
        result = VIDMM_LINEAR_POOL::Allocate(
                   *((VIDMM_LINEAR_POOL **)this + 19),
                   v12,
                   1LL,
                   0LL,
                   v13 - v12,
                   v13,
                   v28,
                   a5,
                   0LL,
                   &v26,
                   (void **)this + 57);
        v11 = result;
        if ( (int)result < 0 )
          return result;
        v10 = v14 & v9;
      }
    }
    v16 = v5;
    v17 = v9 & (v10 - v7) & ~*((_QWORD *)this + 50);
    v18 = a5;
    if ( v5 <= *((unsigned int *)this + 102) )
      v16 = *((unsigned int *)this + 102);
    if ( !(v7 % v16) )
      v11 = VIDMM_LINEAR_POOL::Allocate(
              *((VIDMM_LINEAR_POOL **)this + 19),
              v7,
              (unsigned int)v5,
              0LL,
              v17,
              v10,
              v28,
              a5,
              a3,
              (union _LARGE_INTEGER *)a3 + 26,
              (void **)a3 + 25);
    if ( v11 < 0 )
    {
      v19 = *((_QWORD *)this + 1);
      v20 = *(_QWORD *)(v19 + 24);
      if ( (*(_DWORD *)(360LL * *((unsigned int *)this + 95) + *(_QWORD *)(v20 + 2584) + 16) & 4) != 0 )
      {
        v25[1] = *((_QWORD *)this + 53);
        LOBYTE(v26.LowPart) = 0;
        v25[0] = v17;
        if ( !*(_BYTE *)(v20 + 2649)
          || (v21 = VIDMM_SEGMENT::ReserveOutsideRangeCB,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 624LL) + 144LL) != 1) )
        {
          v21 = VIDMM_SEGMENT::ReserveOutsideRangeNoDisplayingCB;
        }
        v11 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                *((_QWORD *)this + 19),
                v17,
                v10,
                0,
                (__int64)v21,
                (__int64)this,
                (__int64)v25,
                (__int64)&v27,
                (__int64)&v26);
        if ( v11 < 0
          || (v11 = VIDMM_LINEAR_POOL::Allocate(
                      *((VIDMM_LINEAR_POOL **)this + 19),
                      v7,
                      (unsigned int)v5,
                      0LL,
                      v17,
                      v10,
                      v28,
                      v18,
                      a3,
                      (union _LARGE_INTEGER *)a3 + 26,
                      (void **)a3 + 25),
              v11 < 0) )
        {
          v24 = WdLogNewEntry5_WdWarning(v23, v22);
          *(_QWORD *)(v24 + 24) = v11;
          WdLogEvent5_WdWarning(v24);
          VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(
            *((_QWORD *)this + 19),
            0LL,
            *((_QWORD *)this + 6),
            0LL);
        }
      }
    }
  }
  return (unsigned int)v11;
}
