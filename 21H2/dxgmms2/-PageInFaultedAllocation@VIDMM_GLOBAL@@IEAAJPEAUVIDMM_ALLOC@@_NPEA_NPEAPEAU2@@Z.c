/*
 * XREFs of ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C00A2598
 * Callers:
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A23A0 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C00873F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?ReferenceAllocationForSubmission@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@E@Z @ 0x1C00A26AC (-ReferenceAllocationForSubmission@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@E@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C00A5ACC (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInFaultedAllocation(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        char a3,
        bool *a4,
        __int64 ***a5)
{
  int v6; // ebx
  bool *v7; // r15
  __int64 v9; // rbp
  __int64 *v10; // rax
  __int64 *v11; // rdx
  __int64 **v12; // rcx
  __int64 *v13; // rax
  int inited; // eax

  v6 = 0;
  v7 = a4;
  LOBYTE(a4) = a3;
  *a5 = 0LL;
  v9 = **a2;
  v10 = (__int64 *)(a2 + 7);
  v11 = a2[7];
  if ( (__int64 *)v11[1] != v10 || (v12 = (__int64 **)v10[1], *v12 != v10) )
    __fastfail(3u);
  *v12 = v11;
  v11[1] = (__int64)v12;
  *v10 = 0LL;
  v13 = a2[12];
  *((_DWORD *)a2 + 7) &= 0xFFFFFFFC;
  a2[8] = 0LL;
  if ( *((_WORD *)v13 + 2) < 3u )
  {
    if ( (*(_DWORD *)(v9 + 68) & 0x200000) != 0 )
    {
      v6 = -1071775466;
    }
    else
    {
      v6 = VIDMM_GLOBAL::PageInOneAllocation(
             (__int64)this,
             a2,
             (**(_DWORD **)(v9 + 528) & 0x20000) != 0 ? 5 : 0,
             (__int64)a4,
             v7,
             a5,
             0,
             -1LL);
      if ( v6 != -1071775466 )
        goto LABEL_6;
    }
    if ( (*(_DWORD *)(v9 + 68) & 0x10000000) == 0 )
      goto LABEL_12;
    inited = VIDMM_GLOBAL::InitContextAllocation(this, (struct VIDMM_ALLOC *)a2, 0, v7, (struct VIDMM_ALLOC **)a5);
    *(_DWORD *)(v9 + 68) &= ~0x200000u;
    v6 = inited;
LABEL_6:
    if ( v6 >= 0 )
    {
      VIDMM_GLOBAL::ReferenceAllocationForSubmission(
        (VIDMM_GLOBAL *)**a2,
        (struct VIDMM_ALLOC *)a2,
        (*(_DWORD *)(**a2 + 68) & 0x10000000) != 0);
      return (unsigned int)v6;
    }
LABEL_12:
    WdLogSingleEntry2(3LL, a2, v6);
  }
  return (unsigned int)v6;
}
