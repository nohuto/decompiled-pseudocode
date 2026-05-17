/*
 * XREFs of _RtlpHpExtrasAppend@28 @ 0x4B378332
 * Callers:
 *     _RtlpHpAllocateHeap@16 @ 0x4B37803E (_RtlpHpAllocateHeap@16.c)
 * Callees:
 *     _RtlpHpExtrasSetPresent@12 @ 0x4B378497 (_RtlpHpExtrasSetPresent@12.c)
 */

unsigned int __fastcall RtlpHpExtrasAppend(int a1, int a2, int a3, int a4, unsigned int a5, int a6, __int16 a7)
{
  _DWORD *v7; // eax
  unsigned int v8; // esi

  v7 = (_DWORD *)(a2 + a3);
  if ( (a6 & 0x10000000) != 0 )
  {
    *v7 = -1414812757;
    v7[1] = -1414812757;
  }
  v8 = 0;
  if ( (a6 & 0x20000F08) != 0 )
  {
    if ( (a6 & 0x10000000) != 0 )
      v7 += 2;
    v8 = ((unsigned int)v7 + 7) & 0xFFFFFFF8;
    *(_DWORD *)v8 = 0;
    *(_DWORD *)(v8 + 4) = 0;
    *(_BYTE *)(v8 + 2) = *(_BYTE *)(v8 + 2) & 0xF | (16 * (BYTE1(a6) & 0xFE));
    *(_BYTE *)(v8 + 3) = a5 >> 3;
    *(_WORD *)v8 = a7;
    RtlpHpExtrasSetPresent(a6);
  }
  return v8;
}
