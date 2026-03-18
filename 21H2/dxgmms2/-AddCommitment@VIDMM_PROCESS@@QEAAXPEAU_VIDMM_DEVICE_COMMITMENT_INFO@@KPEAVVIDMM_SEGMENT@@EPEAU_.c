/*
 * XREFs of ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0087C88
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C00873F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00DD5B4 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C0014CF0 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     McTemplateK0xxpqhu_EtwWriteTransfer @ 0x1C002FE90 (McTemplateK0xxpqhu_EtwWriteTransfer.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C00A5584 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1C00DF780 (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 *     ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1C00EDBFC (-AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z.c)
 */

void __fastcall VIDMM_PROCESS::AddCommitment(
        DXGPROCESS **this,
        struct _VIDMM_DEVICE_COMMITMENT_INFO *a2,
        _QWORD *a3,
        struct VIDMM_SEGMENT ***a4,
        unsigned __int8 a5,
        struct _VIDMM_GLOBAL_ALLOC *a6)
{
  struct _VIDMM_DEVICE_COMMITMENT_INFO *v7; // r13
  __int64 v9; // rbx
  unsigned __int64 v10; // r14
  __int64 v11; // r12
  _QWORD *v12; // rcx
  __int64 v13; // rax
  unsigned __int8 v14; // bl
  struct VIDMM_SEGMENT *v15; // rdi
  __int64 *v16; // rdi
  struct VIDMM_PROCESS_BUDGET_STATE *v17; // rbx
  struct VIDMM_SEGMENT **v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  int PriorityClass; // eax
  char IsHighPriorityProcess; // al
  VIDMM_GLOBAL *v23; // r10

  v7 = a2;
  v9 = (unsigned int)a3;
  v10 = *((_QWORD *)a6 + 2);
  if ( g_IsInternalReleaseOrDbg )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v19[3] = this;
    v19[4] = v9;
    v19[5] = a4;
    v19[6] = a5;
    v19[7] = v10;
  }
  v11 = v9;
  v12 = (_QWORD *)*((_QWORD *)this[2] + v9);
  if ( v12 )
    v13 = v12[2] + 184LL * *((unsigned int *)a4 + 5);
  else
    v13 = 0LL;
  *(_QWORD *)(v13 + 16) += v10;
  v14 = 1;
  ++*(_DWORD *)(v13 + 56);
  if ( !a5 )
    goto LABEL_6;
  ++*(_DWORD *)(v13 + 8);
  a2 = (struct _VIDMM_DEVICE_COMMITMENT_INFO *)(v13 + 40);
  a3 = *(_QWORD **)(v13 + 48);
  v12 = (_QWORD *)((char *)v7 + 16);
  if ( *a3 != v13 + 40 )
    goto LABEL_20;
  *v12 = a2;
  *((_QWORD *)v7 + 3) = a3;
  *a3 = v12;
  *(_QWORD *)(v13 + 48) = v12;
  if ( *(_DWORD *)(v13 + 8) != 1 )
LABEL_6:
    v14 = 0;
  v15 = (struct VIDMM_SEGMENT *)(v13 + 24);
  if ( g_IsInternalReleaseOrDbg )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, a2, a3, a4);
    v20[3] = v15;
    v20[4] = a4;
    v20[5] = v14;
    v20[6] = v10;
  }
  if ( v14 )
  {
    v18 = a4[18];
    if ( *v18 == (struct VIDMM_SEGMENT *)(a4 + 17) )
    {
      *(_QWORD *)v15 = a4 + 17;
      *((_QWORD *)v15 + 1) = v18;
      *v18 = v15;
      a4[18] = (struct VIDMM_SEGMENT **)v15;
      goto LABEL_10;
    }
LABEL_20:
    __fastfail(3u);
  }
LABEL_10:
  v16 = (__int64 *)*((_QWORD *)this[2] + v11);
  v17 = (struct VIDMM_PROCESS_BUDGET_STATE *)(v16[6] + 296 * (*((_DWORD *)a6 + 17) & 0x3FLL));
  _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + *((int *)a4 + 119) + 25, v10);
  if ( (byte_1C006E941 & 0x10) != 0 )
    McTemplateK0xxpqhu_EtwWriteTransfer(v16[5], &EventVidMmProcessCommitmentChange, *v16);
  if ( ((_DWORD)a4[10] & 0x1001) != 0 && (*((_DWORD *)a6 + 17) & 0x400) == 0 )
  {
    PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a6 + 98));
    *((_QWORD *)v17 + PriorityClass + 32) += v10;
    if ( (byte_1C006E941 & 0x10) != 0 )
      McTemplateK0xxpqhu_EtwWriteTransfer(v16[5], &EventVidMmProcessDemotedCommitmentChange, *v16);
    if ( VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(v17) )
    {
      IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(this[4]);
      VIDMM_GLOBAL::AddToPromotionCandidateList(v23, *((_DWORD *)a6 + 17) & 0x3F, v17, IsHighPriorityProcess);
    }
  }
}
