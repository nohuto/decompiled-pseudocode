/*
 * XREFs of _RtlpHpVsChunkSetUnusedBytes@16 @ 0x4B37ED34
 * Callers:
 *     _RtlpHpVsContextAllocateInternal@24 @ 0x4B37F180 (_RtlpHpVsContextAllocateInternal@24.c)
 *     _RtlpHpVsContextGrowInPlace@20 @ 0x4B37F6C2 (_RtlpHpVsContextGrowInPlace@20.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpVsChunkSetUnusedBytes(int a1, int a2, int a3, int a4)
{
  unsigned __int16 v4; // si
  int result; // eax

  *(_BYTE *)(a1 + a2 - 1) = 0;
  v4 = *(_WORD *)(a1 + a2 - 2);
  if ( a3 == 1 )
    result = v4 | 0x8000;
  else
    result = v4 ^ ((unsigned __int16)a3 ^ v4) & 0x1FFF;
  *(_WORD *)(a1 + a2 - 2) = result;
  return result;
}
