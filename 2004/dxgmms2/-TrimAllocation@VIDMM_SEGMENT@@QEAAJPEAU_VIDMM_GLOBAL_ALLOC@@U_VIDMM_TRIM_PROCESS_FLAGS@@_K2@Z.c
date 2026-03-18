/*
 * XREFs of ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C00CAC28
 * Callers:
 *     ?TrimOfferList@VIDMM_SEGMENT@@QEAAJPEAU_LIST_ENTRY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C00CAD70 (-TrimOfferList@VIDMM_SEGMENT@@QEAAJPEAU_LIST_ENTRY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 * Callees:
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C005FF24 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z @ 0x1C0064B40 (-VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::TrimAllocation(
        VIDMM_GLOBAL **a1,
        __int64 a2,
        char a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  VIDMM_GLOBAL::MarkGlobalAllocation(a1[1], (DXGFASTMUTEX **)a2, &v13, &v14);
  v9 = *(_QWORD *)(a2 + 128);
  *(_DWORD *)(a2 + 80) |= 0x40u;
  if ( (*(_DWORD *)(v9 + 80) & 0x1000) == 0 && a5 && v14 % a5 )
  {
    v10 = a5 - v14 % a5;
    if ( v13 < v10 )
      return 3221225473LL;
    v11 = v13 - v10;
  }
  else
  {
    v11 = v13;
  }
  if ( (a3 & 4) == 0
    && ((a3 & 1) != 0 && v11 >= a4
     || (a3 & 2) != 0 && (int)VIDMM_SEGMENT::VerifyCommitLimit((VIDMM_SEGMENT *)a1, 0LL, a4) >= 0) )
  {
    return 0LL;
  }
  return 3221225473LL;
}
