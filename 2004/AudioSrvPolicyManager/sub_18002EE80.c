/*
 * XREFs of sub_18002EE80 @ 0x18002EE80
 * Callers:
 *     sub_18002E8D0 @ 0x18002E8D0 (sub_18002E8D0.c)
 *     sub_18002E9C0 @ 0x18002E9C0 (sub_18002E9C0.c)
 *     sub_18002EC60 @ 0x18002EC60 (sub_18002EC60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002EE80(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // r14
  _QWORD *v5; // r10
  __int64 v6; // r9
  __int64 v7; // r8
  unsigned __int64 i; // rcx
  __int64 v9; // rax
  __int64 v10; // r15
  _QWORD *v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rdi
  _QWORD *v15; // r12
  _QWORD *j; // rax
  _QWORD *v17; // rcx
  char *v18; // rdx
  char *v19; // r10
  __int64 v20; // r8
  signed __int64 v21; // r10
  unsigned __int16 v22; // cx
  int v23; // ecx
  _QWORD *v24; // r8
  _QWORD *v25; // rcx
  _QWORD *v26; // rdx
  char *v27; // r10
  char *v28; // rbx
  __int64 v29; // rsi
  signed __int64 v30; // rbx
  unsigned __int16 v31; // dx
  int v32; // edx

  v3 = a2[2];
  v5 = a2;
  if ( a2[3] >= 8uLL )
    v5 = (_QWORD *)*a2;
  v6 = 0LL;
  v7 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 2 * v3; v7 = 0x100000001B3LL * (v9 ^ v7) )
    v9 = *((unsigned __int8 *)v5 + i++);
  v10 = a1[3];
  v11 = (_QWORD *)a1[1];
  v12 = v7 & a1[6];
  v13 = 2 * v12;
  v14 = 2 * v12;
  v15 = *(_QWORD **)(v10 + 16 * v12);
  for ( j = v15; ; j = (_QWORD *)*j )
  {
    if ( v15 == v11 )
      v17 = (_QWORD *)a1[1];
    else
      v17 = **(_QWORD ***)(v10 + 8 * v14 + 8);
    if ( j == v17 )
      goto LABEL_42;
    v18 = (char *)a2;
    if ( a2[3] >= 8uLL )
      v18 = (char *)*a2;
    v19 = (char *)(j + 2);
    if ( j[5] >= 8uLL )
      v19 = (char *)j[2];
    v20 = j[4];
    if ( v20 == v3 )
    {
      if ( v20 )
      {
        v21 = v19 - v18;
        while ( 1 )
        {
          v22 = *(_WORD *)&v18[v21];
          if ( v22 != *(_WORD *)v18 )
            break;
          v18 += 2;
          if ( !--v20 )
            goto LABEL_19;
        }
        v23 = v22 < *(_WORD *)v18 ? -1 : 1;
      }
      else
      {
LABEL_19:
        v23 = 0;
      }
      if ( !v23 )
        break;
    }
  }
  v24 = j;
  v25 = j;
  while ( 1 )
  {
    v26 = v15 == v11 ? v11 : **(_QWORD ***)(v10 + 8 * v13 + 8);
    if ( j == v26 )
      break;
    v27 = (char *)(j + 2);
    if ( j[5] >= 8uLL )
      v27 = (char *)j[2];
    v28 = (char *)a2;
    if ( a2[3] >= 8uLL )
      v28 = (char *)*a2;
    if ( v3 != j[4] )
      break;
    v29 = v3;
    if ( v3 )
    {
      v30 = v28 - v27;
      while ( 1 )
      {
        v31 = *(_WORD *)&v27[v30];
        if ( v31 != *(_WORD *)v27 )
          break;
        v27 += 2;
        if ( !--v29 )
          goto LABEL_37;
      }
      v32 = v31 < *(_WORD *)v27 ? -1 : 1;
    }
    else
    {
LABEL_37:
      v32 = 0;
    }
    if ( v32 )
      break;
    j = (_QWORD *)*j;
  }
  if ( v24 == j )
  {
LABEL_42:
    v25 = v11;
    j = v11;
  }
  while ( v25 != j )
  {
    v25 = (_QWORD *)*v25;
    ++v6;
  }
  return v6;
}
