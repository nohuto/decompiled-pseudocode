/*
 * XREFs of ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C00A0E24
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C00873F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00A0970 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C00A0A9C (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00EC1C0 (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1C00A0F44 (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 *     ?MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z @ 0x1C00A101C (-MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z.c)
 */

void __fastcall VIDMM_SEGMENT::MarkResourcesForEviction(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_POOL_BLOCK **a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  struct VIDMM_PARTITION **v8; // rdx
  unsigned __int64 v9; // r8
  struct _VIDMM_POOL_BLOCK *v10; // rcx
  VIDMM_SEGMENT *v11; // rax
  struct _VIDMM_POOL_BLOCK *v12; // rdx
  struct _VIDMM_POOL_BLOCK *v13; // rcx
  VIDMM_SEGMENT **v14; // rdx
  __int64 v15; // rcx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  if ( ((_DWORD)this[10] & 0x1000) == 0 )
    VIDMM_LINEAR_POOL::MarkBlockForEviction(this[19], a2[17], a3, a4);
  v8 = (struct VIDMM_PARTITION **)a2[63];
  v9 = (unsigned __int64)a2[2];
  *((_DWORD *)a2 + 28) = 1;
  VIDMM_SEGMENT::DecrementBytesCommitted((VIDMM_SEGMENT *)this, *v8, v9);
  --*((_DWORD *)this + 80);
  if ( ((_DWORD)this[10] & 0x1001) != 0 )
  {
    v10 = a2[64];
    if ( (!v10 || _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 11, 0xFFFFFFFF) == 1)
      && _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)a2[63] + 56LL), -(__int64)a2[2]) < (unsigned __int64)a2[2] )
    {
      WdLogSingleEntry1(1LL, 2220LL);
      DxgkLogInternalTriageEvent(v15, 0x40000LL);
    }
  }
  v11 = (VIDMM_SEGMENT *)(a2 + 50);
  v12 = a2[50];
  if ( *((struct _VIDMM_POOL_BLOCK ***)v12 + 1) != a2 + 50
    || (v13 = a2[51], *(VIDMM_SEGMENT **)v13 != v11)
    || (*(_QWORD *)v13 = v12,
        *((_QWORD *)v12 + 1) = v13,
        v14 = (VIDMM_SEGMENT **)this[23],
        *v14 != (VIDMM_SEGMENT *)(this + 22)) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v11 = this + 22;
  a2[51] = (struct _VIDMM_POOL_BLOCK *)v14;
  *v14 = v11;
  this[23] = v11;
}
