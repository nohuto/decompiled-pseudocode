/*
 * XREFs of RtlpHpVsChunkCoalesce @ 0x18002782C
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x180029280 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkFree @ 0x18010FB1C (RtlpHpVsChunkFree.c)
 * Callees:
 *     RtlpHpVsFreeChunkRemove @ 0x180066448 (RtlpHpVsFreeChunkRemove.c)
 */

unsigned __int64 __fastcall RtlpHpVsChunkCoalesce(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int *a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  unsigned int v9; // r12d
  unsigned int v10; // edi
  unsigned __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // r14
  unsigned __int64 v14; // r8
  __int64 v15; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // rbx
  int v20; // [rsp+54h] [rbp+Ch]

  v6 = a3 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a3;
  v7 = a3;
  v9 = WORD1(v6);
  v10 = WORD1(v6);
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ ((v20 & 0xFF00FFFF) >> 16) ^ BYTE6(RtlpHpHeapGlobals);
  if ( WORD2(v6) )
  {
    v11 = a3 - 16LL * WORD2(v6);
    v12 = v11 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v11;
    if ( (v12 & 0xFF000000000000LL) == 0 )
    {
      RtlpHpVsFreeChunkRemove(a1, a2, a3 - 16LL * WORD2(v6));
      v7 = v11;
      v10 += WORD1(v12);
    }
  }
  v13 = a2 + 48;
  v14 = v7 + 16LL * v10;
  if ( v14 < a2 + 48 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
  {
    v15 = v14 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v14;
    if ( (v15 & 0xFF000000000000LL) == 0 )
    {
      RtlpHpVsFreeChunkRemove(a1, a2, v14);
      v10 += WORD1(v15);
    }
  }
  if ( (*(_BYTE *)(a1 + 176) & 1) != 0 )
  {
    v18 = v7 + 16LL * v10;
    if ( v18 < v13 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
    {
      v19 = v18 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v18;
      if ( (v19 & 0xFF000000000000LL) == 0 )
      {
        RtlpHpVsFreeChunkRemove(a1, a2, v18);
        v10 += WORD1(v19);
      }
    }
  }
  if ( v9 != v10 )
  {
    v17 = v7 + 16LL * v10;
    *(_WORD *)(v7 + 2) = WORD1(RtlpHpHeapGlobals) ^ v10 ^ WORD1(v7);
    if ( v17 < v13 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
      *(_WORD *)(v17 + 4) = WORD2(v17) ^ v10 ^ WORD2(RtlpHpHeapGlobals);
  }
  result = v7;
  *a4 = v10;
  return result;
}
