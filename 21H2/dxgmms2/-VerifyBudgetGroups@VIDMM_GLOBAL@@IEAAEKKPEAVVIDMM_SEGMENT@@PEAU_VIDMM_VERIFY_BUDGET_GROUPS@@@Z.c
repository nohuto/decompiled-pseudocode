/*
 * XREFs of ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C008EA7C
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008F230 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C00DA7C4 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::VerifyBudgetGroups(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *a4,
        struct _VIDMM_VERIFY_BUDGET_GROUPS *a5)
{
  __int64 v5; // rdi
  __int64 v8; // rbp
  unsigned int v9; // r11d
  unsigned int v10; // r10d
  unsigned int v11; // edx
  unsigned __int8 v12; // r9
  unsigned int v13; // edx
  unsigned __int8 v14; // cl
  int v15; // r10d
  int v16; // edx
  int v17; // r9d
  int v18; // r11d
  bool v20; // zf
  __int64 v21; // rcx

  v5 = *((_QWORD *)this + 5028);
  v8 = 1584LL * a2;
  v9 = a3;
  v10 = *(_DWORD *)(v5 + v8 + 20);
  v11 = v10;
  if ( (~*(_DWORD *)(v5 + v8 + 16) & a3) != 0 )
  {
    v14 = 0;
    v12 = 0;
  }
  else
  {
    if ( a3 )
    {
      while ( (v9 & 1) == 0 || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v11) + 80LL) & 0x80000) == 0 )
      {
        ++v11;
        v9 >>= 1;
        if ( !v9 )
          goto LABEL_7;
      }
      v12 = 1;
    }
    else
    {
LABEL_7:
      v12 = 0;
      if ( !a3 )
      {
LABEL_27:
        v14 = 0;
        goto LABEL_12;
      }
    }
    v13 = a3;
    while ( (v13 & 1) == 0 || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v10) + 80LL) & 0x100000) == 0 )
    {
      ++v10;
      v13 >>= 1;
      if ( !v13 )
        goto LABEL_27;
    }
    v14 = 1;
  }
LABEL_12:
  if ( a4 )
  {
    if ( (*((_DWORD *)a4 + 20) & 0x80000) != 0 )
    {
LABEL_14:
      v15 = 0;
      v16 = 2 * v14;
      goto LABEL_15;
    }
    v20 = (*((_DWORD *)a4 + 20) & 0x100000) == 0;
  }
  else
  {
    if ( v12 )
      goto LABEL_14;
    v20 = v14 == 0;
  }
  if ( v20 )
  {
    v16 = 3;
    v15 = 2;
    goto LABEL_23;
  }
  v15 = 1;
  v16 = v12 + 1;
LABEL_15:
  if ( v16 != 3 )
  {
    v17 = 0;
    v18 = 0;
    if ( (~*(_DWORD *)(v5 + 16) & a3) != 0 )
      goto LABEL_34;
    if ( a3 )
    {
      do
      {
        if ( (a3 & 1) != 0
          && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (unsigned int)(*(_DWORD *)(v5 + v8 + 20) + v17))
                        + 80LL) & 0x180000) == 0 )
        {
          v18 |= 1 << v17;
        }
        ++v17;
        a3 >>= 1;
      }
      while ( a3 );
      if ( v18 )
      {
LABEL_34:
        WdLogSingleEntry1(1LL, 12837LL);
        DxgkLogInternalTriageEvent(v21, 0x40000LL);
        return 0;
      }
    }
  }
LABEL_23:
  if ( a5 )
    *(_DWORD *)a5 = v15 | (16 * v16) | *(_DWORD *)a5 & 0xFFFFFF00;
  return 1;
}
