/*
 * XREFs of ?AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1C00CBD74
 * Callers:
 *     ?AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@W4VIDMM_BUDGET_PRIORITY_BAND@@_K@Z @ 0x1C00CB8FC (-AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STAT.c)
 *     ?AssignMaximumBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C00CBC64 (-AssignMaximumBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C0012C44 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     McTemplateK0xxpqhuuuuu_EtwWriteTransfer @ 0x1C0029534 (McTemplateK0xxpqhuuuuu_EtwWriteTransfer.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1C00BAD74 (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 *     ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1C00CB644 (-AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::AssignProcessBudget(
        VIDMM_GLOBAL *this,
        struct VIDMM_BUDGET_STATE *a2,
        struct VIDMM_SEGMENT_GROUP_STATE *a3,
        struct VIDMM_PROCESS_ADAPTER_INFO *a4,
        unsigned __int64 a5)
{
  __int64 v6; // rsi
  unsigned __int64 v8; // rax
  struct VIDMM_PROCESS_BUDGET_STATE *v10; // rdi
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  char IsHighPriorityProcess; // al

  v6 = *(int *)a3;
  v8 = a5;
  v10 = (struct VIDMM_PROCESS_BUDGET_STATE *)(*((_QWORD *)a4 + 6) + 296LL * *(unsigned int *)a2);
  v11 = *((_QWORD *)v10 + v6 + 5);
  if ( v11 && a5 >= v11 )
    v8 = *((_QWORD *)v10 + v6 + 5);
  v12 = *((_QWORD *)a3 + 4);
  v13 = *((_QWORD *)v10 + v6 + 3);
  if ( v8 < v12 )
    v12 = v8;
  *((_QWORD *)v10 + v6 + 3) = v12;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    McTemplateK0xxpqhuuuuu_EtwWriteTransfer(*((_QWORD *)a4 + 5), v13, (__int64)a3);
  *((_DWORD *)a4 + 101) = *((_DWORD *)a4 + 100);
  *((_DWORD *)a4 + 99) = *((_DWORD *)a4 + 98);
  if ( !(_DWORD)v6 && VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(v10) )
  {
    IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(*(DXGPROCESS **)(*((_QWORD *)a4 + 5) + 32LL));
    VIDMM_GLOBAL::AddToPromotionCandidateList(this, *(_DWORD *)a2, v10, IsHighPriorityProcess);
  }
}
