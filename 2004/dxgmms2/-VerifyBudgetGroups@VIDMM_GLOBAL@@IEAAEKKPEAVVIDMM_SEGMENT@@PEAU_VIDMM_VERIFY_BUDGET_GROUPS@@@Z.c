/*
 * XREFs of ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C00B7224
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066220 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C00B5D84 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA.c)
 * Callees:
 *     ?VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z @ 0x1C0086F10 (-VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z.c)
 *     ?VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C00B7380 (-VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::VerifyBudgetGroups(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *a4,
        struct _VIDMM_VERIFY_BUDGET_GROUPS *a5)
{
  unsigned __int8 v9; // bl
  unsigned __int8 v10; // al
  bool v11; // dl
  bool v12; // cl
  int v13; // edi
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax

  v9 = VIDMM_GLOBAL::VerifySegmentSetAny(this, a2, a3, 0x80000);
  v10 = VIDMM_GLOBAL::VerifySegmentSetAny(this, a2, a3, 0x100000);
  if ( a4 )
  {
    v11 = (*((_DWORD *)a4 + 20) & 0x80000) != 0;
    v12 = (*((_DWORD *)a4 + 20) & 0x100000) != 0;
  }
  else
  {
    if ( v9 )
    {
LABEL_10:
      v13 = 0;
      v14 = v10 != 0 ? 2 : 0;
      goto LABEL_11;
    }
    if ( v10 )
    {
LABEL_9:
      v13 = 1;
      v14 = (v9 != 0) + 1;
      goto LABEL_11;
    }
    v11 = 0;
    v12 = 0;
  }
  if ( v11 )
    goto LABEL_10;
  if ( v12 )
    goto LABEL_9;
  v13 = 2;
  v14 = 3;
LABEL_11:
  if ( v14 == 3 || VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask(this, a2, a3, 0x180000u, 0LL) )
  {
    if ( a5 )
      *(_DWORD *)a5 = v13 | (16 * v14) | *(_DWORD *)a5 & 0xFFFFFF00;
    return 1;
  }
  else
  {
    v18 = WdLogNewEntry5_WdAssertion(v16, v15, v17);
    *(_QWORD *)(v18 + 24) = 12490LL;
    WdLogEvent5_WdAssertion(v18);
    return 0;
  }
}
