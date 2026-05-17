/*
 * XREFs of _Normalization__GetFirstDecomposedCharPlane0@8 @ 0x4B367441
 * Callers:
 *     _NormBuffer__LastStartBase@4 @ 0x4B366ECA (_NormBuffer__LastStartBase@4.c)
 *     _Normalization__CanCombineWithStartBase@16 @ 0x4B3673BD (_Normalization__CanCombineWithStartBase@16.c)
 *     _Normalization__CanCombineWithStartFirstPair@20 @ 0x4B3673EA (_Normalization__CanCombineWithStartFirstPair@20.c)
 * Callees:
 *     <none>
 */

int __fastcall Normalization__GetFirstDecomposedCharPlane0(_DWORD *a1, int a2)
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
  return *(unsigned __int16 *)(a1[11] + 2 * (v3 & 0x1FFF));
}
