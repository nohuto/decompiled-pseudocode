/*
 * XREFs of KiSearchForNewThreadOnNode @ 0x140330948
 * Callers:
 *     KiSearchForNewThread @ 0x1403306F4 (KiSearchForNewThread.c)
 * Callees:
 *     KiSearchForNewThreadOnProcessor @ 0x140265FF0 (KiSearchForNewThreadOnProcessor.c)
 */

__int64 __fastcall KiSearchForNewThreadOnNode(unsigned __int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  char v4; // r13
  int v7; // edx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 result; // rax
  unsigned __int64 v13; // rsi
  int v14; // r12d
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  int v19; // r12d
  unsigned __int64 v20; // rcx
  int v21; // [rsp+68h] [rbp+10h]

  v4 = *(_BYTE *)(a1 + 209);
  v7 = *(unsigned __int8 *)(a1 + 208);
  v21 = v7;
  v8 = a2[17];
  v9 = v8;
  v10 = a2[19];
  if ( a2 == *(_QWORD **)(a1 + 192) )
  {
    v8 ^= *(_QWORD *)(a1 + 200);
    v10 ^= *(_QWORD *)(a1 + 33856);
    if ( (KiCacheAwareScheduling & 2) != 0 )
      v9 &= *(_QWORD *)(a1 + 33896);
  }
  v11 = ~a2[3] & v8;
  while ( 1 )
  {
    if ( !v11 && !v10 )
      return 0LL;
    if ( (v10 & v9) != 0 )
      break;
LABEL_14:
    if ( (v11 & v9) != 0 )
    {
      v18 = __ROR8__(v11 & v9, v4);
      v19 = v7 << 6;
      do
      {
        _BitScanForward64(&v20, v18);
        v18 ^= 1LL << v20;
        result = KiSearchForNewThreadOnProcessor(
                   a1,
                   KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v19 + (((_BYTE)v20 + v4) & 0x3F)]],
                   0LL,
                   a4);
        if ( result )
          return result;
      }
      while ( v18 );
    }
    v7 = v21;
    v11 &= ~v9;
    v9 = a2[17];
  }
  v13 = __ROR8__(v10 & v9, v4);
  v14 = v7 << 6;
  while ( 1 )
  {
    _BitScanForward64(&v15, v13);
    v16 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v14 + ((v4 + (_BYTE)v15) & 0x3F)]];
    v17 = *(_QWORD *)(v16 + 33856);
    v10 &= ~v17;
    v13 &= __ROR8__(~v17, v4);
    result = KiSearchForNewThreadOnProcessor(a1, 0LL, *(_QWORD *)(v16 + 33864), a4);
    if ( result )
      return result;
    if ( !v13 )
    {
      v7 = v21;
      goto LABEL_14;
    }
  }
}
