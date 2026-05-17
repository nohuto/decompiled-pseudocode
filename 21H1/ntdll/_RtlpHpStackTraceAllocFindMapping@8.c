/*
 * XREFs of _RtlpHpStackTraceAllocFindMapping@8 @ 0x4B36E11F
 * Callers:
 *     _RtlpHpStackTraceAllocRemove@8 @ 0x4B36E197 (_RtlpHpStackTraceAllocRemove@8.c)
 *     _RtlpHpStackTraceHeapSerialize@8 @ 0x4B36E530 (_RtlpHpStackTraceHeapSerialize@8.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpStackTraceAllocFindMapping(int a1, int a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // ebx
  int v5; // ecx

  v2 = *(_DWORD *)(a1 + 12) >> 5;
  v3 = -1 << (*(_DWORD *)(a1 + 12) & 0x1F);
  v4 = a2 & v3;
  if ( v2 )
  {
    v5 = *(_DWORD *)(a1 + 16)
       + 4
       * (((unsigned __int8)((unsigned __int16)(HIWORD(a2) & HIWORD(v3)) >> 8)
         + 37 * ((unsigned __int8)(BYTE2(a2) & BYTE2(v3)) + 37 * (BYTE1(v4) + 37 * ((unsigned __int8)v4 + 11623883)))) & (v2 - 1));
    while ( 1 )
    {
      v5 = *(_DWORD *)v5;
      if ( (v5 & 1) != 0 )
        break;
      if ( v4 == (v3 & *(_DWORD *)(v5 + 4)) )
        return v5;
    }
  }
  return 0;
}
