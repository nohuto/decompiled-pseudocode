/*
 * XREFs of ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C0083854
 * Callers:
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0083668 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006FFC0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?ReferenceAllocationForSubmission@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@E@Z @ 0x1C008395C (-ReferenceAllocationForSubmission@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@E@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C008A41C (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInFaultedAllocation(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        unsigned __int8 a3,
        bool *a4,
        __int64 ***a5)
{
  int v6; // ebx
  __int64 v9; // rsi
  __int64 *v10; // rax
  __int64 *v11; // rdx
  __int64 **v12; // rcx
  __int64 v13; // rcx
  __int64 *v14; // rax
  int inited; // eax
  __int64 v17; // rax

  v6 = 0;
  *a5 = 0LL;
  v9 = **a2;
  v10 = (__int64 *)(a2 + 7);
  v11 = a2[7];
  if ( (__int64 *)v11[1] != v10 || (v12 = (__int64 **)v10[1], *v12 != v10) )
    __fastfail(3u);
  *v12 = v11;
  v11[1] = (__int64)v12;
  v13 = 3LL;
  *v10 = 0LL;
  v14 = a2[12];
  *((_DWORD *)a2 + 7) &= 0xFFFFFFFC;
  a2[8] = 0LL;
  if ( *((_WORD *)v14 + 2) < 3u )
  {
    if ( (*(_DWORD *)(v9 + 76) & 0x100000) != 0 )
    {
      v6 = -1071775466;
    }
    else
    {
      v6 = VIDMM_GLOBAL::PageInOneAllocation(
             (__int64)this,
             a2,
             (**(_DWORD **)(v9 + 496) & 0x20000) != 0 ? 5 : 0,
             a3,
             a4,
             a5,
             0,
             -1LL);
      if ( v6 != -1071775466 )
        goto LABEL_6;
    }
    if ( (*(_DWORD *)(v9 + 76) & 0x8000000) == 0 )
      goto LABEL_12;
    inited = VIDMM_GLOBAL::InitContextAllocation(this, (struct VIDMM_ALLOC *)a2, 0, a4, (struct VIDMM_ALLOC **)a5);
    *(_DWORD *)(v9 + 76) &= ~0x100000u;
    v6 = inited;
LABEL_6:
    if ( v6 >= 0 )
    {
      VIDMM_GLOBAL::ReferenceAllocationForSubmission(
        (VIDMM_GLOBAL *)**a2,
        (struct VIDMM_ALLOC *)a2,
        (*(_DWORD *)(**a2 + 76) & 0x8000000) != 0);
      return (unsigned int)v6;
    }
LABEL_12:
    v17 = WdLogNewEntry5_WdWarning(v13, v11);
    *(_QWORD *)(v17 + 32) = v6;
    *(_QWORD *)(v17 + 24) = a2;
    WdLogEvent5_WdWarning(v17);
  }
  return (unsigned int)v6;
}
