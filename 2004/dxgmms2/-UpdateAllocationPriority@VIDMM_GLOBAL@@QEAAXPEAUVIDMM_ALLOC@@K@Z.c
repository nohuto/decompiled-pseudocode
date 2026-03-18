/*
 * XREFs of ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C00B5C20
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066220 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C00010C8 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00058A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000594C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0081458 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C0086ED8 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1C00BB318 (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 *     ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1C00CBC44 (-AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UpdateAllocationPriority(VIDMM_GLOBAL *this, __int64 **a2, int a3)
{
  __int64 v4; // rbx
  bool v5; // zf
  unsigned int v6; // ecx
  __int64 PriorityClass; // rsi
  unsigned int v8; // r8d
  int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rdx
  _QWORD *v12; // r10
  __int64 v13; // r15
  _QWORD *v14; // rsi
  _QWORD **v15; // rsi
  _QWORD *v16; // r11
  _DWORD *v17; // rcx
  VIDMM_PROCESS_BUDGET_STATE *v18; // rcx
  __int64 v19; // r9
  char IsHighPriorityProcess; // al
  struct VIDMM_PROCESS_BUDGET_STATE *v21; // r8

  v4 = **a2;
  v5 = *(_DWORD *)(v4 + 120) == 2;
  v6 = *(_DWORD *)(v4 + 368);
  *(_DWORD *)(v4 + 368) = a3;
  if ( v5 && (*(_DWORD *)(*(_QWORD *)(v4 + 128) + 80LL) & 0x1001) != 0 && (*(_DWORD *)(v4 + 76) & 0x400) == 0 )
  {
    PriorityClass = (int)VIDMM_SEGMENT::GetPriorityClass(v6);
    v9 = VIDMM_SEGMENT::GetPriorityClass(v8);
    v10 = v9;
    if ( (_DWORD)PriorityClass != v9 )
    {
      DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v4 + 312));
      v12 = *(_QWORD **)(v4 + 288);
      if ( v12 != (_QWORD *)(v4 + 288) )
      {
        v13 = PriorityClass;
        do
        {
          v14 = v12;
          v12 = (_QWORD *)*v12;
          v15 = (_QWORD **)(v14 - 2);
          v16 = *v15;
          while ( v16 != v15 )
          {
            v17 = v16 - 5;
            v16 = (_QWORD *)*v16;
            if ( (v17[7] & 3) == 2 )
            {
              v18 = (VIDMM_PROCESS_BUDGET_STATE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 8LL)
                                                                                     + 16LL)
                                                                         + 8LL
                                                                         * *(unsigned int *)(*((_QWORD *)this + 3)
                                                                                           + 232LL))
                                                             + 48LL)
                                                 + 296LL * (*(_DWORD *)(v4 + 76) & 0x3F));
              *((_QWORD *)v18 + v13 + 32) -= *(_QWORD *)(v4 + 16);
              *((_QWORD *)v18 + v10 + 32) += *(_QWORD *)(v4 + 16);
              if ( VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(v18) )
              {
                IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(*(DXGPROCESS **)(v19 + 32));
                VIDMM_GLOBAL::AddToPromotionCandidateList(this, *(_DWORD *)(v4 + 76) & 0x3F, v21, IsHighPriorityProcess);
              }
            }
          }
        }
        while ( v12 != (_QWORD *)(v4 + 288) );
      }
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v4 + 312), v11);
      VIDMM_GLOBAL::RequestNewBudget(this, 1);
    }
  }
}
