/*
 * XREFs of ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C0086880
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005D34C (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006BD00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C00B4B64 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA.c)
 * Callees:
 *     ?VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z @ 0x1C0086990 (-VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z.c)
 *     ?VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C00869EC (-VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::VerifyBudgetGroups(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *a4,
        struct _VIDMM_VERIFY_BUDGET_GROUPS *a5)
{
  unsigned __int8 v9; // r15
  unsigned __int8 v10; // al
  int v11; // ecx
  int v12; // edi
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rax

  v9 = VIDMM_GLOBAL::VerifySegmentSetAny(this, a2, a3, 0x80000u);
  v10 = VIDMM_GLOBAL::VerifySegmentSetAny(this, a2, a3, 0x100000u);
  if ( !a4 )
  {
    if ( v9 )
      goto LABEL_3;
    if ( v10 )
    {
      v12 = 1;
      goto LABEL_10;
    }
LABEL_13:
    v12 = 2;
    v13 = 3;
    goto LABEL_5;
  }
  v11 = *((_DWORD *)a4 + 20);
  if ( (v11 & 0x80000) != 0 )
  {
LABEL_3:
    v12 = 0;
    v13 = v10 != 0 ? 2 : 0;
    goto LABEL_4;
  }
  if ( (v11 & 0x100000) == 0 )
    goto LABEL_13;
  v12 = 1;
  if ( !v9 )
  {
LABEL_10:
    v13 = 1;
    goto LABEL_4;
  }
  v13 = 2;
LABEL_4:
  if ( !VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask(this, a2, a3, 0x180000u, 0LL) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = 12577LL;
    WdLogEvent5_WdAssertion(v18);
    return 0;
  }
LABEL_5:
  if ( a5 )
    *(_DWORD *)a5 = v12 | (16 * v13) | *(_DWORD *)a5 & 0xFFFFFF00;
  return 1;
}
