/*
 * XREFs of ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C00CB360
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008EC90 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001098 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B74 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0001C48 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C0073D54 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1C008476C (-GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C00849CC (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 *     ?CalculateBudgetGroupTargetUsage@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C00CB160 (-CalculateBudgetGroupTargetUsage@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_BUDGET.c)
 */

void __fastcall VIDMM_GLOBAL::SetupBudgetState(VIDMM_GLOBAL *this, struct VIDMM_BUDGET_STATE *a2, unsigned int a3)
{
  int v4; // r12d
  __int64 v5; // rcx
  struct VIDMM_BUDGET_STATE *v6; // r8
  struct VIDMM_BUDGET_STATE *v7; // rbp
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rdx
  struct _RTL_BALANCED_NODE *v11; // rax
  _QWORD *Children; // rbx
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rsi
  _QWORD **v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  __int64 v19; // rbx
  char *v20; // rdi
  struct _KTHREAD *v21; // rdi
  __int64 v22; // r12
  _QWORD *v23; // rbx
  VIDMM_GLOBAL *v24; // rcx
  VIDMM_PROCESS *v25; // rax
  struct DXGPROCESS *v26; // rdx
  int *v27; // rbp
  __int64 v28; // rdx
  _QWORD *v29; // rax
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v30; // esi
  _QWORD *v31; // rbx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  int v33; // ebp
  __int64 v34; // rdi
  struct VIDMM_BUDGET_STATE *v35; // rsi
  __int64 v36; // rdx
  struct _RTL_BALANCED_NODE *v37; // rax
  _QWORD *i; // rbx
  _QWORD **v39; // rax
  _QWORD *v40; // rcx
  _QWORD *v41; // rcx
  struct VIDMM_PHYSICAL_ADAPTER *v42; // [rsp+20h] [rbp-68h]
  char v43[8]; // [rsp+28h] [rbp-60h] BYREF
  DXGPUSHLOCK *v44; // [rsp+30h] [rbp-58h]
  int v45; // [rsp+38h] [rbp-50h]
  struct VIDMM_BUDGET_STATE *v46; // [rsp+90h] [rbp+8h]
  __int64 v47; // [rsp+98h] [rbp+10h]
  __int64 v49; // [rsp+A8h] [rbp+20h]

  *(_DWORD *)a2 = a3;
  v4 = 0;
  v47 = a3;
  v5 = a3;
  v6 = (struct VIDMM_BUDGET_STATE *)(1584LL * a3);
  v46 = v6;
  v42 = (struct VIDMM_BUDGET_STATE *)((char *)v6 + *((_QWORD *)this + 5027));
  v7 = v6;
  v8 = ((*((_BYTE *)v42 + 437) & 8) != 0) + 1LL;
  v49 = v8;
  v9 = 0LL;
  do
  {
    v10 = *((_QWORD *)this + 5027);
    if ( (*((_BYTE *)v7 + v10 + 512) & 1) == 0 )
    {
      v19 = 3LL;
      v20 = (char *)v6 + 336 * v4 + v10;
      do
      {
        memset(v20 + 776, 0, 0x60uLL);
        --v19;
      }
      while ( v19 );
LABEL_21:
      v5 = v47;
      v6 = v46;
      goto LABEL_22;
    }
    v11 = VIDMM_PARTITION::_PartitionTree;
    Children = 0LL;
    while ( v11 )
    {
      Children = v11->Children;
      v11 = v11->Children[0];
    }
    if ( Children )
    {
      v13 = 336 * v5;
      do
      {
        v14 = 3LL;
        v15 = *(_QWORD *)(376LL * *(unsigned int *)(*((_QWORD *)this + 3) + 232LL) + Children[5] + 24);
        do
        {
          memset((void *)(v15 + v13 + 232), 0, 0x60uLL);
          --v14;
        }
        while ( v14 );
        v16 = (_QWORD **)Children[1];
        v17 = Children;
        if ( v16 )
        {
          v18 = *v16;
          for ( Children = (_QWORD *)Children[1]; v18; v18 = (_QWORD *)*v18 )
            Children = v18;
        }
        else
        {
          while ( 1 )
          {
            Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !Children || (_QWORD *)*Children == v17 )
              break;
            v17 = Children;
          }
        }
      }
      while ( Children );
      v8 = v49;
      goto LABEL_21;
    }
LABEL_22:
    ++v4;
    ++v9;
    v7 = (struct VIDMM_BUDGET_STATE *)((char *)v7 + 24);
  }
  while ( v9 < v8 );
  v21 = (struct _KTHREAD *)*((_QWORD *)this + 5136);
  if ( v21 != (VIDMM_GLOBAL *)((char *)this + 41088) )
  {
    v22 = 296 * v5;
    do
    {
      v23 = (_QWORD *)(v22 + *((_QWORD *)v21 + 3));
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v43, (struct _KTHREAD **)v21 + 42, 0);
      DXGPUSHLOCK::AcquireShared(v44);
      v23[23] = v23[17];
      v23[24] = v23[18];
      v45 = 1;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
      v23[24] += VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment((VIDMM_PROCESS_BUDGET_STATE *)v23);
      v25 = (VIDMM_PROCESS *)*((_QWORD *)v21 + 2);
      v26 = (struct DXGPROCESS *)*((_QWORD *)v25 + 4);
      if ( v26 && v25 != g_pVidMmSystemProcess )
      {
        v27 = (int *)((char *)v21 + 376);
        VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
          v24,
          v26,
          (struct _KTHREAD *)((char *)v21 + 376),
          (struct _KTHREAD *)((char *)v21 + 368));
        v28 = *v23;
        if ( *v23 )
        {
          if ( *(_QWORD **)(v28 + 8) != v23 || (v29 = (_QWORD *)v23[1], (_QWORD *)*v29 != v23) )
            __fastfail(3u);
          *v29 = v28;
          *(_QWORD *)(v28 + 8) = v29;
          *v23 = 0LL;
          v23[1] = 0LL;
        }
        v30 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
        v31 = v23 + 7;
        do
        {
          SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(
                                this,
                                a3,
                                v30,
                                *(struct VIDMM_PARTITION **)(*((_QWORD *)v21 + 2) + 288LL));
          *((_QWORD *)SegmentGroupState + *v27 + 29) += v31[16];
          if ( *v31 )
          {
            *((_QWORD *)SegmentGroupState + *v27 + 35) += *v31;
            ++*((_DWORD *)SegmentGroupState + *v27 + 76);
          }
          ++v30;
          ++v31;
        }
        while ( v30 < 2 );
        v8 = v49;
      }
      v21 = *(struct _KTHREAD **)v21;
    }
    while ( v21 != (VIDMM_GLOBAL *)((char *)this + 41088) );
  }
  v33 = 0;
  v34 = 0LL;
  v35 = v46;
  do
  {
    v36 = *((_QWORD *)this + 5027);
    if ( (*((_BYTE *)v35 + v36 + 512) & 1) != 0 )
    {
      v37 = VIDMM_PARTITION::_PartitionTree;
      i = 0LL;
      while ( v37 )
      {
        i = v37->Children;
        v37 = v37->Children[0];
      }
      if ( i )
      {
        do
        {
          VIDMM_GLOBAL::CalculateBudgetGroupTargetUsage(
            this,
            v42,
            v6,
            (struct VIDMM_SEGMENT_GROUP_STATE *)(336 * v47
                                               + *(_QWORD *)(376LL * *(unsigned int *)(*((_QWORD *)this + 3) + 232LL)
                                                           + i[5]
                                                           + 24)));
          v39 = (_QWORD **)i[1];
          v40 = i;
          if ( v39 )
          {
            v41 = *v39;
            for ( i = (_QWORD *)i[1]; v41; v41 = (_QWORD *)*v41 )
              i = v41;
          }
          else
          {
            while ( 1 )
            {
              i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !i || (_QWORD *)*i == v40 )
                break;
              v40 = i;
            }
          }
        }
        while ( i );
        v8 = v49;
      }
    }
    else
    {
      VIDMM_GLOBAL::CalculateBudgetGroupTargetUsage(
        this,
        v42,
        v6,
        (struct VIDMM_BUDGET_STATE *)((char *)v46 + 336 * v33 + v36 + 544));
    }
    ++v33;
    ++v34;
    v35 = (struct VIDMM_BUDGET_STATE *)((char *)v35 + 24);
  }
  while ( v34 < v8 );
}
