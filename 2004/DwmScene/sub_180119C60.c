/*
 * XREFs of sub_180119C60 @ 0x180119C60
 * Callers:
 *     sub_18011ADC0 @ 0x18011ADC0 (sub_18011ADC0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_180031970 @ 0x180031970 (sub_180031970.c)
 *     sub_1800ADECC @ 0x1800ADECC (sub_1800ADECC.c)
 *     sub_18011A290 @ 0x18011A290 (sub_18011A290.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall sub_180119C60(_LocaleUpdate *a1, char *a2, char *a3, char *a4)
{
  unsigned __int64 v8; // r12
  unsigned __int64 result; // rax
  __int64 v10; // rcx
  char *v11; // r15
  unsigned __int64 v12; // rax
  __int64 v13; // r15
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r15
  _QWORD *v18; // rdx
  __int64 v19; // r10
  _QWORD *v20; // r8
  _QWORD *v21; // rcx
  signed __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r8
  _QWORD *v25; // rcx
  _QWORD *v26; // rcx
  char *v27; // r9
  _QWORD *v28; // rcx
  signed __int64 v29; // rbx
  __int64 v30; // rcx
  _OWORD *v31; // r8
  char *v32; // rdx
  __int64 *v33; // r15
  _QWORD *v34; // rcx
  signed __int64 v35; // rdi
  char *v36; // rdx
  _QWORD *v37; // rcx
  signed __int64 v38; // r8
  __int64 *v39; // r13
  _QWORD *v40; // rcx
  signed __int64 v41; // rdi
  __int64 *LocaleT; // rdi
  unsigned __int64 v44; // [rsp+28h] [rbp-60h]
  __int64 *v45; // [rsp+28h] [rbp-60h]
  char v46; // [rsp+30h] [rbp-58h]
  __int64 v47; // [rsp+40h] [rbp-48h]
  __int64 v48; // [rsp+48h] [rbp-40h]

  v8 = (a4 - a3) >> 5;
  result = (__int64)&a2[-*(_QWORD *)a1] >> 5;
  v44 = result;
  v46 = 1;
  if ( v8 == 1 && a2 == *((char **)a1 + 1) || (v46 = 0, v8) )
  {
    v10 = *((_QWORD *)a1 + 2);
    v11 = (char *)*((_QWORD *)a1 + 1);
    v12 = (v10 - (__int64)v11) >> 5;
    if ( v8 <= v12 )
    {
      try
      {
        v45 = (__int64 *)*((_QWORD *)a1 + 1);
        result = (v11 - a2) >> 5;
        v30 = 32 * v8;
        v47 = 32 * v8;
        if ( v8 >= result )
        {
          v36 = &a2[v30];
          if ( a2 != v11 )
          {
            v37 = a2 + 24;
            v38 = v36 - a2;
            do
            {
              *(_QWORD *)((char *)v37 + v38 - 8) = 0LL;
              *(_QWORD *)((char *)v37 + v38) = 0LL;
              *(_OWORD *)v36 = *(_OWORD *)(v37 - 3);
              *((_OWORD *)v36 + 1) = *(_OWORD *)(v37 - 1);
              *(v37 - 1) = 0LL;
              *v37 = 7LL;
              *((_WORD *)v37 - 12) = 0;
              v36 += 32;
              v37 += 4;
              result = (unsigned __int64)(v37 - 3);
            }
            while ( v37 - 3 != (_QWORD *)v11 );
          }
          *((_QWORD *)a1 + 1) = v36;
          v39 = (__int64 *)a2;
          if ( a2 != v11 )
          {
            do
            {
              result = unknown_libname_101(v39);
              v39 += 4;
            }
            while ( v39 != (__int64 *)v11 );
          }
          if ( a3 != a4 )
          {
            v40 = a2 + 24;
            v41 = a3 - a2;
            do
            {
              *(v40 - 1) = 0LL;
              *v40 = 0LL;
              *(_OWORD *)(v40 - 3) = *(_OWORD *)((char *)v40 + v41 - 24);
              *(_OWORD *)(v40 - 1) = *(_OWORD *)((char *)v40 + v41 - 8);
              *(_QWORD *)((char *)v40 + v41 - 8) = 0LL;
              *(_QWORD *)((char *)v40 + v41) = 7LL;
              *(_WORD *)((char *)v40 + v41 - 24) = 0;
              v40 += 4;
              result = (unsigned __int64)v40 + v41 - 24;
            }
            while ( (char *)result != a4 );
          }
        }
        else
        {
          v31 = (_OWORD *)*((_QWORD *)a1 + 1);
          if ( &v11[-v30] != v11 )
          {
            v32 = &v11[-v30 + 24];
            do
            {
              *(_QWORD *)&v32[v30 - 8] = 0LL;
              *(_QWORD *)&v32[32 * v8] = 0LL;
              *v31 = *(_OWORD *)(v32 - 24);
              v31[1] = *(_OWORD *)(v32 - 8);
              *((_QWORD *)v32 - 1) = 0LL;
              *(_QWORD *)v32 = 7LL;
              *((_WORD *)v32 - 12) = 0;
              v31 += 2;
              v32 += 32;
            }
            while ( v32 - 24 != v11 );
          }
          *((_QWORD *)a1 + 1) = v31;
          result = sub_18011A290(a2, &v11[-v30], v11);
          v33 = (__int64 *)a2;
          if ( a2 != &a2[v47] )
          {
            do
            {
              result = unknown_libname_101(v33);
              v33 += 4;
            }
            while ( v33 != (__int64 *)&a2[v47] );
          }
          if ( a3 != a4 )
          {
            v34 = a2 + 24;
            v35 = a3 - a2;
            do
            {
              *(v34 - 1) = 0LL;
              *v34 = 0LL;
              *(_OWORD *)(v34 - 3) = *(_OWORD *)((char *)v34 + v35 - 24);
              *(_OWORD *)(v34 - 1) = *(_OWORD *)((char *)v34 + v35 - 8);
              *(_QWORD *)((char *)v34 + v35 - 8) = 0LL;
              *(_QWORD *)((char *)v34 + v35) = 7LL;
              *(_WORD *)((char *)v34 + v35 - 24) = 0;
              v34 += 4;
              result = (unsigned __int64)v34 + v35 - 24;
            }
            while ( (char *)result != a4 );
          }
        }
      }
      catch ( ... )
      {
        sub_1800AE18C((__int64)a1, &a2[32 * v8], &a2[64 * v8], a2);
        LocaleT = (__int64 *)_LocaleUpdate::GetLocaleT(a1);
        sub_1800A6C7C((__int64)&a2[64 * v8], *LocaleT, (__int64)&a2[32 * v8]);
        sub_18006BAD4((__int64)a1, v45, (__int64 *)*LocaleT);
        *LocaleT = (__int64)v45;
        throw;
      }
    }
    else
    {
      v13 = (__int64)&v11[-*(_QWORD *)a1] >> 5;
      if ( v8 > 0x7FFFFFFFFFFFFFFLL - v13 )
        std::vector<void *>::_Xlen();
      v14 = v13 + v8;
      v48 = v13 + v8;
      v15 = (v10 - *(_QWORD *)a1) >> 5;
      v16 = v15 >> 1;
      if ( v15 <= 0x7FFFFFFFFFFFFFFLL - (v15 >> 1) )
      {
        v17 = v16 + v15;
        if ( v16 + v15 < v14 )
          v17 = v14;
      }
      else
      {
        v17 = v13 + v8;
      }
      v18 = sub_180031970((__int64)a1, v17);
      v19 = 4 * (v44 + v8);
      v20 = &v18[4 * v44];
      if ( a3 != a4 )
      {
        v21 = v20 + 3;
        v22 = a3 - (char *)v20;
        do
        {
          *(v21 - 1) = 0LL;
          *v21 = 0LL;
          *(_OWORD *)(v21 - 3) = *(_OWORD *)((char *)v21 + v22 - 24);
          *(_OWORD *)(v21 - 1) = *(_OWORD *)((char *)v21 + v22 - 8);
          *(_QWORD *)((char *)v21 + v22 - 8) = 0LL;
          *(_QWORD *)((char *)v21 + v22) = 7LL;
          *(_WORD *)((char *)v21 + v22 - 24) = 0;
          v21 += 4;
        }
        while ( (char *)v21 + v22 - 24 != a4 );
      }
      v23 = *(_QWORD *)a1;
      if ( v46 )
      {
        v24 = *((_QWORD *)a1 + 1);
        if ( v23 != v24 )
        {
          v25 = v18 + 3;
          do
          {
            *(v25 - 1) = 0LL;
            *v25 = 0LL;
            *(_OWORD *)(v25 - 3) = *(_OWORD *)v23;
            *(_OWORD *)(v25 - 1) = *(_OWORD *)(v23 + 16);
            *(_QWORD *)(v23 + 16) = 0LL;
            *(_QWORD *)(v23 + 24) = 7LL;
            *(_WORD *)v23 = 0;
            v25 += 4;
            v23 += 32LL;
          }
          while ( v23 != v24 );
        }
      }
      else
      {
        if ( (char *)v23 != a2 )
        {
          v26 = v18 + 3;
          do
          {
            *(v26 - 1) = 0LL;
            *v26 = 0LL;
            *(_OWORD *)(v26 - 3) = *(_OWORD *)v23;
            *(_OWORD *)(v26 - 1) = *(_OWORD *)(v23 + 16);
            *(_QWORD *)(v23 + 16) = 0LL;
            *(_QWORD *)(v23 + 24) = 7LL;
            *(_WORD *)v23 = 0;
            v26 += 4;
            v23 += 32LL;
          }
          while ( (char *)v23 != a2 );
        }
        v27 = (char *)*((_QWORD *)a1 + 1);
        if ( a2 != v27 )
        {
          v28 = &v18[v19 + 3];
          v29 = &a2[-(v19 * 8)] - (char *)v18;
          do
          {
            *(v28 - 1) = 0LL;
            *v28 = 0LL;
            *(_OWORD *)(v28 - 3) = *(_OWORD *)((char *)v28 + v29 - 24);
            *(_OWORD *)(v28 - 1) = *(_OWORD *)((char *)v28 + v29 - 8);
            *(_QWORD *)((char *)v28 + v29 - 8) = 0LL;
            *(_QWORD *)((char *)v28 + v29) = 7LL;
            *(_WORD *)((char *)v28 + v29 - 24) = 0;
            v28 += 4;
          }
          while ( (char *)v28 + v29 - 24 != v27 );
        }
      }
      return sub_1800ADECC((__int64)a1, (__int64)v18, v48, v17);
    }
  }
  return result;
}
