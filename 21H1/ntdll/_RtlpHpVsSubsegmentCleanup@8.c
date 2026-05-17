/*
 * XREFs of _RtlpHpVsSubsegmentCleanup@8 @ 0x4B37FB77
 * Callers:
 *     _RtlpHpHeapDestroy@4 @ 0x4B378C76 (_RtlpHpHeapDestroy@4.c)
 *     _RtlpHpVsChunkFree@20 @ 0x4B37EC44 (_RtlpHpVsChunkFree@20.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpVsSubsegmentCleanup(int a1, unsigned int a2)
{
  int v3; // esi
  int v4; // edx
  unsigned int v5; // edx
  int v6; // eax
  unsigned int v7; // ebx
  int result; // eax
  char v9; // [esp+13h] [ebp-1h]

  v3 = a2 ^ *(_DWORD *)a2;
  v4 = a2 ^ *(_DWORD *)(a2 + 4);
  if ( (v3 ^ *(_DWORD *)(v3 + 4)) != a2 || (v4 ^ *(_DWORD *)v4) != a2 )
    __fastfail(3u);
  *(_DWORD *)v4 = v3 ^ v4;
  *(_DWORD *)(v3 + 4) = v3 ^ v4;
  v5 = ~*(_DWORD *)(a2 + 8);
  v6 = (unsigned __int8)v5;
  v7 = ~*(_DWORD *)(a2 + 12);
  v5 >>= 8;
  v9 = RtlpBitsClearTotal[(unsigned __int8)v5] + RtlpBitsClearTotal[v6];
  result = a1 + 24;
  _InterlockedExchangeAdd(
    (volatile signed __int32 *)(a1 + 24),
    -((unsigned __int8)(v9 + RtlpBitsClearTotal[BYTE1(v5)] + RtlpBitsClearTotal[HIWORD(v5)])
    + (unsigned __int8)(RtlpBitsClearTotal[BYTE1(v7)]
                      + RtlpBitsClearTotal[(unsigned __int8)v7]
                      + RtlpBitsClearTotal[BYTE2(v7)]
                      + RtlpBitsClearTotal[HIBYTE(v7)])));
  return result;
}
