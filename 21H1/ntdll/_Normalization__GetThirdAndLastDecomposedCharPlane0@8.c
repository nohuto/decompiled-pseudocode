/*
 * XREFs of _Normalization__GetThirdAndLastDecomposedCharPlane0@8 @ 0x4B36761C
 * Callers:
 *     _NormBuffer__ReplaceLastStartBasePair@16 @ 0x4B367093 (_NormBuffer__ReplaceLastStartBasePair@16.c)
 * Callees:
 *     <none>
 */

int __fastcall Normalization__GetThirdAndLastDecomposedCharPlane0(_DWORD *a1, int a2)
{
  __int16 v3; // si
  int v4; // ecx
  unsigned __int16 i; // si
  unsigned __int16 v6; // ax

  v3 = *(_WORD *)(a1[9] + 2 * (a2 % a1[8]));
  if ( (v3 & 0xE000) == 0 )
  {
    v4 = a1[10];
    for ( i = 2 * v3; ; i += 2 )
    {
      v6 = *(_WORD *)(v4 + 2 * i);
      if ( !v6 || v6 == a2 )
        break;
    }
    v3 = *(_WORD *)(v4 + 2 * i + 2);
  }
  return *(unsigned __int16 *)(a1[11] + 2 * (unsigned __int16)((v3 & 0x1FFF) + 2));
}
