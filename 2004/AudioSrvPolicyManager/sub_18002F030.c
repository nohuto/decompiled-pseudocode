/*
 * XREFs of sub_18002F030 @ 0x18002F030
 * Callers:
 *     sub_18002EC60 @ 0x18002EC60 (sub_18002EC60.c)
 * Callees:
 *     sub_18002F510 @ 0x18002F510 (sub_18002F510.c)
 *     sub_18002F68C @ 0x18002F68C (sub_18002F68C.c)
 *     sub_18002F844 @ 0x18002F844 (sub_18002F844.c)
 */

__int64 __fastcall sub_18002F030(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // r14
  _QWORD *v5; // r9
  unsigned __int16 *v6; // rcx
  __int64 i; // r8
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rax
  unsigned __int16 *v11; // r8
  __int64 v12; // r12
  __int64 v13; // rdi
  unsigned __int16 *v14; // r13
  unsigned __int16 *j; // rbx
  unsigned __int16 *v16; // rax
  char *v17; // r9
  __int64 v18; // rdx
  signed __int64 v19; // r9
  unsigned __int16 v20; // ax
  int v21; // eax
  unsigned __int16 *v22; // rdi
  unsigned __int16 *v23; // rax
  char *v24; // rdx
  char *v25; // r9
  __int64 v26; // rsi
  signed __int64 v27; // r9
  unsigned __int16 v28; // ax
  int v29; // eax
  __int64 v30; // rsi
  unsigned __int16 *k; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int16 *v34; // r8
  __int64 v36; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2[2];
  v5 = a2;
  if ( a2[3] >= 8uLL )
    v5 = (_QWORD *)*a2;
  v6 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; (unsigned __int64)v6 < 2 * v3; i = 0x100000001B3LL * (v8 ^ i) )
  {
    v8 = *((unsigned __int8 *)v5 + (_QWORD)v6);
    v6 = (unsigned __int16 *)((char *)v6 + 1);
  }
  v9 = a1[3];
  v10 = i & a1[6];
  v11 = (unsigned __int16 *)a1[1];
  v12 = 2 * v10;
  v13 = 2 * v10;
  v14 = *(unsigned __int16 **)(v9 + 16 * v10);
  for ( j = v14; ; j = *(unsigned __int16 **)j )
  {
    if ( v14 == v11 )
      v16 = (unsigned __int16 *)a1[1];
    else
      v16 = **(unsigned __int16 ***)(v9 + 8 * v13 + 8);
    if ( j == v16 )
      goto LABEL_42;
    v6 = (unsigned __int16 *)a2;
    if ( a2[3] >= 8uLL )
      v6 = (unsigned __int16 *)*a2;
    v17 = (char *)(j + 8);
    if ( *((_QWORD *)j + 5) >= 8uLL )
      v17 = (char *)*((_QWORD *)j + 2);
    v18 = *((_QWORD *)j + 4);
    if ( v18 == v3 )
    {
      if ( v18 )
      {
        v19 = v17 - (char *)v6;
        while ( 1 )
        {
          v20 = *(unsigned __int16 *)((char *)v6 + v19);
          if ( v20 != *v6 )
            break;
          ++v6;
          if ( !--v18 )
            goto LABEL_19;
        }
        v21 = v20 < *v6 ? -1 : 1;
      }
      else
      {
LABEL_19:
        v21 = 0;
      }
      if ( !v21 )
        break;
    }
  }
  v6 = j;
  v22 = j;
  while ( 1 )
  {
    v23 = v14 == v11 ? (unsigned __int16 *)a1[1] : **(unsigned __int16 ***)(v9 + 8 * v12 + 8);
    if ( j == v23 )
      break;
    v24 = (char *)(j + 8);
    if ( *((_QWORD *)j + 5) >= 8uLL )
      v24 = (char *)*((_QWORD *)j + 2);
    v25 = (char *)a2;
    if ( a2[3] >= 8uLL )
      v25 = (char *)*a2;
    if ( v3 != *((_QWORD *)j + 4) )
      break;
    v26 = v3;
    if ( v3 )
    {
      v27 = v25 - v24;
      while ( 1 )
      {
        v28 = *(_WORD *)&v24[v27];
        if ( v28 != *(_WORD *)v24 )
          break;
        v24 += 2;
        if ( !--v26 )
          goto LABEL_37;
      }
      v29 = v28 < *(_WORD *)v24 ? -1 : 1;
    }
    else
    {
LABEL_37:
      v29 = 0;
    }
    if ( v29 )
      break;
    j = *(unsigned __int16 **)j;
  }
  if ( v6 == j )
  {
LABEL_42:
    v22 = (unsigned __int16 *)a1[1];
    j = v22;
  }
  v30 = 0LL;
  for ( k = v22; k != j; ++v30 )
    k = *(unsigned __int16 **)k;
  if ( v22 == *(unsigned __int16 **)v11 && j == v11 )
  {
    sub_18002F68C(v6, a1[1]);
    *(_QWORD *)a1[1] = a1[1];
    *(_QWORD *)(a1[1] + 8LL) = a1[1];
    a1[2] = 0LL;
    v32 = a1[4];
    v33 = a1[3];
    v36 = a1[1];
    sub_18002F844(v33, v32, &v36);
  }
  else
  {
    while ( v22 != j )
    {
      v34 = v22;
      v22 = *(unsigned __int16 **)v22;
      sub_18002F510(a1, &v36, v34);
    }
  }
  return v30;
}
