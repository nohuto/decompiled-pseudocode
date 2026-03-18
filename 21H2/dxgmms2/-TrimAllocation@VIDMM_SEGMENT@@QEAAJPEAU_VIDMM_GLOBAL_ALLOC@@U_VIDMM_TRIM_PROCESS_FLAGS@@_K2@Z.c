/*
 * XREFs of ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C00ED37C
 * Callers:
 *     ?TrimOfferList@VIDMM_SEGMENT@@QEAAJPEAU_LIST_ENTRY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C00ED4C0 (-TrimOfferList@VIDMM_SEGMENT@@QEAAJPEAU_LIST_ENTRY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 * Callees:
 *     ?VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z @ 0x1C009C1A8 (-VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C009FC3C (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::TrimAllocation(
        VIDMM_GLOBAL **a1,
        __int64 a2,
        char a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  VIDMM_GLOBAL::MarkGlobalAllocation(a1[1], (struct _VIDMM_GLOBAL_ALLOC *)a2, &v14, &v15);
  v10 = *(_QWORD *)(a2 + 120);
  *(_DWORD *)(a2 + 72) |= 0x40u;
  if ( (*(_DWORD *)(v10 + 80) & 0x1000) == 0 && a5 && v15 % a5 )
  {
    v11 = a5 - v15 % a5;
    if ( v14 < v11 )
      return 3221225473LL;
    v12 = v14 - v11;
  }
  else
  {
    v12 = v14;
  }
  if ( (a3 & 4) == 0
    && ((a3 & 1) != 0 && v12 >= a4
     || (a3 & 2) != 0 && (int)VIDMM_SEGMENT::VerifyCommitLimit((VIDMM_SEGMENT *)a1, 0LL, a4, v9) >= 0) )
  {
    return 0LL;
  }
  return 3221225473LL;
}
