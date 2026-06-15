/*
 * XREFs of sub_1800E9EC4 @ 0x1800E9EC4
 * Callers:
 *     sub_1800E99EC @ 0x1800E99EC (sub_1800E99EC.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_1800E9878 @ 0x1800E9878 (sub_1800E9878.c)
 *     sub_1800EA8B0 @ 0x1800EA8B0 (sub_1800EA8B0.c)
 */

__int64 __fastcall sub_1800E9EC4(__int64 *a1, __int64 a2, __int64 a3, char *a4, __int64 *a5)
{
  _QWORD *v8; // r15
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned int v11; // r8d
  unsigned __int64 v12; // r14
  char *v13; // rcx
  char *v14; // r8
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  signed __int64 v17; // r8
  unsigned __int16 v18; // r11
  unsigned int v19; // r8d
  __int64 v20; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int16 *v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // rcx
  unsigned __int16 v30; // di
  int v31; // eax
  bool v32; // sf
  __int64 *v33; // rdi
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  int v36; // [rsp+20h] [rbp-38h]
  __int64 v37; // [rsp+60h] [rbp+8h] BYREF

  v8 = (_QWORD *)*a1;
  v9 = *a1;
  v10 = *(_QWORD *)(*a1 + 8);
  LOBYTE(v11) = 1;
  if ( !*(_BYTE *)(v10 + 25) )
  {
    v12 = *((_QWORD *)a4 + 2);
    do
    {
      v9 = v10;
      v13 = (char *)(v10 + 32);
      if ( *(_QWORD *)(v10 + 56) >= 8uLL )
        v13 = *(char **)(v10 + 32);
      v14 = a4;
      if ( *((_QWORD *)a4 + 3) >= 8uLL )
        v14 = *(char **)a4;
      v15 = *(_QWORD *)(v10 + 48);
      v16 = v15;
      if ( v15 >= v12 )
        v16 = *((_QWORD *)a4 + 2);
      if ( v16 )
      {
        v17 = v14 - v13;
        while ( 1 )
        {
          v18 = *(_WORD *)&v13[v17];
          if ( v18 != *(_WORD *)v13 )
            break;
          v13 += 2;
          if ( !--v16 )
            goto LABEL_13;
        }
        v19 = v18 < *(_WORD *)v13 ? -1 : 1;
      }
      else
      {
LABEL_13:
        v19 = 0;
      }
      if ( !v19 )
      {
        if ( v12 >= v15 )
          v19 = v12 > v15;
        else
          v19 = -1;
      }
      v11 = v19 >> 31;
      if ( (_BYTE)v11 )
        v10 = *(_QWORD *)v10;
      else
        v10 = *(_QWORD *)(v10 + 16);
    }
    while ( !*(_BYTE *)(v10 + 25) );
  }
  v20 = v9;
  if ( (_BYTE)v11 )
  {
    if ( v9 == *v8 )
    {
      *(_QWORD *)a2 = *sub_1800E9878(a1, &v37, 1, (_QWORD *)v9, v36, (__int64)a5);
      *(_BYTE *)(a2 + 8) = 1;
      return a2;
    }
    if ( *(_BYTE *)(v9 + 25) )
    {
      v20 = *(_QWORD *)(v9 + 16);
    }
    else
    {
      v22 = *(_QWORD *)v9;
      if ( *(_BYTE *)(*(_QWORD *)v9 + 25LL) )
      {
        v23 = *(_QWORD *)(v9 + 8);
        if ( !*(_BYTE *)(v23 + 25) )
        {
          v24 = v9;
          do
          {
            if ( v24 != *(_QWORD *)v23 )
              break;
            v20 = v23;
            v23 = *(_QWORD *)(v23 + 8);
            v24 = v20;
          }
          while ( !*(_BYTE *)(v23 + 25) );
        }
        if ( !*(_BYTE *)(v20 + 25) )
          v20 = v23;
      }
      else
      {
        do
        {
          v20 = v22;
          v22 = *(_QWORD *)(v22 + 16);
        }
        while ( !*(_BYTE *)(v22 + 25) );
      }
    }
  }
  v25 = (unsigned __int16 *)a4;
  if ( *((_QWORD *)a4 + 3) >= 8uLL )
    v25 = *(unsigned __int16 **)a4;
  v26 = v20 + 32;
  if ( *(_QWORD *)(v20 + 56) >= 8uLL )
    v26 = *(_QWORD *)(v20 + 32);
  v27 = *((_QWORD *)a4 + 2);
  v28 = *(_QWORD *)(v20 + 48);
  v29 = v27;
  if ( v27 >= v28 )
    v29 = *(_QWORD *)(v20 + 48);
  if ( v29 )
  {
    v26 -= (__int64)v25;
    while ( 1 )
    {
      v30 = *(unsigned __int16 *)((char *)v25 + v26);
      if ( v30 != *v25 )
        break;
      ++v25;
      if ( !--v29 )
        goto LABEL_46;
    }
    v31 = v30 < *v25 ? -1 : 1;
  }
  else
  {
LABEL_46:
    v31 = 0;
  }
  v32 = v31 < 0;
  if ( v31 )
  {
LABEL_51:
    if ( !v32 )
      goto LABEL_52;
LABEL_57:
    *(_QWORD *)a2 = *sub_1800E9878(a1, &v37, v11, (_QWORD *)v9, v36, (__int64)a5);
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
  if ( v28 < v27 )
    goto LABEL_57;
  if ( v28 <= v27 )
  {
    v32 = 0;
    goto LABEL_51;
  }
LABEL_52:
  v33 = a5;
  v34 = a5[8];
  if ( v34 )
    sub_1800EA8B0(v34, v26);
  v35 = v33[7];
  if ( v35 >= 8 )
    sub_1800472E0(v33[4], 2 * v35 + 2);
  v33[6] = 0LL;
  v33[7] = 7LL;
  *((_WORD *)v33 + 16) = 0;
  sub_1800472E0((__int64)v33, 0x48uLL);
  *(_QWORD *)a2 = v20;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
