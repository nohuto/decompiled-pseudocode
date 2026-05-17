/*
 * XREFs of _RtlpHpVsChunkAlignSplit@12 @ 0x4B37E7F6
 * Callers:
 *     _RtlpHpVsChunkFree@20 @ 0x4B37EC44 (_RtlpHpVsChunkFree@20.c)
 *     _RtlpHpVsContextAddSubsegment@8 @ 0x4B37F0C2 (_RtlpHpVsContextAddSubsegment@8.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall RtlpHpVsChunkAlignSplit(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // edx
  int v4; // ecx
  unsigned int v5; // esi
  int v6; // eax
  unsigned int v7; // ecx

  if ( ((a3 + 4103) & 0xFFFFF000) - a3 >= 8 * (((a3 ^ RtlpHpHeapGlobals ^ *(_DWORD *)a3) >> 1) & 0x7FFF) )
    return 0;
  v3 = ((a3 + 4103) & 0xFFFFF000) - 16;
  v4 = (int)(v3 - a3) >> 3;
  v5 = (((a3 ^ RtlpHpHeapGlobals ^ *(_DWORD *)a3) >> 1) & 0x7FFF) - v4;
  *(_DWORD *)a3 ^= ((unsigned __int16)a3 ^ (unsigned __int16)(RtlpHpHeapGlobals ^ *(_WORD *)a3 ^ (2 * v4))) & 0xFFFE;
  *(_DWORD *)v3 = 0;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  v6 = 2 * (v5 & 0x7FFF | ((v4 & 0x7FFF) << 15));
  *(_DWORD *)v3 = v6;
  v7 = v3 + 8 * v5;
  *(_DWORD *)v3 = v3 ^ RtlpHpHeapGlobals ^ v6;
  if ( v7 < a2 + 8 * ((unsigned int)*(unsigned __int16 *)(a2 + 20) + 3) )
    *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ v7 ^ RtlpHpHeapGlobals ^ (v5 << 16)) & 0x7FFF0000;
  return v3;
}
