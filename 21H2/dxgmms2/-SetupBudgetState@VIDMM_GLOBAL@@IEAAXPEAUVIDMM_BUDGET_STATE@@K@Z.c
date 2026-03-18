/*
 * XREFs of ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C00EE730
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00ABE70 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0014F50 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1C009D66C (-GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C009DD54 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00A208C (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?CalculateBudgetGroupTargetUsage@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C00EE53C (-CalculateBudgetGroupTargetUsage@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_BUDGET.c)
 */

void __fastcall VIDMM_GLOBAL::SetupBudgetState(VIDMM_GLOBAL *this, struct VIDMM_BUDGET_STATE *a2, unsigned int a3)
{
  int v4; // r14d
  __int64 v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rdx
  struct VIDMM_BUDGET_STATE *v9; // r8
  struct _RTL_BALANCED_NODE *v10; // rax
  _QWORD *Children; // rbx
  __int64 v12; // rdi
  __int64 v13; // rbp
  _QWORD **v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdi
  char *v19; // r14
  char *v20; // rdi
  _QWORD *v21; // rbx
  VIDMM_GLOBAL *v22; // rcx
  VIDMM_PROCESS *v23; // rax
  struct DXGPROCESS *v24; // rdx
  int *v25; // rbp
  __int64 v26; // rdx
  _QWORD *v27; // rax
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v28; // esi
  _QWORD *v29; // rbx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v31; // r12
  int v32; // ebp
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdx
  struct _RTL_BALANCED_NODE *v36; // rax
  _QWORD *v37; // rbx
  _QWORD **v38; // rcx
  _QWORD *v39; // rax
  _QWORD *i; // rcx
  _BYTE v41[8]; // [rsp+20h] [rbp-68h] BYREF
  DXGPUSHLOCK *v42; // [rsp+28h] [rbp-60h]
  int v43; // [rsp+30h] [rbp-58h]
  __int64 v44; // [rsp+90h] [rbp+8h]
  __int64 v45; // [rsp+98h] [rbp+10h]
  struct VIDMM_PHYSICAL_ADAPTER *v47; // [rsp+A8h] [rbp+20h]

  *(_DWORD *)a2 = a3;
  v4 = 0;
  v44 = a3;
  v45 = 1584LL * a3;
  v47 = (struct VIDMM_PHYSICAL_ADAPTER *)(v45 + *((_QWORD *)this + 5028));
  v6 = ((*((_BYTE *)v47 + 437) & 8) != 0) + 1LL;
  v7 = 0LL;
  do
  {
    v8 = *(unsigned int *)a2;
    v9 = (struct VIDMM_BUDGET_STATE *)*((_QWORD *)this + 5028);
    if ( (*((_BYTE *)v9 + 1584 * v8 + 24 * v7 + 512) & 1) != 0 )
    {
      v10 = VIDMM_PARTITION::_PartitionTree;
      Children = 0LL;
      while ( v10 )
      {
        Children = v10->Children;
        v10 = v10->Children[0];
      }
      while ( Children )
      {
        v12 = 3LL;
        v13 = *(_QWORD *)(376LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL) + Children[5] + 24)
            + 336LL * *(unsigned int *)a2;
        do
        {
          memset((void *)(v13 + 232), 0, 0x60uLL);
          --v12;
        }
        while ( v12 );
        v14 = (_QWORD **)Children[1];
        v15 = Children;
        if ( v14 )
        {
          v16 = *v14;
          for ( Children = (_QWORD *)Children[1]; v16; v16 = (_QWORD *)*v16 )
            Children = v16;
        }
        else
        {
          while ( 1 )
          {
            Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !Children || (_QWORD *)*Children == v15 )
              break;
            v15 = Children;
          }
        }
      }
    }
    else
    {
      v17 = 3LL;
      v18 = (__int64)v9 + 1584 * v8 + 336 * v4;
      do
      {
        memset((void *)(v18 + 776), 0, 0x60uLL);
        --v17;
      }
      while ( v17 );
    }
    ++v4;
    ++v7;
  }
  while ( v7 < v6 );
  v19 = (char *)this + 41088;
  v20 = (char *)*((_QWORD *)this + 5136);
  if ( v20 != (char *)this + 41088 )
  {
    do
    {
      v21 = (_QWORD *)(296 * v44 + *((_QWORD *)v20 + 3));
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v41, (struct _KTHREAD **)v20 + 42, 0);
      DXGPUSHLOCK::AcquireShared(v42);
      v21[23] = v21[17];
      v21[24] = v21[18];
      v43 = 1;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
      v21[24] += VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment((VIDMM_PROCESS_BUDGET_STATE *)v21);
      v23 = (VIDMM_PROCESS *)*((_QWORD *)v20 + 2);
      v24 = (struct DXGPROCESS *)*((_QWORD *)v23 + 4);
      if ( v24 && v23 != g_pVidMmSystemProcess )
      {
        v25 = (int *)(v20 + 376);
        VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
          v22,
          v24,
          (enum VIDMM_BUDGET_PRIORITY_BAND *)(v20 + 376),
          (enum VIDMM_BUDGET_VISIBILITY_STATE *)(v20 + 368));
        v26 = *v21;
        if ( *v21 )
        {
          if ( *(_QWORD **)(v26 + 8) != v21 || (v27 = (_QWORD *)v21[1], (_QWORD *)*v27 != v21) )
            __fastfail(3u);
          *v27 = v26;
          *(_QWORD *)(v26 + 8) = v27;
          *v21 = 0LL;
          v21[1] = 0LL;
        }
        v28 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
        v29 = v21 + 7;
        do
        {
          SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(
                                this,
                                a3,
                                v28,
                                *(struct VIDMM_PARTITION **)(*((_QWORD *)v20 + 2) + 288LL));
          *((_QWORD *)SegmentGroupState + *v25 + 29) += v29[16];
          if ( *v29 )
          {
            *((_QWORD *)SegmentGroupState + *v25 + 35) += *v29;
            ++*((_DWORD *)SegmentGroupState + *v25 + 76);
          }
          ++v28;
          ++v29;
        }
        while ( v28 < 2 );
        v19 = (char *)this + 41088;
      }
      v20 = *(char **)v20;
    }
    while ( v20 != v19 );
  }
  v31 = v45;
  v32 = 0;
  v33 = 0LL;
  v34 = v45;
  do
  {
    v35 = *((_QWORD *)this + 5028);
    if ( (*(_BYTE *)(v35 + v34 + 512) & 1) != 0 )
    {
      v36 = VIDMM_PARTITION::_PartitionTree;
      v37 = 0LL;
      while ( v36 )
      {
        v37 = v36->Children;
        v36 = v36->Children[0];
      }
      if ( v37 )
      {
        do
        {
          VIDMM_GLOBAL::CalculateBudgetGroupTargetUsage(
            this,
            v47,
            v9,
            (struct VIDMM_SEGMENT_GROUP_STATE *)(336 * v44
                                               + *(_QWORD *)(376LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL)
                                                           + v37[5]
                                                           + 24)));
          v38 = (_QWORD **)v37[1];
          v39 = v37;
          if ( v38 )
          {
            v37 = (_QWORD *)v37[1];
            for ( i = *v38; i; i = (_QWORD *)*i )
              v37 = i;
          }
          else
          {
            while ( 1 )
            {
              v37 = (_QWORD *)(v37[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !v37 || (_QWORD *)*v37 == v39 )
                break;
              v39 = v37;
            }
          }
        }
        while ( v37 );
        v31 = v45;
      }
    }
    else
    {
      VIDMM_GLOBAL::CalculateBudgetGroupTargetUsage(
        this,
        v47,
        v9,
        (struct VIDMM_SEGMENT_GROUP_STATE *)(v31 + v35 + 544 + 336LL * v32));
    }
    ++v32;
    ++v33;
    v34 += 24LL;
  }
  while ( v33 < v6 );
}
