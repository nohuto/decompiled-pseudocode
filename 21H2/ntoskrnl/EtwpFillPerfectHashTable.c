/*
 * XREFs of EtwpFillPerfectHashTable @ 0x1407B8964
 * Callers:
 *     EtwpCreatePerfectHashFunction @ 0x1407B8750 (EtwpCreatePerfectHashFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpFillPerfectHashTable(
        _WORD *a1,
        unsigned __int16 a2,
        char a3,
        unsigned __int16 a4,
        __int64 a5,
        unsigned __int16 *a6)
{
  __int64 v6; // rdi
  int v7; // r14d
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int16 v12; // bx
  unsigned __int16 v13; // r11
  __int16 v14; // r9
  unsigned __int16 v15; // r8
  unsigned __int16 v16; // dx
  unsigned int v17; // ebp
  unsigned __int16 v18; // r8
  unsigned __int16 i; // dx
  unsigned __int16 j; // dx
  __int64 v22; // rax
  unsigned __int16 v23; // cx
  __int64 v24; // r9
  unsigned __int16 v25; // cx
  unsigned __int16 v26; // [rsp+38h] [rbp+10h]

  LOWORD(v6) = 0;
  v7 = a4;
  v10 = a5;
  *a6 = 0;
  v11 = 128LL;
  v12 = a4 + 1;
  v26 = a4 + 1;
  v13 = a4 + 1;
  do
  {
    *(_WORD *)(v10 + 2) = -1;
    *(_BYTE *)v10 = -1;
    v10 += 4LL;
    --v11;
  }
  while ( v11 );
  if ( a2 )
  {
    v6 = a2;
    do
    {
      v14 = *a1;
      v15 = 0;
      v16 = v7 & __ROR2__(*a1, a3);
      while ( *(_WORD *)(a5 + 4LL * v16 + 2) != 0xFFFF )
      {
        v22 = v16;
        if ( *(_WORD *)(a5 + 4LL * v16 + 2) == v14 )
          break;
        v16 = *(unsigned __int8 *)(a5 + 4LL * v16);
        ++v15;
        if ( v16 == 255 )
        {
          v16 = v13++;
          *(_BYTE *)(a5 + 4 * v22) = v16;
        }
        if ( v15 > *a6 )
          *a6 = v15;
      }
      ++a1;
      *(_WORD *)(a5 + 4LL * v16 + 2) = v14;
      --v6;
    }
    while ( v6 );
    v12 = v26;
  }
  v17 = v7 + 1;
  v18 = v13 - 1;
  for ( i = v6; v18 > v17 && i < (unsigned __int16)v7; ++i )
  {
    if ( *(_BYTE *)(a5 + 4LL * v18) == 0xFF )
    {
      do
      {
        if ( *(_WORD *)(a5 + 4LL * i + 2) == 0xFFFF )
          break;
        ++i;
      }
      while ( i < (unsigned __int16)v7 );
      if ( i >= (unsigned __int16)v7 )
        break;
      *(_WORD *)(a5 + 4LL * i + 2) = *(_WORD *)(a5 + 4LL * v18 + 2);
      v23 = v6;
      if ( (unsigned __int16)v6 < v13 )
      {
        while ( *(unsigned __int8 *)(a5 + 4LL * v23) != v18 )
        {
          if ( ++v23 >= v13 )
            goto LABEL_30;
        }
        *(_BYTE *)(a5 + 4LL * v23) = i;
LABEL_30:
        LOWORD(v6) = 0;
      }
      *(_WORD *)(a5 + 4LL * v18 + 2) = -1;
      if ( v18 == v13 - 1 )
        --v13;
    }
    --v18;
  }
  for ( j = v13 - 1; j > v17; ++v12 )
  {
    if ( v12 >= j )
      break;
    do
    {
      if ( *(_WORD *)(a5 + 4LL * v12 + 2) == 0xFFFF )
        break;
      ++v12;
    }
    while ( v12 < j );
    if ( v12 >= j )
      break;
    v24 = j;
    v25 = 0;
    *(_WORD *)(a5 + 4LL * v12 + 2) = *(_WORD *)(a5 + 4LL * j + 2);
    if ( v13 )
    {
      while ( *(unsigned __int8 *)(a5 + 4LL * v25) != j )
      {
        if ( ++v25 >= v13 )
          goto LABEL_43;
      }
      *(_BYTE *)(a5 + 4LL * v25) = v12;
    }
LABEL_43:
    --j;
    *(_BYTE *)(a5 + 4LL * v12) = *(_BYTE *)(a5 + 4 * v24);
    --v13;
  }
  return v13;
}
