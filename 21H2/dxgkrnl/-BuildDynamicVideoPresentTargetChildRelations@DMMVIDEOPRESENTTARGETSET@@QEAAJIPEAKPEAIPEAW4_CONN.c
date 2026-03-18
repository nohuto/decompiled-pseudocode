/*
 * XREFs of ?BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C039F7D8
 * Callers:
 *     ?DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C03A4580 (-DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _lambda_9913d0abb7c2ea8d45a858df1e180213_::operator() @ 0x1C039F6CC (_lambda_9913d0abb7c2ea8d45a858df1e180213_--operator().c)
 *     _lambda_ed419e8dc31e70bbfd3394c14ddbfc24_::operator() @ 0x1C039F780 (_lambda_ed419e8dc31e70bbfd3394c14ddbfc24_--operator().c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::BuildDynamicVideoPresentTargetChildRelations(
        DMMVIDEOPRESENTTARGETSET *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a5)
{
  unsigned int v5; // eax
  __int64 v8; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v13; // rdi
  __int64 v14; // r8
  unsigned int v15; // edx
  unsigned int v16; // r8d
  unsigned int *v17; // r9
  __int64 v18; // rax
  __int64 v19; // r8
  int v20; // r15d
  __int64 v21; // r10
  unsigned int v22; // eax
  struct DMMVIDEOPRESENTTARGET *v23; // rbx
  __int64 v24; // rax
  int v25; // edi
  _QWORD *v26; // rdi
  _QWORD *v27; // rbx
  int v28; // esi
  unsigned int v29; // esi
  unsigned int v30; // eax
  unsigned int v31; // ecx
  __int64 v32; // rdx
  unsigned int *v33; // r9
  int v34; // r8d
  __int64 v35; // rax
  unsigned int v36; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v37; // [rsp+34h] [rbp-4Ch] BYREF
  unsigned int v38; // [rsp+38h] [rbp-48h] BYREF
  unsigned int *v39[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v40[5]; // [rsp+58h] [rbp-28h] BYREF
  char v41; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int *v42; // [rsp+C8h] [rbp+48h] BYREF

  v42 = a4;
  v5 = *a3;
  v37 = 0;
  v8 = a2;
  v38 = v5;
  v36 = v5;
  if ( v5 < 2 )
    WdLogSingleEntry0(1LL);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, v8);
  if ( !TargetById )
  {
    *(_DWORD *)a5 = 1;
    v10 = *((_QWORD *)this + 11);
    v11 = *(_QWORD *)(v10 + 8);
    if ( !v11 )
    {
      WdLogSingleEntry0(1LL);
      v11 = *(_QWORD *)(v10 + 8);
    }
    WdLogSingleEntry4(1LL, v8, *(_QWORD *)(v11 + 16), -1073741811LL, 1LL);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)TargetById + 59) )
  {
    *(_DWORD *)a5 = 5;
    v13 = *((_QWORD *)this + 11);
    v14 = *(_QWORD *)(v13 + 8);
    if ( !v14 )
    {
      WdLogSingleEntry0(1LL);
      v14 = *(_QWORD *)(v13 + 8);
    }
    WdLogSingleEntry4(1LL, v8, *(_QWORD *)(v14 + 16), -1073741811LL, 2LL);
    return 3221225485LL;
  }
  v41 = 0;
  v40[0] = &v37;
  v40[1] = &v41;
  v40[2] = &v42;
  v40[3] = &v36;
  v40[4] = &v38;
  v39[0] = &v36;
  v39[1] = &v37;
  v39[2] = (unsigned int *)&v42;
  lambda_ed419e8dc31e70bbfd3394c14ddbfc24_::operator()(v39, v8 | 0x80000000);
  v15 = v36;
  v16 = v38;
  if ( v36 >= v38 )
  {
    v31 = v37;
  }
  else
  {
    do
    {
      v17 = v42;
      v18 = v16 - 1;
      v19 = v16 - 2;
      v20 = v42[v18];
      if ( (unsigned int)v19 >= v15 )
      {
        v21 = (unsigned int)(v19 + 1);
        while ( 1 )
        {
          v22 = v17[v19];
          v19 = (unsigned int)(v19 - 1);
          v17[v21] = v22;
          v21 = (unsigned int)(v21 - 1);
          v15 = v36;
          if ( (unsigned int)v19 < v36 )
            break;
          v17 = v42;
        }
      }
      v36 = v15 + 1;
      v23 = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, v20 & 0x7FFFFFFF);
      if ( !v23 )
        WdLogSingleEntry0(1LL);
      if ( !*((_QWORD *)v23 + 59) && v20 < 0 )
        WdLogSingleEntry0(1LL);
      v24 = *((_QWORD *)v23 + 66);
      if ( v24 )
      {
        v25 = *(_DWORD *)(v24 + 24);
        if ( !lambda_9913d0abb7c2ea8d45a858df1e180213_::operator()((__int64)v40, v25) )
          lambda_ed419e8dc31e70bbfd3394c14ddbfc24_::operator()(v39, v25);
      }
      v26 = (_QWORD *)((char *)v23 + 440);
      v27 = (_QWORD *)*((_QWORD *)v23 + 55);
      while ( v27 != v26 )
      {
        v28 = *((_DWORD *)v27 - 108);
        v27 = (_QWORD *)*v27;
        v29 = v28 | 0x80000000;
        if ( !lambda_9913d0abb7c2ea8d45a858df1e180213_::operator()((__int64)v40, v29) )
          lambda_ed419e8dc31e70bbfd3394c14ddbfc24_::operator()(v39, v29);
      }
      v30 = v37;
      if ( v37 >= v36 )
      {
        WdLogSingleEntry0(1LL);
        v30 = v37;
      }
      v42[v30] = v20;
      v15 = v36;
      v31 = v37 + 1;
      v16 = v38;
      ++v37;
    }
    while ( v36 < v38 );
  }
  *a3 = 0;
  v32 = 0LL;
  if ( v31 )
  {
    v33 = v42;
    do
    {
      v34 = v33[v32];
      if ( v34 < 0 )
      {
        v35 = *a3;
        v33[v35] = v34 & 0x7FFFFFFF;
        v33 = v42;
        v31 = v37;
        *a3 = v35 + 1;
      }
      v32 = (unsigned int)(v32 + 1);
    }
    while ( (unsigned int)v32 < v31 );
  }
  return 0LL;
}
