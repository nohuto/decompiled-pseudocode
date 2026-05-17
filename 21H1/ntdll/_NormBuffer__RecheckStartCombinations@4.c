/*
 * XREFs of _NormBuffer__RecheckStartCombinations@4 @ 0x4B366F14
 * Callers:
 *     _Normalization__NormalizeCharacter@16 @ 0x4B367DFE (_Normalization__NormalizeCharacter@16.c)
 * Callees:
 *     _NormBuffer__GetCurrentOutputChar@8 @ 0x4B366CF5 (_NormBuffer__GetCurrentOutputChar@8.c)
 *     _NormBuffer__RemoveCharacter@8 @ 0x4B366FEC (_NormBuffer__RemoveCharacter@8.c)
 *     _Normalization__CanCombinableCharactersCombine@12 @ 0x4B3672A2 (_Normalization__CanCombinableCharactersCombine@12.c)
 */

char __fastcall NormBuffer__RecheckStartCombinations(int a1)
{
  int v1; // esi
  bool v2; // zf
  int CanCombinableCharactersCombine; // eax
  char v4; // bh
  signed int CurrentOutputChar; // edi
  char v6; // bl
  char v7; // cl
  unsigned __int16 *v8; // edi
  int v10; // [esp+4h] [ebp-Ch]
  int v11; // [esp+8h] [ebp-8h]
  unsigned __int16 *v12; // [esp+Ch] [ebp-4h] BYREF

  v1 = a1;
  v2 = *(_BYTE *)(a1 + 53) == 64;
  CanCombinableCharactersCombine = *(_DWORD *)(a1 + 44);
  v12 = (unsigned __int16 *)CanCombinableCharactersCombine;
  if ( v2 )
  {
    v4 = 0;
    if ( CanCombinableCharactersCombine != *(_DWORD *)(a1 + 20) )
    {
      do
      {
        CurrentOutputChar = NormBuffer__GetCurrentOutputChar(a1, &v12);
        CanCombinableCharactersCombine = *(_DWORD *)(v1 + 68);
        v11 = *(_DWORD *)(CanCombinableCharactersCombine + 20);
        v10 = *(_DWORD *)(CanCombinableCharactersCombine + 24);
        a1 = CurrentOutputChar & 0x7F;
        LOBYTE(CanCombinableCharactersCombine) = *(_BYTE *)(a1
                                                          + v10
                                                          + (*(unsigned __int8 *)((CurrentOutputChar >> 7) + v11) << 7)
                                                          - 128);
        v6 = CanCombinableCharactersCombine & 0x3F;
        if ( (CanCombinableCharactersCombine & 0x3F) != v4 )
        {
          LOBYTE(CanCombinableCharactersCombine) = CanCombinableCharactersCombine & 0xC0;
          if ( (_BYTE)CanCombinableCharactersCombine == 0xC0 )
          {
            CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(CurrentOutputChar);
            if ( CanCombinableCharactersCombine )
            {
              *(_DWORD *)(v1 + 48) = CanCombinableCharactersCombine;
              v7 = *(_BYTE *)((CanCombinableCharactersCombine & 0x7F)
                            + v10
                            + (*(unsigned __int8 *)((CanCombinableCharactersCombine >> 7) + v11) << 7)
                            - 128);
              *(_WORD *)(*(_DWORD *)(v1 + 44) - 2) = CanCombinableCharactersCombine;
              v8 = v12;
              *(_BYTE *)(v1 + 53) = v7 & 0xC0;
              *(_BYTE *)(v1 + 52) = v7 & 0x3F;
              LOBYTE(CanCombinableCharactersCombine) = NormBuffer__RemoveCharacter(v1, v8);
              if ( *(_BYTE *)(v1 + 53) != 64 )
                return CanCombinableCharactersCombine;
              continue;
            }
          }
          v4 = v6;
        }
        v8 = ++v12;
      }
      while ( v8 != *(unsigned __int16 **)(v1 + 20) );
    }
  }
  return CanCombinableCharactersCombine;
}
