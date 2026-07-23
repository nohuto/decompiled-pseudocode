/*
 * XREFs of HalpDmaNextContiguousPieceV3 @ 0x1404B7FE0
 * Callers:
 *     HalpDmaNextContiguousPiece @ 0x1404B8EF0 (HalpDmaNextContiguousPiece.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x1404B8E90 (HalpDmaGetAdapterCacheAlignment.c)
 */

__int64 __fastcall HalpDmaNextContiguousPieceV3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6)
{
  char v6; // r12
  __int64 v7; // r13
  unsigned __int64 v8; // r8
  int v9; // edi
  unsigned __int64 v10; // rbp
  bool v12; // r14
  unsigned int v13; // r10d
  unsigned int v14; // r11d
  __int64 v15; // r15
  unsigned int v16; // r9d
  unsigned __int64 *v17; // r15
  __int64 *v18; // rsi
  unsigned int v19; // r11d
  __int64 *v20; // r13
  unsigned __int64 v21; // rdi
  __int64 v22; // r15
  unsigned int v23; // esi
  int v24; // ecx
  int AdapterCacheAlignment; // eax
  unsigned __int64 *v26; // rax
  unsigned int i; // ecx
  _QWORD *v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned __int64 *v32; // [rsp+20h] [rbp-58h]
  char v33; // [rsp+80h] [rbp+8h]
  unsigned int v34; // [rsp+88h] [rbp+10h]
  unsigned __int64 v36; // [rsp+98h] [rbp+20h]

  v6 = *(_BYTE *)(a1 + 145);
  v7 = a3;
  v9 = a4;
  v36 = *(_QWORD *)(a1 + 136);
  v8 = v36;
  v10 = v36 >> 12;
  v33 = v6;
  v12 = !a5 && !*(_BYTE *)(a1 + 437);
  v13 = a6;
  v14 = 4096 - (a4 & 0xFFF);
  v15 = (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12) + 6LL;
  v34 = v14;
  v16 = v14;
  v17 = (unsigned __int64 *)(a2 + 8 * v15);
  v18 = (__int64 *)v17;
  v32 = v17;
  if ( *v17 > v10 )
    goto LABEL_33;
  if ( v12 )
  {
    if ( (((unsigned int)HalpDmaGetAdapterCacheAlignment(a1, a2, v36) - 1) & v9) == 0 )
    {
      v8 = v36;
      goto LABEL_9;
    }
LABEL_33:
    v16 = 0;
    goto LABEL_34;
  }
LABEL_9:
  if ( v14 < v13 )
  {
    v19 = 4096;
    while ( 1 )
    {
      v20 = v18 + 1;
      v21 = v18[1];
      if ( v21 > v10 )
        break;
      v22 = *v18;
      if ( *v18 + 1 != v21 )
        break;
      v23 = v13 - v16;
      if ( v13 - v16 > v19 )
        v23 = v19;
      if ( v8 < v23 + (v21 << 12) - 1 && *(_DWORD *)(a1 + 512) != 2 )
      {
LABEL_27:
        v6 = v33;
        break;
      }
      if ( !*(_BYTE *)(a1 + 437) && !a5 )
      {
        v24 = HalpDmaGetAdapterCacheAlignment(a1, a2, v8) - 1;
        if ( (v24 & ((_DWORD)v21 << 12)) != 0 || (v24 & v23) != 0 )
          goto LABEL_27;
        v8 = v36;
      }
      v6 = v33;
      if ( ((v22 ^ v21) & 0xFFFFFFFFFFF00000uLL) == 0 && (v33 == 1 || ((v22 ^ v21) & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        v16 += v19;
        v18 = v20;
        if ( v16 < v13 )
          continue;
      }
      break;
    }
    v14 = v34;
    v17 = v32;
    v7 = a3;
  }
  if ( v16 > v13 )
  {
    v16 = v13;
    if ( v12 )
    {
      AdapterCacheAlignment = HalpDmaGetAdapterCacheAlignment(a1, a2, v8);
      if ( ((AdapterCacheAlignment - 1) & v13) != 0 )
        v16 &= 0xFFFFF000;
    }
  }
LABEL_34:
  if ( !*(_BYTE *)(a1 + 434) || !v13 || v16 )
    return v16;
  v26 = v17 + 1;
  for ( i = v14; i < v13; ++v26 )
  {
    if ( *v26 <= v10 )
      break;
    i += 4096;
  }
  v28 = *(_QWORD **)(v7 + 56);
  if ( i > v13 )
    i = v13;
  if ( v28 )
  {
    v29 = *v28 >> 12;
    while ( 1 )
    {
      v28 = (_QWORD *)v28[1];
      if ( v14 >= i )
        break;
      if ( !v28 )
        break;
      v30 = *v28 >> 12;
      if ( v30 != v29 + 1
        || ((v29 ^ v30) & 0xFFFFFFFFFFF00000uLL) != 0
        || v6 != 1 && ((v29 ^ v30) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        break;
      }
      v29 = *v28 >> 12;
      v14 += 4096;
    }
  }
  else
  {
    v14 = 0;
  }
  if ( v14 <= i )
    return v14;
  return i;
}
