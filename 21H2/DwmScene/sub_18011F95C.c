/*
 * XREFs of sub_18011F95C @ 0x18011F95C
 * Callers:
 *     sub_18011FDF0 @ 0x18011FDF0 (sub_18011FDF0.c)
 *     sub_18011FF14 @ 0x18011FF14 (sub_18011FF14.c)
 *     sub_1801210EC @ 0x1801210EC (sub_1801210EC.c)
 *     sub_1801222C8 @ 0x1801222C8 (sub_1801222C8.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_180120FA8 @ 0x180120FA8 (sub_180120FA8.c)
 *     sub_180122420 @ 0x180122420 (sub_180122420.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18011F95C(_QWORD *a1, __int64 a2, char *a3, __int64 a4)
{
  char *v5; // r10
  __int64 v8; // r15
  __int64 v9; // rdx
  unsigned __int64 i; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rdi
  __int64 v13; // rcx
  _QWORD *v14; // r12
  char *v15; // rax
  char *v16; // rdx
  __int64 v17; // rsi
  signed __int64 v18; // rdx
  unsigned __int16 v19; // cx
  int v20; // eax
  __int64 result; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r10
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v35; // [rsp+28h] [rbp-50h] BYREF
  __int64 v36; // [rsp+30h] [rbp-48h] BYREF

  v5 = a3;
  v8 = *((_QWORD *)a3 + 2);
  if ( *((_QWORD *)a3 + 3) >= 8uLL )
    a3 = *(char **)a3;
  v9 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 2 * v8; ++i )
    v9 = 0x100000001B3LL * ((unsigned __int8)a3[i] ^ (unsigned __int64)v9);
  v11 = v9 & a1[6];
  v12 = (_QWORD *)a1[1];
  v13 = a1[3];
  v14 = *(_QWORD **)(v13 + 16 * v11);
  if ( v12 != v14 )
  {
    v12 = **(_QWORD ***)(v13 + 16 * (v9 & a1[6]) + 8);
    while ( v12 != v14 )
    {
      v12 = (_QWORD *)v12[1];
      v15 = (char *)(v12 + 2);
      if ( v12[5] >= 8uLL )
        v15 = (char *)v12[2];
      v16 = v5;
      if ( *((_QWORD *)v5 + 3) >= 8uLL )
        v16 = *(char **)v5;
      if ( v8 == v12[4] )
      {
        v17 = v8;
        if ( v8 )
        {
          v18 = v16 - v15;
          while ( 1 )
          {
            v19 = *(_WORD *)&v15[v18];
            if ( v19 != *(_WORD *)v15 )
              break;
            v15 += 2;
            if ( !--v17 )
              goto LABEL_17;
          }
          v20 = v19 < *(_WORD *)v15 ? -1 : 1;
        }
        else
        {
LABEL_17:
          v20 = 0;
        }
        if ( !v20 )
        {
          **(_QWORD **)(a4 + 8) = *(_QWORD *)a4;
          *(_QWORD *)(*(_QWORD *)a4 + 8LL) = *(_QWORD *)(a4 + 8);
          --a1[2];
          sub_180122420(a4 + 48);
          unknown_libname_103((__int64 *)(a4 + 16));
          j_j__o_free(a4);
          *(_QWORD *)a2 = v12;
          *(_BYTE *)(a2 + 8) = 0;
          result = a2;
          goto LABEL_36;
        }
      }
    }
  }
  v22 = *(_QWORD *)a4;
  if ( v12 != *(_QWORD **)a4 )
  {
    **(_QWORD **)(a4 + 8) = v22;
    **(_QWORD **)(v22 + 8) = v12;
    *(_QWORD *)v12[1] = a4;
    v23 = v12[1];
    v12[1] = *(_QWORD *)(v22 + 8);
    *(_QWORD *)(v22 + 8) = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v23;
  }
  v24 = 2 * v11;
  v25 = a1[3];
  v26 = *(_QWORD **)(v25 + 16 * v11);
  v27 = 2 * v11;
  if ( v26 == (_QWORD *)a1[1] )
  {
    *(_QWORD *)(v25 + 8 * v27) = a4;
    v28 = a1[3];
    *(_QWORD *)(v28 + 8 * v27 + 8) = a4;
  }
  else if ( v26 == v12 )
  {
    *(_QWORD *)(v25 + 8 * v27) = a4;
  }
  else
  {
    v29 = *(__int64 **)(v25 + 8 * v27 + 8);
    v30 = *v29;
    *(_QWORD *)(v25 + 8 * v27 + 8) = *v29;
    if ( v30 != a4 )
    {
      v31 = a1[3];
      v32 = *(_QWORD *)(v31 + 8 * v24 + 8);
      *(_QWORD *)(v31 + 8 * v24 + 8) = *(_QWORD *)(v32 + 8);
    }
  }
  try
  {
    sub_180120FA8(a1);
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    v33 = sub_18008F484((__int64)a1, &v35, a4);
    sub_18011FEFC(a1, &v36, *v33);
    throw;
  }
LABEL_36:
  try
  {
  }
  catch ( ... )
  {
    sub_180121064(a1, a4);
    throw;
  }
  return result;
}
