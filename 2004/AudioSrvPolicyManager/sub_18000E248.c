/*
 * XREFs of sub_18000E248 @ 0x18000E248
 * Callers:
 *     sub_18000D6FC @ 0x18000D6FC (sub_18000D6FC.c)
 *     sub_18000E560 @ 0x18000E560 (sub_18000E560.c)
 * Callees:
 *     sub_180009CF0 @ 0x180009CF0 (sub_180009CF0.c)
 *     sub_18000E434 @ 0x18000E434 (sub_18000E434.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

__int64 __fastcall sub_18000E248(_QWORD *a1, __int64 a2, char *a3, _QWORD **a4)
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
  __int64 v17; // r14
  signed __int64 v18; // rdx
  unsigned __int16 v19; // cx
  int v20; // eax
  __int64 result; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  __int64 v24; // r10
  __int64 v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  _QWORD *v29; // rax
  _QWORD **v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // [rsp+20h] [rbp-38h] BYREF
  __int64 v37; // [rsp+70h] [rbp+18h] BYREF
  _QWORD **v38; // [rsp+78h] [rbp+20h]

  v38 = a4;
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
          *a4[1] = *a4;
          (*a4)[1] = a4[1];
          --a1[2];
          sub_180009CF0((__int64)(a4 + 2));
          sub_180039D98(a4);
          *(_QWORD *)a2 = v12;
          *(_BYTE *)(a2 + 8) = 0;
          return a2;
        }
      }
    }
  }
  v22 = *a4;
  if ( v12 != *a4 )
  {
    *a4[1] = v22;
    *(_QWORD *)v22[1] = v12;
    *(_QWORD *)v12[1] = a4;
    v23 = (_QWORD *)v12[1];
    v12[1] = v22[1];
    v22[1] = a4[1];
    a4[1] = v23;
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
    v29 = *(_QWORD **)(v25 + 8 * v27 + 8);
    v30 = (_QWORD **)*v29;
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
    sub_18000E434();
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    v34 = sub_18000E238(v33, &v37, (__int64)v38);
    sub_18000E988(a1, &v35, *v34);
    throw;
  }
  return result;
}
