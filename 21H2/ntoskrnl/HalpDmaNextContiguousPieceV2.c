/*
 * XREFs of HalpDmaNextContiguousPieceV2 @ 0x1404CDFD0
 * Callers:
 *     HalpDmaNextContiguousPiece @ 0x1404B8EF0 (HalpDmaNextContiguousPiece.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x1404B8E90 (HalpDmaGetAdapterCacheAlignment.c)
 */

__int64 __fastcall HalpDmaNextContiguousPieceV2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6)
{
  __int64 v8; // r10
  __int64 v9; // r11
  int AdapterCacheAlignment; // r15d
  unsigned __int64 v11; // rbx
  char v12; // bp
  char v13; // di
  unsigned int v14; // r9d
  unsigned int v15; // edx
  __int64 v16; // r14
  __int64 *v17; // r8
  unsigned __int64 *v18; // rax
  unsigned int i; // r8d
  _QWORD *v20; // rax
  _QWORD *v21; // r10
  __int64 v22; // rdx
  __int64 *v23; // rsi
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx

  AdapterCacheAlignment = HalpDmaGetAdapterCacheAlignment(a1);
  if ( v9 )
  {
    v12 = *(_BYTE *)(v9 + 145);
    v11 = *(_QWORD *)(v9 + 136) >> 12;
    if ( !a5 && !*(_BYTE *)(v9 + 437) )
    {
      v13 = 1;
      goto LABEL_4;
    }
  }
  else
  {
    v11 = 4095LL;
    v12 = 0;
  }
  v13 = 0;
LABEL_4:
  v14 = 4096 - (a4 & 0xFFF);
  v15 = v14;
  v16 = v8 + 8LL * (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(v8 + 32)) >> 12);
  v17 = (__int64 *)(v16 + 48);
  if ( *(_QWORD *)(v16 + 48) > v11 || v13 && ((AdapterCacheAlignment - 1) & (unsigned int)a4) != 0 )
  {
    v15 = 0;
  }
  else
  {
    while ( v15 < a6 )
    {
      v23 = v17 + 1;
      v24 = v17[1];
      if ( v24 > v11 )
        break;
      v25 = *v17;
      if ( v25 + 1 != v24
        || ((v25 ^ v24) & 0xFFFFFFFFFFF00000uLL) != 0
        || v12 != 1 && ((v25 ^ v24) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        break;
      }
      v15 += 4096;
      v17 = v23;
    }
    if ( v15 > a6 )
    {
      v15 = a6;
      if ( v13 )
      {
        if ( ((AdapterCacheAlignment - 1) & a6) != 0 )
          v15 = a6 & 0xFFFFF000;
      }
    }
  }
  if ( !v9 || !*(_BYTE *)(v9 + 434) || !a6 || v15 )
    return v15;
  v18 = (unsigned __int64 *)(v16 + 56);
  for ( i = v14; i < a6; ++v18 )
  {
    if ( *v18 <= v11 )
      break;
    i += 4096;
  }
  v20 = *(_QWORD **)(a3 + 56);
  if ( i > a6 )
    i = a6;
  v21 = (_QWORD *)v20[1];
  v22 = *v20 >> 12;
  while ( v14 < i )
  {
    v26 = *v21 >> 12;
    if ( v26 != v22 + 1
      || ((v22 ^ v26) & 0xFFFFFFFFFFF00000uLL) != 0
      || v12 != 1 && ((v22 ^ v26) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      break;
    }
    v21 = (_QWORD *)v21[1];
    v22 = v26;
    v14 += 4096;
  }
  if ( v13 && v14 < 0x1000 && i < v14 << 12 && ((i - v14) & (AdapterCacheAlignment - 1)) != 0 )
    v14 = i;
  if ( v14 <= i )
    return v14;
  return i;
}
