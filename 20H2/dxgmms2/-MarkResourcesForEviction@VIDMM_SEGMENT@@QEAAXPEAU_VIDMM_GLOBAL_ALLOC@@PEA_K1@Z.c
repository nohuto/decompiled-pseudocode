/*
 * XREFs of ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C006E62C
 * Callers:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006E060 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C006E190 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C0077E50 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00C944C (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1C006E74C (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 *     ?MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z @ 0x1C006E8BC (-MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z.c)
 */

void __fastcall VIDMM_SEGMENT::MarkResourcesForEviction(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_POOL_BLOCK **a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  struct VIDMM_PARTITION **v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // r8
  struct _VIDMM_POOL_BLOCK *v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  VIDMM_SEGMENT *v14; // rax
  struct _VIDMM_POOL_BLOCK *v15; // rdx
  struct _VIDMM_POOL_BLOCK *v16; // rcx
  VIDMM_SEGMENT **v17; // rdx
  __int64 v18; // rax

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( ((_DWORD)this[10] & 0x1000) == 0 )
    VIDMM_LINEAR_POOL::MarkBlockForEviction(this[19], a2[18], a3, a4);
  v8 = (struct VIDMM_PARTITION **)a2[60];
  v9 = (unsigned __int64)a2[2];
  *((_DWORD *)a2 + 30) = 1;
  VIDMM_SEGMENT::DecrementBytesCommitted((VIDMM_SEGMENT *)this, *v8, v9);
  --*((_DWORD *)this + 80);
  if ( ((_DWORD)this[10] & 0x1001) != 0 )
  {
    v11 = a2[61];
    if ( !v11 || _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 11, 0xFFFFFFFF) == 1 )
    {
      v12 = *(_QWORD *)a2[60];
      v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 56), -(__int64)a2[2]);
      if ( v13 < (unsigned __int64)a2[2] )
      {
        v18 = WdLogNewEntry5_WdAssertion(v12, v13, v10);
        *(_QWORD *)(v18 + 24) = 2209LL;
        WdLogEvent5_WdAssertion(v18);
      }
    }
  }
  v14 = (VIDMM_SEGMENT *)(a2 + 47);
  v15 = a2[47];
  if ( *((struct _VIDMM_POOL_BLOCK ***)v15 + 1) != a2 + 47
    || (v16 = a2[48], *(VIDMM_SEGMENT **)v16 != v14)
    || (*(_QWORD *)v16 = v15,
        *((_QWORD *)v15 + 1) = v16,
        v17 = (VIDMM_SEGMENT **)this[23],
        *v17 != (VIDMM_SEGMENT *)(this + 22)) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v14 = this + 22;
  a2[48] = (struct _VIDMM_POOL_BLOCK *)v17;
  *v17 = v14;
  this[23] = v14;
}
