/*
 * XREFs of ?AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@W4VIDMM_BUDGET_PRIORITY_BAND@@_K@Z @ 0x1C00CAAD8
 * Callers:
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C00CA884 (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017820 (__security_check_cookie.c)
 *     ?AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1C00CAF50 (-AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@P.c)
 */

void __fastcall VIDMM_GLOBAL::AssignBudgetsWithinBand(
        VIDMM_GLOBAL *a1,
        struct VIDMM_BUDGET_STATE *a2,
        int *a3,
        int a4,
        unsigned __int64 a5)
{
  __int64 v5; // rsi
  unsigned int v7; // r13d
  unsigned __int64 v8; // rcx
  int *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdi
  int *v12; // r9
  int *v13; // r10
  __int64 v14; // r11
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned int *v19; // r14
  int *v20; // r10
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rtt
  __int64 v24; // r12
  _QWORD *v25; // rdx
  int **v26; // r11
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rdx
  int **v29; // rax
  int *v30; // rax
  int **v31; // rcx
  unsigned int *v32; // r10
  __int64 v33; // rdx
  __int64 v34; // r11
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 *v38; // rdx
  __int64 v39; // r10
  __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rax
  int *v43; // rdx
  int **v44; // rcx
  int *v45; // rax
  __int64 i; // rax
  unsigned __int64 v47; // rcx
  int *v48; // r9
  unsigned __int64 *v49; // rdx
  unsigned __int64 v50; // rcx
  int *v51; // rsi
  _QWORD *v52; // rdi
  VIDMM_GLOBAL *v53; // r14
  unsigned __int64 v54; // [rsp+30h] [rbp-51h]
  unsigned __int64 v55; // [rsp+38h] [rbp-49h]
  unsigned int v57; // [rsp+48h] [rbp-39h]
  VIDMM_GLOBAL *v58; // [rsp+50h] [rbp-31h]
  unsigned __int64 v59[3]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v60; // [rsp+70h] [rbp-11h]
  __int64 v61; // [rsp+80h] [rbp-1h]

  v5 = a4;
  v58 = a1;
  v7 = a3[a4 + 79];
  if ( v7 )
  {
    v61 = 0LL;
    v11 = 4LL * a4;
    v12 = &a3[v11 + 34];
    v60 = 0LL;
    v13 = *(int **)v12;
    if ( *(int **)v12 != v12 )
    {
      v14 = *a3 + 37LL * *(unsigned int *)a2;
      do
      {
        v15 = *(v13 - 4);
        v16 = *((_QWORD *)v13 - 45);
        v13 = *(int **)v13;
        v17 = *((_QWORD *)&v60 + v15);
        if ( v17 <= *(_QWORD *)(v16 + 8 * v14 + 184) )
          v17 = *(_QWORD *)(v16 + 8 * v14 + 184);
        *((_QWORD *)&v60 + v15) = v17;
      }
      while ( v13 != v12 );
    }
    v18 = a5;
    v19 = dword_1C00451E8;
    v20 = *(int **)v12;
    v55 = a5;
    memset(v59, 255, sizeof(v59));
    v21 = 3LL;
    while ( 1 )
    {
      v23 = v18;
      v22 = v18 / v7;
      v24 = 0LL;
      v54 = v23 / v7;
      if ( v20 == v12 )
        break;
      do
      {
        v25 = v20;
        v26 = (int **)v20;
        v20 = *(int **)v20;
        v57 = dword_1C00451E8[*((int *)v25 - 4)];
        v27 = v54 * v57;
        v28 = *(_QWORD *)(*(v25 - 45) + 8 * (*a3 + 37LL * *(unsigned int *)a2) + 184);
        if ( v28 <= v27 )
        {
          v55 -= v28;
          v7 -= v57;
          v24 += v27 - v28;
          if ( *((int ***)v20 + 1) != v26 )
            goto LABEL_52;
          v29 = (int **)v26[1];
          if ( *v29 != (int *)v26 )
            goto LABEL_52;
          *v29 = v20;
          *((_QWORD *)v20 + 1) = v29;
          v30 = &a3[v11 + 46];
          v31 = (int **)*((_QWORD *)v30 + 1);
          if ( *v31 != v30 )
            goto LABEL_52;
          *v26 = v30;
          v26[1] = (int *)v31;
          *v31 = (int *)v26;
          *((_QWORD *)v30 + 1) = v26;
        }
      }
      while ( v20 != v12 );
      if ( !v24 )
      {
        v22 = v54;
        break;
      }
      v32 = dword_1C00451E8;
      v33 = 0LL;
      v34 = 3LL;
      do
      {
        v35 = *(_QWORD *)((char *)&v60 + v33 * 8);
        ++v33;
        v36 = *v32++;
        v37 = v54 * v36;
        if ( v35 >= v37 )
          v35 = v37;
        v59[v33 - 1] = v24 + v35;
        --v34;
      }
      while ( v34 );
      v20 = *(int **)v12;
      if ( *(int **)v12 == v12 )
        goto LABEL_40;
      v18 = v55;
    }
    v38 = v59;
    v39 = 3LL;
    do
    {
      v40 = *v19++;
      v41 = v22 * v40;
      v42 = *v38;
      if ( *v38 >= v41 )
        v42 = v41;
      *v38++ = v42;
      v22 = v54;
      --v39;
    }
    while ( v39 );
    if ( *(int **)v12 != v12 )
    {
      v43 = &a3[v11 + 46];
      v44 = (int **)*((_QWORD *)v43 + 1);
      if ( *(int **)(*(_QWORD *)v43 + 8LL) != v43
        || *v44 != v43
        || *(int **)(*(_QWORD *)v12 + 8LL) != v12
        || **((int ***)v12 + 1) != v12
        || (*v44 = v12,
            *((_QWORD *)v43 + 1) = *((_QWORD *)v12 + 1),
            **((_QWORD **)v12 + 1) = v43,
            *((_QWORD *)v12 + 1) = v44,
            v45 = *(int **)v12,
            *(int **)(*(_QWORD *)v12 + 8LL) != v12)
        || *v44 != v12 )
      {
LABEL_52:
        __fastfail(3u);
      }
      *v44 = v45;
      *((_QWORD *)v45 + 1) = v44;
      *((_QWORD *)v12 + 1) = v12;
      *(_QWORD *)v12 = v12;
    }
LABEL_40:
    for ( i = 1LL; i < 3; ++i )
    {
      v47 = v59[i - 1];
      if ( v47 > v59[i] )
        v59[i] = v47;
    }
    v48 = &a3[6 * v5 + 12];
    v49 = v59;
    do
    {
      v50 = *v49++;
      if ( v50 >= *((_QWORD *)a3 + 4) )
        v50 = *((_QWORD *)a3 + 4);
      *(_QWORD *)v48 = v50;
      v48 += 2;
      --v21;
    }
    while ( v21 );
    v51 = &a3[v11 + 46];
    v52 = *(_QWORD **)v51;
    if ( *(int **)v51 != v51 )
    {
      v53 = v58;
      do
      {
        VIDMM_GLOBAL::AssignProcessBudget(
          v53,
          a2,
          (struct VIDMM_SEGMENT_GROUP_STATE *)a3,
          (struct VIDMM_PROCESS_ADAPTER_INFO *)(v52 - 51),
          v59[*((int *)v52 - 4)]);
        v52 = (_QWORD *)*v52;
      }
      while ( v52 != (_QWORD *)v51 );
    }
  }
  else
  {
    v8 = a5;
    if ( a5 >= *((_QWORD *)a3 + 4) )
      v8 = *((_QWORD *)a3 + 4);
    v9 = &a3[6 * a4 + 12];
    v10 = 3LL;
    do
    {
      *(_QWORD *)v9 = v8;
      v9 += 2;
      --v10;
    }
    while ( v10 );
  }
}
