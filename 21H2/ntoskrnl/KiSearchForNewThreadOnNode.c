/*
 * XREFs of KiSearchForNewThreadOnNode @ 0x14027847C
 * Callers:
 *     KiSearchForNewThread @ 0x140278228 (KiSearchForNewThread.c)
 * Callees:
 *     KiSearchForNewThreadOnProcessor @ 0x1403520C0 (KiSearchForNewThreadOnProcessor.c)
 */

__int64 __fastcall KiSearchForNewThreadOnNode(__int64 a1, _QWORD *a2)
{
  char v2; // r13
  int v5; // edx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 result; // rax
  unsigned __int64 v11; // rsi
  int v12; // r12d
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  int v17; // r12d
  unsigned __int64 v18; // rcx
  int v19; // [rsp+68h] [rbp+10h]

  v2 = *(_BYTE *)(a1 + 209);
  v5 = *(unsigned __int8 *)(a1 + 208);
  v19 = v5;
  v6 = a2[17];
  v7 = v6;
  v8 = a2[19];
  if ( a2 == *(_QWORD **)(a1 + 192) )
  {
    v6 ^= *(_QWORD *)(a1 + 200);
    v8 ^= *(_QWORD *)(a1 + 33856);
    if ( (KiCacheAwareScheduling & 2) != 0 )
      v7 &= *(_QWORD *)(a1 + 33896);
  }
  v9 = ~a2[3] & v6;
  while ( 1 )
  {
    if ( !v9 && !v8 )
      return 0LL;
    if ( (v8 & v7) != 0 )
      break;
LABEL_14:
    if ( (v9 & v7) != 0 )
    {
      v16 = __ROR8__(v9 & v7, v2);
      v17 = v5 << 6;
      do
      {
        _BitScanForward64(&v18, v16);
        v16 ^= 1LL << v18;
        result = KiSearchForNewThreadOnProcessor(
                   a1,
                   KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v17 + (((_BYTE)v18 + v2) & 0x3F)]],
                   0LL);
        if ( result )
          return result;
      }
      while ( v16 );
    }
    v5 = v19;
    v9 &= ~v7;
    v7 = a2[17];
  }
  v11 = __ROR8__(v8 & v7, v2);
  v12 = v5 << 6;
  while ( 1 )
  {
    _BitScanForward64(&v13, v11);
    v14 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v12 + ((v2 + (_BYTE)v13) & 0x3F)]];
    v15 = *(_QWORD *)(v14 + 33856);
    v8 &= ~v15;
    v11 &= __ROR8__(~v15, v2);
    result = KiSearchForNewThreadOnProcessor(a1, 0LL, *(_QWORD *)(v14 + 33864));
    if ( result )
      return result;
    if ( !v11 )
    {
      v5 = v19;
      goto LABEL_14;
    }
  }
}
