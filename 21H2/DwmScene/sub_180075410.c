/*
 * XREFs of sub_180075410 @ 0x180075410
 * Callers:
 *     sub_18007CFC0 @ 0x18007CFC0 (sub_18007CFC0.c)
 * Callees:
 *     sub_180010A10 @ 0x180010A10 (sub_180010A10.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180010BEC @ 0x180010BEC (sub_180010BEC.c)
 *     sub_180075A70 @ 0x180075A70 (sub_180075A70.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180075410(__int64 *a1, char *a2, char *a3, char *a4)
{
  unsigned __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // rcx
  char *v10; // rsi
  __int64 v11; // rsi
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  _QWORD *v16; // r10
  __int64 v17; // r15
  _QWORD *v18; // rdx
  char *v19; // rcx
  char *v20; // r8
  char *v21; // rcx
  char *v22; // r8
  _QWORD *v23; // rdx
  _QWORD *v24; // r8
  char *v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // r13
  _QWORD *v28; // rcx
  char *i; // rsi
  volatile signed __int32 *v30; // rcx
  _QWORD *v31; // rcx
  signed __int64 v32; // r14
  __int64 v33; // rax
  char *v34; // rdx
  _QWORD *v35; // rcx
  char *v36; // r8
  char *v37; // r15
  volatile signed __int32 *v38; // rcx
  _QWORD *v39; // rcx
  signed __int64 v40; // r14
  __int64 v41; // rax
  char v42; // [rsp+20h] [rbp-78h]
  __int64 v43; // [rsp+40h] [rbp-58h]
  char *v44; // [rsp+48h] [rbp-50h]

  v44 = a4;
  v7 = (a4 - a3) >> 4;
  v8 = (__int64)&a2[-*a1] >> 4;
  if ( v7 == 1 && a2 == (char *)a1[1] )
  {
    v42 = 1;
  }
  else
  {
    v42 = 0;
    if ( !v7 )
      return;
  }
  v9 = a1[2];
  v10 = (char *)a1[1];
  if ( v7 <= (v9 - (__int64)v10) >> 4 )
  {
    v27 = 16 * v7;
    if ( v7 >= (v10 - a2) >> 4 )
    {
      v34 = &a2[v27];
      if ( a2 != v10 )
      {
        v35 = a2 + 8;
        v36 = (char *)(v34 - a2);
        do
        {
          *(_QWORD *)v34 = 0LL;
          *(_QWORD *)&v36[(_QWORD)v35] = 0LL;
          *(_QWORD *)v34 = *(v35 - 1);
          *(_QWORD *)&v36[(_QWORD)v35] = *v35;
          *(v35 - 1) = 0LL;
          *v35 = 0LL;
          v34 += 16;
          v35 += 2;
        }
        while ( v35 - 1 != (_QWORD *)v10 );
      }
      a1[1] = (__int64)v34;
      v37 = a2;
      if ( a2 != v10 )
      {
        do
        {
          v38 = (volatile signed __int32 *)*((_QWORD *)v37 + 1);
          if ( v38 && _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
          v37 += 16;
        }
        while ( v37 != v10 );
        a4 = v44;
      }
      if ( a3 != a4 )
      {
        v39 = a2 + 8;
        v40 = a3 - a2;
        do
        {
          *(v39 - 1) = 0LL;
          *v39 = 0LL;
          v41 = *(_QWORD *)((char *)v39 + v40);
          if ( v41 )
            _InterlockedIncrement((volatile signed __int32 *)(v41 + 12));
          *(v39 - 1) = *(_QWORD *)((char *)v39 + v40 - 8);
          *v39 = *(_QWORD *)((char *)v39 + v40);
          v39 += 2;
        }
        while ( (char *)v39 + v40 - 8 != a4 );
      }
    }
    else
    {
      v28 = (_QWORD *)a1[1];
      if ( &v10[-v27] != v10 )
      {
        do
        {
          *v28 = 0LL;
          v28[1] = 0LL;
          *v28 = v28[-2 * v7];
          v28[1] = v28[v27 / 0xFFFFFFFFFFFFFFF8uLL + 1];
          v28[-2 * v7] = 0LL;
          v28[v27 / 0xFFFFFFFFFFFFFFF8uLL + 1] = 0LL;
          v28 += 2;
        }
        while ( &v28[v27 / 0xFFFFFFFFFFFFFFF8uLL] != (_QWORD *)v10 );
      }
      a1[1] = (__int64)v28;
      sub_180075A70(a2, &v10[-v27], v10);
      for ( i = a2; i != &a2[v27]; i += 16 )
      {
        v30 = (volatile signed __int32 *)*((_QWORD *)i + 1);
        if ( v30 && _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
      }
      if ( a3 != v44 )
      {
        v31 = a2 + 8;
        v32 = a3 - a2;
        do
        {
          *(v31 - 1) = 0LL;
          *v31 = 0LL;
          v33 = *(_QWORD *)((char *)v31 + v32);
          if ( v33 )
            _InterlockedIncrement((volatile signed __int32 *)(v33 + 12));
          *(v31 - 1) = *(_QWORD *)((char *)v31 + v32 - 8);
          *v31 = *(_QWORD *)((char *)v31 + v32);
          v31 += 2;
        }
        while ( (char *)v31 + v32 - 8 != v44 );
      }
    }
  }
  else
  {
    v11 = (__int64)&v10[-*a1] >> 4;
    if ( v7 > 0xFFFFFFFFFFFFFFFLL - v11 )
      std::vector<void *>::_Xlen();
    v12 = v11 + v7;
    v43 = v11 + v7;
    v13 = (v9 - *a1) >> 4;
    v14 = v13 >> 1;
    if ( v13 <= 0xFFFFFFFFFFFFFFFLL - (v13 >> 1) )
    {
      v15 = v14 + v13;
      if ( v14 + v13 < v12 )
        v15 = v12;
    }
    else
    {
      v15 = v11 + v7;
    }
    v16 = sub_180010BEC((__int64)a1, v15);
    v17 = 2 * (v8 + v7);
    v18 = &v16[v17];
    if ( a3 != v44 )
    {
      v19 = a3 + 8;
      v20 = (char *)((char *)&v16[2 * v8] - a3);
      do
      {
        *(_QWORD *)&v19[(_QWORD)v20 - 8] = 0LL;
        *(_QWORD *)&v20[(_QWORD)v19] = 0LL;
        if ( *(_QWORD *)v19 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v19 + 12LL));
        *(_QWORD *)&v19[(_QWORD)v20 - 8] = *((_QWORD *)v19 - 1);
        *(_QWORD *)&v20[(_QWORD)v19] = *(_QWORD *)v19;
        v19 += 16;
      }
      while ( v19 - 8 != v44 );
    }
    v21 = (char *)*a1;
    if ( v42 )
    {
      v22 = (char *)a1[1];
      v23 = v16;
      while ( v21 != v22 )
      {
        *v23 = 0LL;
        v23[1] = 0LL;
        *v23 = *(_QWORD *)v21;
        v23[1] = *((_QWORD *)v21 + 1);
        *(_QWORD *)v21 = 0LL;
        *((_QWORD *)v21 + 1) = 0LL;
        v23 += 2;
        v21 += 16;
      }
    }
    else
    {
      v24 = v16;
      while ( v21 != a2 )
      {
        *v24 = 0LL;
        v24[1] = 0LL;
        *v24 = *(_QWORD *)v21;
        v24[1] = *((_QWORD *)v21 + 1);
        *(_QWORD *)v21 = 0LL;
        *((_QWORD *)v21 + 1) = 0LL;
        v24 += 2;
        v21 += 16;
      }
      v25 = (char *)a1[1];
      if ( a2 != v25 )
      {
        v26 = &a2[-(v17 * 8)] - (char *)v16;
        do
        {
          *v18 = 0LL;
          v18[1] = 0LL;
          *v18 = *(_QWORD *)((char *)v18 + v26);
          v18[1] = *(_QWORD *)((char *)v18 + v26 + 8);
          *(_QWORD *)((char *)v18 + v26) = 0LL;
          *(_QWORD *)((char *)v18 + v26 + 8) = 0LL;
          v18 += 2;
        }
        while ( (char *)v18 + v26 != v25 );
      }
    }
    sub_180010A10(a1, (__int64)v16, v43, v15);
  }
}
