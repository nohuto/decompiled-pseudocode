/*
 * XREFs of ?BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02E5328
 * Callers:
 *     ?DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02E42BC (-DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007B74 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _lambda_06c7fb13e4115b68176da9e8404c9d66_::operator() @ 0x1C02E5170 (_lambda_06c7fb13e4115b68176da9e8404c9d66_--operator().c)
 *     _lambda_4058988e898109f6ccaece4530a28799_::operator() @ 0x1C02E51D4 (_lambda_4058988e898109f6ccaece4530a28799_--operator().c)
 *     _lambda_9913d0abb7c2ea8d45a858df1e180213_::operator() @ 0x1C02E5274 (_lambda_9913d0abb7c2ea8d45a858df1e180213_--operator().c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::BuildDynamicVideoPresentTargetChildRelations(
        DMMVIDEOPRESENTTARGETSET *this,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a5)
{
  unsigned int v5; // eax
  __int64 v8; // rbx
  __int64 v9; // rax
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rdx
  int v29; // r12d
  __int64 v30; // rcx
  struct DMMVIDEOPRESENTTARGET *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // edi
  _QWORD *v36; // rdi
  _QWORD *v37; // rbx
  int v38; // esi
  unsigned int v39; // esi
  unsigned int v40; // eax
  __int64 v41; // rax
  unsigned int v42; // ecx
  __int64 v43; // rdx
  unsigned int *v44; // r9
  int v45; // r8d
  __int64 v46; // rax
  unsigned int v47; // [rsp+28h] [rbp-41h] BYREF
  unsigned int v48; // [rsp+2Ch] [rbp-3Dh] BYREF
  unsigned int v49; // [rsp+30h] [rbp-39h] BYREF
  unsigned int *v50[3]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v51[5]; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v52[4]; // [rsp+78h] [rbp+Fh] BYREF
  char v53; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int *v54; // [rsp+E0h] [rbp+77h] BYREF

  v54 = a4;
  v5 = *a3;
  v47 = 0;
  v8 = (unsigned int)a2;
  v49 = v5;
  v48 = v5;
  if ( v5 < 2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v9);
  }
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, (unsigned int)v8);
  if ( !TargetById )
  {
    *(_DWORD *)a5 = 1;
    v15 = (_QWORD *)WdLogNewEntry5_WdAssertion(v12, v11);
    v15[3] = v8;
    v16 = *((_QWORD *)this + 11);
    v17 = *(_QWORD *)(v16 + 8);
    if ( !v17 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v14, v13);
      WdLogEvent5_WdAssertion(v18);
      v17 = *(_QWORD *)(v16 + 8);
    }
    v19 = *(_QWORD *)(v17 + 16);
    v15[6] = 1LL;
LABEL_7:
    v15[5] = -1073741811LL;
    v15[4] = v19;
    WdLogEvent5_WdAssertion(v15);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)TargetById + 59) )
  {
    *(_DWORD *)a5 = 5;
    v15 = (_QWORD *)WdLogNewEntry5_WdAssertion(v12, v11);
    v15[3] = v8;
    v23 = *((_QWORD *)this + 11);
    v24 = *(_QWORD *)(v23 + 8);
    if ( !v24 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v22, v21);
      WdLogEvent5_WdAssertion(v25);
      v24 = *(_QWORD *)(v23 + 8);
    }
    v19 = *(_QWORD *)(v24 + 16);
    v15[6] = 2LL;
    goto LABEL_7;
  }
  v51[0] = &v47;
  v51[1] = &v53;
  v51[2] = &v54;
  v51[3] = &v48;
  v51[4] = &v49;
  v50[0] = &v48;
  v50[1] = &v47;
  v50[2] = (unsigned int *)&v54;
  v52[0] = &v48;
  v52[1] = &v49;
  v52[2] = &v54;
  lambda_06c7fb13e4115b68176da9e8404c9d66_::operator()(v50, (unsigned int)v8 | 0x80000000);
  if ( v48 >= v49 )
  {
    v42 = v47;
  }
  else
  {
    do
    {
      v27 = lambda_4058988e898109f6ccaece4530a28799_::operator()((__int64)v52, v26);
      v28 = v27;
      LODWORD(v28) = v27 & 0x7FFFFFFF;
      v29 = v27;
      v31 = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, v28);
      if ( !v31 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v30, v26);
        WdLogEvent5_WdAssertion(v32);
      }
      if ( !*((_QWORD *)v31 + 59) && v29 < 0 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v30, v26);
        WdLogEvent5_WdAssertion(v33);
      }
      v34 = *((_QWORD *)v31 + 66);
      if ( v34 )
      {
        v35 = *(_DWORD *)(v34 + 24);
        if ( !lambda_9913d0abb7c2ea8d45a858df1e180213_::operator()((__int64)v51, v35) )
          lambda_06c7fb13e4115b68176da9e8404c9d66_::operator()(v50, v35);
      }
      v36 = (_QWORD *)((char *)v31 + 440);
      v37 = (_QWORD *)*((_QWORD *)v31 + 55);
      while ( v37 != v36 )
      {
        v38 = *((_DWORD *)v37 - 108);
        v37 = (_QWORD *)*v37;
        v39 = v38 | 0x80000000;
        if ( !lambda_9913d0abb7c2ea8d45a858df1e180213_::operator()((__int64)v51, v39) )
          lambda_06c7fb13e4115b68176da9e8404c9d66_::operator()(v50, v39);
      }
      v40 = v47;
      if ( v47 >= v48 )
      {
        v41 = WdLogNewEntry5_WdAssertion(v30, v26);
        WdLogEvent5_WdAssertion(v41);
        v40 = v47;
      }
      v54[v40] = v29;
      v42 = ++v47;
    }
    while ( v48 < v49 );
  }
  *a3 = 0;
  v43 = 0LL;
  if ( v42 )
  {
    v44 = v54;
    do
    {
      v45 = v44[v43];
      if ( v45 < 0 )
      {
        v46 = *a3;
        v44[v46] = v45 & 0x7FFFFFFF;
        v44 = v54;
        v42 = v47;
        *a3 = v46 + 1;
      }
      v43 = (unsigned int)(v43 + 1);
    }
    while ( (unsigned int)v43 < v42 );
  }
  return 0LL;
}
