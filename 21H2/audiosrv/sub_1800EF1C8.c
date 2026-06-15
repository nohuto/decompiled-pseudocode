/*
 * XREFs of sub_1800EF1C8 @ 0x1800EF1C8
 * Callers:
 *     sub_180008F00 @ 0x180008F00 (sub_180008F00.c)
 * Callees:
 *     sub_180008F70 @ 0x180008F70 (sub_180008F70.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 */

__int64 __fastcall sub_1800EF1C8(__int64 *a1, __int64 a2, __int64 a3, char *a4, __int64 a5)
{
  _QWORD *v8; // r15
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  char *v12; // rcx
  char *v13; // r8
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  signed __int64 v16; // r8
  unsigned __int16 v17; // r11
  unsigned int v18; // r8d
  __int64 v19; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int16 *v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int16 v30; // di
  int v31; // eax
  bool v32; // sf
  __int64 v33; // rdi
  unsigned __int64 v34; // rdx
  __int64 v35; // [rsp+20h] [rbp-38h]
  __int64 v36; // [rsp+60h] [rbp+8h] BYREF

  v8 = (_QWORD *)*a1;
  v9 = *a1;
  v10 = *(_QWORD *)(*a1 + 8);
  LOBYTE(a3) = 1;
  if ( !*(_BYTE *)(v10 + 25) )
  {
    v11 = *((_QWORD *)a4 + 2);
    do
    {
      v9 = v10;
      v12 = (char *)(v10 + 32);
      if ( *(_QWORD *)(v10 + 56) >= 8uLL )
        v12 = *(char **)(v10 + 32);
      v13 = a4;
      if ( *((_QWORD *)a4 + 3) >= 8uLL )
        v13 = *(char **)a4;
      v14 = *(_QWORD *)(v10 + 48);
      v15 = v14;
      if ( v14 >= v11 )
        v15 = *((_QWORD *)a4 + 2);
      if ( v15 )
      {
        v16 = v13 - v12;
        while ( 1 )
        {
          v17 = *(_WORD *)&v12[v16];
          if ( v17 != *(_WORD *)v12 )
            break;
          v12 += 2;
          if ( !--v15 )
            goto LABEL_13;
        }
        v18 = v17 < *(_WORD *)v12 ? -1 : 1;
      }
      else
      {
LABEL_13:
        v18 = 0;
      }
      if ( !v18 )
      {
        if ( v11 >= v14 )
          v18 = v11 > v14;
        else
          v18 = -1;
      }
      a3 = v18 >> 31;
      if ( (_BYTE)a3 )
        v10 = *(_QWORD *)v10;
      else
        v10 = *(_QWORD *)(v10 + 16);
    }
    while ( !*(_BYTE *)(v10 + 25) );
  }
  v19 = v9;
  if ( (_BYTE)a3 )
  {
    if ( v9 == *v8 )
    {
      LOBYTE(a3) = 1;
      *(_QWORD *)a2 = *sub_180008F70(a1, &v36, a3, (_QWORD *)v9, v35, a5);
      *(_BYTE *)(a2 + 8) = 1;
      return a2;
    }
    if ( *(_BYTE *)(v9 + 25) )
    {
      v19 = *(_QWORD *)(v9 + 16);
    }
    else
    {
      v21 = *(_QWORD *)v9;
      if ( *(_BYTE *)(*(_QWORD *)v9 + 25LL) )
      {
        v22 = *(_QWORD *)(v9 + 8);
        if ( !*(_BYTE *)(v22 + 25) )
        {
          v23 = v9;
          do
          {
            if ( v23 != *(_QWORD *)v22 )
              break;
            v19 = v22;
            v22 = *(_QWORD *)(v22 + 8);
            v23 = v19;
          }
          while ( !*(_BYTE *)(v22 + 25) );
        }
        if ( !*(_BYTE *)(v19 + 25) )
          v19 = v22;
      }
      else
      {
        do
        {
          v19 = v21;
          v21 = *(_QWORD *)(v21 + 16);
        }
        while ( !*(_BYTE *)(v21 + 25) );
      }
    }
  }
  v24 = (unsigned __int16 *)a4;
  if ( *((_QWORD *)a4 + 3) >= 8uLL )
    v24 = *(unsigned __int16 **)a4;
  v25 = v19 + 32;
  if ( *(_QWORD *)(v19 + 56) >= 8uLL )
    v25 = *(_QWORD *)(v19 + 32);
  v26 = *((_QWORD *)a4 + 2);
  v27 = *(_QWORD *)(v19 + 48);
  v28 = v26;
  if ( v26 >= v27 )
    v28 = *(_QWORD *)(v19 + 48);
  if ( v28 )
  {
    v29 = v25 - (_QWORD)v24;
    while ( 1 )
    {
      v30 = *(unsigned __int16 *)((char *)v24 + v29);
      if ( v30 != *v24 )
        break;
      ++v24;
      if ( !--v28 )
        goto LABEL_46;
    }
    v31 = v30 < *v24 ? -1 : 1;
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
LABEL_55:
    *(_QWORD *)a2 = *sub_180008F70(a1, &v36, a3, (_QWORD *)v9, v35, a5);
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
  if ( v27 < v26 )
    goto LABEL_55;
  if ( v27 <= v26 )
  {
    v32 = 0;
    goto LABEL_51;
  }
LABEL_52:
  v33 = a5;
  v34 = *(_QWORD *)(a5 + 56);
  if ( v34 >= 8 )
    sub_1800472E0(*(_QWORD *)(a5 + 32), 2 * v34 + 2);
  *(_QWORD *)(v33 + 48) = 0LL;
  *(_QWORD *)(v33 + 56) = 7LL;
  *(_WORD *)(v33 + 32) = 0;
  sub_1800472E0(v33, 0x48uLL);
  *(_QWORD *)a2 = v19;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
