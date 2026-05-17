/*
 * XREFs of _Normalization__CanCombinableCharactersCombine@12 @ 0x4B3672A2
 * Callers:
 *     _NormBuffer__LastStartBasePair@4 @ 0x4B366EE6 (_NormBuffer__LastStartBasePair@4.c)
 *     _NormBuffer__RecheckStartCombinations@4 @ 0x4B366F14 (_NormBuffer__RecheckStartCombinations@4.c)
 *     _Normalization__CanCombineWithStartBase@16 @ 0x4B3673BD (_Normalization__CanCombineWithStartBase@16.c)
 *     _Normalization__CanCombineWithStartFirstPair@20 @ 0x4B3673EA (_Normalization__CanCombineWithStartFirstPair@20.c)
 *     _Normalization__IsNormalized@16 @ 0x4B3676FC (_Normalization__IsNormalized@16.c)
 *     _Normalization__NormalizeCharacter@16 @ 0x4B367DFE (_Normalization__NormalizeCharacter@16.c)
 * Callees:
 *     _IsSurrogate@4 @ 0x4B3652AA (_IsSurrogate@4.c)
 *     _GetSurrogateLow@4 @ 0x4B366B63 (_GetSurrogateLow@4.c)
 */

int __fastcall Normalization__CanCombinableCharactersCombine(_DWORD *a1, int a2, int a3)
{
  int v3; // edx
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // edx
  int v8; // ecx
  unsigned __int16 v10; // [esp+Ch] [ebp-Ch]

  if ( ((a2 & 0x1F0000) == 0) != ((a3 & 0x1F0000) == 0) )
    return 0;
  if ( !a1[12] )
    return 0;
  v3 = (a2 + 12541 * a3) % a1[12];
  v4 = a1[13];
  v5 = *(unsigned __int16 *)(v4 + 2 * (unsigned __int16)v3);
  v10 = *(_WORD *)(v4 + 2 * (unsigned __int16)v3 + 2);
  if ( (unsigned __int16)v5 >= v10 )
    return 0;
  v6 = a1[14];
  v7 = a2;
  while ( 1 )
  {
    v8 = *(unsigned __int16 *)(v6 + 2 * (unsigned __int16)v5);
    if ( v7 == v8 && a3 == *(unsigned __int16 *)(v6 + 2 * (unsigned __int16)v5 + 2) )
      return *(unsigned __int16 *)(v6 + 2 * (unsigned __int16)v5 + 4);
    if ( IsSurrogate(v8) )
      break;
LABEL_14:
    v5 += 3;
    if ( (unsigned __int16)v5 >= v10 )
      return 0;
  }
  if ( a2 <= 0xFFFF
    || *(_WORD *)(v6 + 2 * (unsigned __int16)v5) != (unsigned __int16)((a2 - 0x10000) / 1024) - 10240
    || *(_WORD *)(v6 + 2 * (unsigned __int16)v5 + 2) != (unsigned __int16)GetSurrogateLow((void *)a2)
    || *(_WORD *)(v6 + 2 * (unsigned __int16)v5 + 4) != (unsigned __int16)((a3 - 0x10000) / 1024) - 10240
    || *(_WORD *)(v6 + 2 * (unsigned __int16)v5 + 6) != (unsigned __int16)GetSurrogateLow((void *)a3) )
  {
    v7 = a2;
    v5 += 3;
    goto LABEL_14;
  }
  return *(unsigned __int16 *)(v6 + 2 * (unsigned __int16)v5 + 10)
       + ((*(unsigned __int16 *)(v6 + 2 * (unsigned __int16)v5 + 8) - 55287) << 10);
}
