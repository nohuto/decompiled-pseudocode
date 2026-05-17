/*
 * XREFs of _Normalization__NormalizeCharacter@16 @ 0x4B367DFE
 * Callers:
 *     _Normalization__AppendDecomposedChar@12 @ 0x4B3671DC (_Normalization__AppendDecomposedChar@12.c)
 *     _Normalization__Normalize@24 @ 0x4B367CF9 (_Normalization__Normalize@24.c)
 * Callees:
 *     _ComposeHangulLV@8 @ 0x4B366AF4 (_ComposeHangulLV@8.c)
 *     _ComposeHangulLVT@8 @ 0x4B366B1B (_ComposeHangulLVT@8.c)
 *     _GetHangulT@4 @ 0x4B366B46 (_GetHangulT@4.c)
 *     _IsHangulLV@4 @ 0x4B366B78 (_IsHangulLV@4.c)
 *     _IsHangulS@4 @ 0x4B366B99 (_IsHangulS@4.c)
 *     _NormBuffer__Append@8 @ 0x4B366BAB (_NormBuffer__Append@8.c)
 *     _NormBuffer__AppendEx@16 @ 0x4B366C71 (_NormBuffer__AppendEx@16.c)
 *     _NormBuffer__GetLastChar@4 @ 0x4B366D40 (_NormBuffer__GetLastChar@4.c)
 *     _NormBuffer__Insert@12 @ 0x4B366DBE (_NormBuffer__Insert@12.c)
 *     _NormBuffer__IsBlocked@8 @ 0x4B366E4E (_NormBuffer__IsBlocked@8.c)
 *     _NormBuffer__LastStartBase@4 @ 0x4B366ECA (_NormBuffer__LastStartBase@4.c)
 *     _NormBuffer__LastStartBasePair@4 @ 0x4B366EE6 (_NormBuffer__LastStartBasePair@4.c)
 *     _NormBuffer__RecheckStartCombinations@4 @ 0x4B366F14 (_NormBuffer__RecheckStartCombinations@4.c)
 *     _NormBuffer__ReplaceLastStartBase@16 @ 0x4B36702B (_NormBuffer__ReplaceLastStartBase@16.c)
 *     _NormBuffer__ReplaceLastStartBasePair@16 @ 0x4B367093 (_NormBuffer__ReplaceLastStartBasePair@16.c)
 *     _NormBuffer__RewindOutputCharacter@4 @ 0x4B3670E0 (_NormBuffer__RewindOutputCharacter@4.c)
 *     _NormBuffer__VerifyLastStart@4 @ 0x4B3671A4 (_NormBuffer__VerifyLastStart@4.c)
 *     _Normalization__AppendDecomposedChar@12 @ 0x4B3671DC (_Normalization__AppendDecomposedChar@12.c)
 *     _Normalization__CanCombinableCharactersCombine@12 @ 0x4B3672A2 (_Normalization__CanCombinableCharactersCombine@12.c)
 */

int __fastcall Normalization__NormalizeCharacter(int a1, int a2, unsigned __int8 a3, int a4)
{
  unsigned __int8 v6; // al
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned __int8 v12; // dl
  char v13; // cl
  int LastChar; // eax
  char v15; // al
  unsigned __int16 *v16; // ecx
  unsigned __int16 *v17; // eax
  int v18; // ecx
  _DWORD *v19; // ecx
  unsigned __int8 v20; // cl
  char v21; // al
  unsigned __int8 v22; // cl
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  bool v26; // zf
  int StartBasePair; // eax
  int v28; // eax
  char v29; // al
  int v30; // edx
  int StartBase; // eax
  int v32; // eax
  __int16 *v33; // eax
  int v34; // ecx
  int v35; // edx
  char v36; // al
  int v37; // eax
  int v39; // eax
  int v40; // eax
  char v41; // bl
  char v42; // al
  int v43; // eax
  char v44; // al
  char v45; // cl
  unsigned __int16 *v46; // ebx
  int v47; // ecx
  int v48; // ebx
  unsigned __int16 HangulT; // ax
  unsigned __int16 v50; // di
  void *v51; // ebx
  int v52; // eax
  int v53; // ebx
  unsigned __int16 *v54; // eax
  int v55; // edx
  int v56; // eax
  int CanCombinableCharactersCombine; // [esp+Ch] [ebp-10h]
  __int16 v58; // [esp+Ch] [ebp-10h]
  int v59; // [esp+Ch] [ebp-10h]
  int v60; // [esp+Ch] [ebp-10h]
  int v61; // [esp+Ch] [ebp-10h]
  int v62; // [esp+Ch] [ebp-10h]
  int v63; // [esp+Ch] [ebp-10h]
  unsigned __int16 *v64; // [esp+Ch] [ebp-10h]
  char v65; // [esp+12h] [ebp-Ah]
  char v66; // [esp+16h] [ebp-6h]
  char v67; // [esp+1Ah] [ebp-2h]
  unsigned __int8 v68; // [esp+1Bh] [ebp-1h]

LABEL_1:
  v6 = a3;
  while ( 2 )
  {
    if ( !v6 )
      goto LABEL_28;
    while ( 1 )
    {
      v7 = v6;
      v8 = v6 - 251;
      if ( !v8 )
      {
        if ( !*(_BYTE *)(a1 + 61) )
          return -1073740009;
        if ( !NormBuffer__Append(a4, a2) )
          return -1073741789;
        *(_DWORD *)(a4 + 44) = *(_DWORD *)(a4 + 20);
        *(_DWORD *)(a4 + 48) = a2;
        goto LABEL_110;
      }
      v9 = v8 - 1;
      if ( !v9 )
        return -1073740009;
      v10 = v9 - 1;
      if ( !v10 )
        return Normalization__AppendDecomposedChar((_DWORD *)a1, a2, a4);
      v11 = v10 - 1;
      if ( !v11 )
        break;
      if ( v11 != 1 )
      {
        v12 = *(_BYTE *)((a2 & 0x7F) + (v7 << 7) + *(_DWORD *)(a1 + 24) - 128);
        if ( !v12 )
        {
LABEL_97:
          if ( NormBuffer__AppendEx(a4, a2, 0, 0) )
          {
            *(_DWORD *)(a4 + 44) = *(_DWORD *)(a4 + 20);
            *(_DWORD *)(a4 + 48) = a2;
            *(_WORD *)(a4 + 52) = 0;
            return 0;
          }
          return -1073741789;
        }
        v13 = v12 & 0xC0;
        v67 = v12 & 0xC0;
        v66 = v12 & 0xC0;
        v68 = v12 & 0x3F;
        v65 = v12 & 0x3F;
        if ( (v12 & 0x3F) == 0 || (v12 & 0x3F) == 0x3F )
        {
          if ( v12 != 127 )
          {
            if ( v12 == 191 )
              return Normalization__AppendDecomposedChar((_DWORD *)a1, a2, a4);
            if ( v12 == 192 )
            {
              LastChar = NormBuffer__GetLastChar(a4);
              CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine((_DWORD *)a1, LastChar, a2);
              if ( CanCombinableCharactersCombine )
              {
                NormBuffer__RewindOutputCharacter(a4);
                a2 = CanCombinableCharactersCombine;
                goto LABEL_1;
              }
            }
            else if ( v12 == 255 && (a2 || *(_DWORD *)(a4 + 8) != *(_DWORD *)(a4 + 4)) )
            {
              return -1073740009;
            }
            goto LABEL_92;
          }
          if ( !*(_BYTE *)(a1 + 61) )
            return -1073740009;
          goto LABEL_97;
        }
        if ( !v13 || v13 == 64 )
        {
          if ( !NormBuffer__AppendEx(a4, a2, v65, v66) )
            return -1073741789;
          *(_DWORD *)(a4 + 44) = *(_DWORD *)(a4 + 20);
          *(_BYTE *)(a4 + 52) = v68;
          *(_DWORD *)(a4 + 48) = a2;
          *(_BYTE *)(a4 + 53) = v67;
          return 0;
        }
        NormBuffer__GetLastChar(a4);
        NormBuffer__VerifyLastStart(a4);
        if ( v67 == (char)0x80 || !*(_WORD *)(a4 + 52) || (*(_BYTE *)(a4 + 52) | *(_BYTE *)(a4 + 53)) == -64 )
        {
          NormBuffer__IsBlocked(v19, v68);
          goto LABEL_61;
        }
        v20 = *(_BYTE *)(a4 + 40);
        if ( !v20 || v20 == 63 )
        {
          v63 = Normalization__CanCombinableCharactersCombine((_DWORD *)a1, *(_DWORD *)(a4 + 48), a2);
          if ( v63 )
          {
            NormBuffer__RewindOutputCharacter(a4);
            a2 = v63;
            v45 = *(_BYTE *)((v63 & 0x7F)
                           + (*(unsigned __int8 *)((v63 >> 7) + *(_DWORD *)(a1 + 20)) << 7)
                           + *(_DWORD *)(a1 + 24)
                           - 128);
            v66 = v45 & 0xC0;
            v65 = v45 & 0x3F;
          }
          goto LABEL_92;
        }
        v21 = *(_BYTE *)(a4 + 41);
        if ( v21 )
        {
          if ( v21 != 64 )
          {
            if ( NormBuffer__IsBlocked((_DWORD *)a4, v68) )
              goto LABEL_61;
            v22 = *(_BYTE *)(a4 + 52);
            if ( !v22 || v22 == 63 || *(_BYTE *)(a4 + 53) == 64 )
            {
              v23 = Normalization__CanCombinableCharactersCombine((_DWORD *)a1, *(_DWORD *)(a4 + 48), a2);
              v58 = v23;
              if ( v23 )
              {
                v24 = *(_DWORD *)(a1 + 20);
                *(_DWORD *)(a4 + 48) = v23;
                LOBYTE(v24) = *(_BYTE *)((v23 & 0x7F)
                                       + (*(unsigned __int8 *)((v23 >> 7) + v24) << 7)
                                       + *(_DWORD *)(a1 + 24)
                                       - 128);
                v25 = *(_DWORD *)(a4 + 44);
                *(_BYTE *)(a4 + 52) = v24 & 0x3F;
                v26 = (v24 & 0xC0) == 64;
                *(_BYTE *)(a4 + 53) = v24 & 0xC0;
                *(_WORD *)(v25 - 2) = v58;
LABEL_82:
                if ( v26 )
                  NormBuffer__RecheckStartCombinations(a4);
                return 0;
              }
              v22 = *(_BYTE *)(a4 + 52);
              if ( !v22 || v22 == 63 )
                goto LABEL_61;
            }
            if ( v22 <= v68 )
              goto LABEL_61;
            if ( v22 == *(_BYTE *)(a1 + 64) )
            {
              if ( v68 >= *(_BYTE *)(a1 + 62) )
              {
                if ( v68 != *(_BYTE *)(a1 + 63) )
                  goto LABEL_61;
                goto LABEL_58;
              }
            }
            else if ( v22 == *(_BYTE *)(a1 + 66) && v68 == *(_BYTE *)(a1 + 65) )
            {
LABEL_58:
              StartBasePair = NormBuffer__LastStartBasePair((_DWORD *)a4);
              v28 = Normalization__CanCombinableCharactersCombine((_DWORD *)a1, StartBasePair, a2);
              v59 = v28;
              if ( v28 )
              {
                v29 = *(_BYTE *)((v28 & 0x7F)
                               + (*(unsigned __int8 *)((v28 >> 7) + *(_DWORD *)(a1 + 20)) << 7)
                               + *(_DWORD *)(a1 + 24)
                               - 128);
                v30 = v59;
LABEL_77:
                v41 = v29 & 0xC0;
                v42 = NormBuffer__ReplaceLastStartBasePair(a4, v30, v29 & 0x3F, v29 & 0xC0);
LABEL_80:
                if ( !v42 )
                  return -1073741789;
                v26 = v41 == 64;
                goto LABEL_82;
              }
LABEL_61:
              v33 = *(__int16 **)(a4 + 64);
              v34 = a4;
              v35 = a2;
              if ( v33 != *(__int16 **)(a4 + 20) )
              {
                v15 = NormBuffer__Insert((_DWORD *)a4, a2, v33);
                goto LABEL_94;
              }
              goto LABEL_93;
            }
            StartBase = NormBuffer__LastStartBase((_DWORD *)a4);
            v32 = Normalization__CanCombinableCharactersCombine((_DWORD *)a1, StartBase, a2);
            v60 = v32;
            if ( !v32 )
              goto LABEL_61;
LABEL_79:
            v44 = *(_BYTE *)((v32 & 0x7F)
                           + (*(unsigned __int8 *)((v32 >> 7) + *(_DWORD *)(a1 + 20)) << 7)
                           + *(_DWORD *)(a1 + 24)
                           - 128);
            v41 = v44 & 0xC0;
            v42 = NormBuffer__ReplaceLastStartBase(a4, v60, v44 & 0x3F, v44 & 0xC0);
            goto LABEL_80;
          }
          v61 = Normalization__CanCombinableCharactersCombine((_DWORD *)a1, *(_DWORD *)(a4 + 48), a2);
          if ( v61 )
          {
            NormBuffer__RewindOutputCharacter(a4);
            v36 = *(_BYTE *)((v61 & 0x7F)
                           + (*(unsigned __int8 *)((v61 >> 7) + *(_DWORD *)(a1 + 20)) << 7)
                           + *(_DWORD *)(a1 + 24)
                           - 128);
            if ( !NormBuffer__AppendEx(a4, v61, v36 & 0x3F, v36 & 0xC0) )
              return -1073741789;
            v37 = *(_DWORD *)(a4 + 36);
            *(_DWORD *)(a4 + 60) = 0;
            *(_DWORD *)(a4 + 56) = 0;
            *(_DWORD *)(a4 + 44) = v37 + 2;
            *(_DWORD *)(a4 + 48) = *(_DWORD *)(a4 + 32);
            *(_BYTE *)(a4 + 52) = *(_BYTE *)(a4 + 40);
            *(_BYTE *)(a4 + 53) = *(_BYTE *)(a4 + 41);
            return 0;
          }
          v20 = *(_BYTE *)(a4 + 40);
        }
        if ( v20 > v68 )
        {
          if ( v20 == *(_BYTE *)(a1 + 64) )
          {
            if ( v68 >= *(_BYTE *)(a1 + 62) )
            {
              if ( v68 != *(_BYTE *)(a1 + 63) )
                goto LABEL_92;
              goto LABEL_75;
            }
          }
          else if ( v20 == *(_BYTE *)(a1 + 66) && v68 == *(_BYTE *)(a1 + 65) )
          {
LABEL_75:
            v39 = NormBuffer__LastStartBasePair((_DWORD *)a4);
            v40 = Normalization__CanCombinableCharactersCombine((_DWORD *)a1, v39, a2);
            v62 = v40;
            if ( v40 )
            {
              v29 = *(_BYTE *)((v40 & 0x7F)
                             + (*(unsigned __int8 *)((v40 >> 7) + *(_DWORD *)(a1 + 20)) << 7)
                             + *(_DWORD *)(a1 + 24)
                             - 128);
              v30 = v62;
              goto LABEL_77;
            }
            goto LABEL_92;
          }
          v43 = NormBuffer__LastStartBase((_DWORD *)a4);
          v32 = Normalization__CanCombinableCharactersCombine((_DWORD *)a1, v43, a2);
          v60 = v32;
          if ( v32 )
            goto LABEL_79;
        }
LABEL_92:
        v34 = a4;
        v35 = a2;
LABEL_93:
        v15 = NormBuffer__AppendEx(v34, v35, v65, v66);
        goto LABEL_94;
      }
      if ( a2 >= 44032 )
      {
        if ( !IsHangulS((char *)a2) )
        {
          if ( a2 >= 55216 && a2 <= 55238 || a2 >= 55243 && a2 <= 55291 )
            goto LABEL_28;
          goto LABEL_21;
        }
        if ( *(_BYTE *)(a1 + 60) != 1 )
        {
          if ( IsHangulLV((void *)a2) )
          {
            v46 = *(unsigned __int16 **)(a4 + 8);
            if ( v46 != *(unsigned __int16 **)(a4 + 4) )
            {
              v47 = a2;
              *(_DWORD *)(a4 + 8) = v46 + 1;
              goto LABEL_120;
            }
          }
          goto LABEL_28;
        }
        if ( !NormBuffer__AppendEx(a4, (unsigned __int16)((a2 - 44032) / 588 + 4352), 0, 0) )
          return -1073741789;
        v48 = (unsigned __int16)((a2 - 44032) % 588 / 28 + 4449);
        if ( !NormBuffer__AppendEx(a4, v48, 0, 0) )
          return -1073741789;
        HangulT = GetHangulT((void *)a2);
        v50 = HangulT;
        if ( HangulT )
        {
          if ( !NormBuffer__AppendEx(a4, HangulT, 0, 0) )
            return -1073741789;
          LOWORD(v48) = v50;
        }
        *(_DWORD *)(a4 + 44) = *(_DWORD *)(a4 + 20);
        *(_DWORD *)(a4 + 48) = (unsigned __int16)v48;
LABEL_110:
        *(_WORD *)(a4 + 52) = 0;
        return 0;
      }
      if ( (unsigned int)(a2 - 4352) <= 0x12 )
      {
        v54 = *(unsigned __int16 **)(a4 + 8);
        v64 = v54;
        if ( v54 == *(unsigned __int16 **)(a4 + 4) )
          goto LABEL_28;
        v55 = *v54;
        v46 = v54 + 1;
        *(_DWORD *)(a4 + 8) = v54 + 1;
        v56 = ComposeHangulLV(a2, v55);
        if ( !v56 )
        {
          *(_DWORD *)(a4 + 8) = v64;
          goto LABEL_28;
        }
        a2 = v56;
        if ( v46 == *(unsigned __int16 **)(a4 + 4) )
        {
LABEL_28:
          v15 = NormBuffer__Append(a4, a2);
LABEL_94:
          if ( !v15 )
            return -1073741789;
          return 0;
        }
        *(_DWORD *)(a4 + 8) = v46 + 1;
        v47 = v56;
LABEL_120:
        v52 = ComposeHangulLVT(v47, *v46);
        if ( !v52 )
        {
          *(_DWORD *)(a4 + 8) = v46;
          goto LABEL_28;
        }
LABEL_115:
        a2 = v52;
        goto LABEL_28;
      }
      if ( (unsigned int)(a2 - 4449) <= 0x14 )
      {
        v53 = NormBuffer__GetLastChar(a4);
        if ( (unsigned int)(v53 - 4352) > 0x12 )
          goto LABEL_28;
        NormBuffer__RewindOutputCharacter(a4);
        v52 = ComposeHangulLV(v53, a2);
        goto LABEL_115;
      }
      if ( (unsigned int)(a2 - 4520) <= 0x1A )
      {
        v51 = (void *)NormBuffer__GetLastChar(a4);
        if ( !IsHangulLV(v51) )
          goto LABEL_28;
        NormBuffer__RewindOutputCharacter(a4);
        v52 = ComposeHangulLVT((int)v51, a2);
        goto LABEL_115;
      }
      if ( *(_DWORD *)a1 != 269 && *(_DWORD *)a1 != 13 || (unsigned int)(a2 - 4447) > 1 )
        goto LABEL_28;
LABEL_21:
      v6 = -5;
      a3 = -5;
    }
    v16 = *(unsigned __int16 **)(a4 + 8);
    if ( v16 != *(unsigned __int16 **)(a4 + 4) )
    {
      v17 = v16 + 1;
      v18 = *v16;
      *(_DWORD *)(a4 + 8) = v17;
      if ( (unsigned __int16)(v18 + 9216) <= 0x3FFu )
      {
        a2 = v18 + ((a2 - 55287) << 10);
        v6 = *(_BYTE *)((a2 >> 7) + *(_DWORD *)(a1 + 20));
        a3 = v6;
        continue;
      }
    }
    return -1073740009;
  }
}
