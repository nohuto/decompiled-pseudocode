/*
 * XREFs of _Normalization__IsNormalized@16 @ 0x4B3676FC
 * Callers:
 *     _RtlIsNormalizedString@16 @ 0x4B368550 (_RtlIsNormalizedString@16.c)
 * Callees:
 *     _CanComposeHangul@8 @ 0x4B366ABF (_CanComposeHangul@8.c)
 *     _IsHangulS@4 @ 0x4B366B99 (_IsHangulS@4.c)
 *     _Normalization__CanCombinableCharactersCombine@12 @ 0x4B3672A2 (_Normalization__CanCombinableCharactersCombine@12.c)
 *     _Normalization__CanCombineWithStartBase@16 @ 0x4B3673BD (_Normalization__CanCombineWithStartBase@16.c)
 *     _Normalization__CanCombineWithStartFirstPair@20 @ 0x4B3673EA (_Normalization__CanCombineWithStartFirstPair@20.c)
 *     _Normalization__GetLastChar@24 @ 0x4B367495 (_Normalization__GetLastChar@24.c)
 */

int __fastcall Normalization__IsNormalized(int a1, unsigned __int16 *a2, int a3, _BYTE *a4)
{
  int v6; // esi
  int v7; // ebx
  unsigned __int8 v8; // al
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  unsigned __int8 v15; // al
  char v16; // bh
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned __int8 v22; // bl
  unsigned __int8 v23; // bh
  unsigned __int8 v24; // bh
  unsigned __int8 v25; // cl
  unsigned __int8 v26; // bl
  int CanCombineWithStartFirstPair; // eax
  int v28; // ecx
  int CanCombineWithStartBase; // eax
  unsigned __int8 v30; // al
  int v31; // [esp+8h] [ebp-20h] BYREF
  unsigned __int16 *v32; // [esp+Ch] [ebp-1Ch] BYREF
  int v33; // [esp+10h] [ebp-18h]
  int v34; // [esp+14h] [ebp-14h] BYREF
  int v35; // [esp+18h] [ebp-10h] BYREF
  unsigned __int16 *v36; // [esp+1Ch] [ebp-Ch]
  unsigned __int8 v37; // [esp+22h] [ebp-6h]
  unsigned __int8 v38; // [esp+23h] [ebp-5h]
  unsigned __int8 v39; // [esp+24h] [ebp-4h]
  unsigned __int8 v40; // [esp+25h] [ebp-3h] BYREF
  unsigned __int8 v41; // [esp+26h] [ebp-2h] BYREF
  unsigned __int8 v42; // [esp+27h] [ebp-1h]

  v36 = a2;
  if ( !a2 )
    return -1073741811;
  v35 = 0;
  v40 = 0;
  v41 = 0;
  v32 = a2 - 1;
  v33 = 0;
  v34 = 0;
  v31 = 0;
  v37 = 0;
  v38 = 0;
  if ( a3 <= 0 )
    goto LABEL_103;
  while ( 1 )
  {
    v6 = *a2;
    if ( v6 >= *(_DWORD *)(a1 + 16) )
    {
      v7 = *(_DWORD *)(a1 + 20);
      v8 = *(_BYTE *)(((unsigned int)v6 >> 7) + v7);
      if ( v8 )
      {
        if ( v8 != 0xFB || !*(_BYTE *)(a1 + 61) )
          break;
      }
    }
LABEL_102:
    v36 = ++a2;
    if ( --a3 <= 0 )
      goto LABEL_103;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = v8;
      if ( !v8 )
        goto LABEL_100;
      v10 = v8 - 251;
      if ( !v10 )
        goto LABEL_99;
      v11 = v10 - 1;
      if ( !v11 )
        return -1073740009;
      v12 = v11 - 1;
      if ( !v12 )
        goto LABEL_68;
      v13 = v12 - 1;
      if ( v13 )
        break;
      if ( a3 <= 1 )
        return -1073740009;
      v36 = ++a2;
      --a3;
      v14 = *a2;
      if ( (unsigned __int16)(v14 + 9216) > 0x3FFu )
        return -1073740009;
      v6 = v14 + ((v6 - 55287) << 10);
      v8 = *(_BYTE *)((v6 >> 7) + v7);
    }
    if ( v13 != 1 )
      break;
    if ( v6 < 44032 )
    {
      if ( a3 > 1 )
      {
        if ( CanComposeHangul(v6, a2[1]) )
          goto LABEL_68;
        a2 = v36;
      }
      if ( (*(_DWORD *)a1 == 269 || *(_DWORD *)a1 == 13) && (unsigned int)(v6 - 4447) <= 1 )
        goto LABEL_19;
LABEL_26:
      v8 = 0;
    }
    else
    {
      if ( IsHangulS((char *)v6) )
      {
        if ( *(_BYTE *)(a1 + 60) != 1 )
        {
          if ( a3 <= 1 )
            goto LABEL_100;
          if ( !CanComposeHangul(v6, a2[1]) )
          {
            a2 = v36;
            goto LABEL_100;
          }
        }
LABEL_68:
        *a4 = 0;
        return 0;
      }
      if ( v6 >= 55216 && v6 <= 55238 || (unsigned int)(v6 - 55243) <= 0x30 )
        goto LABEL_26;
LABEL_19:
      v8 = -5;
    }
  }
  v15 = *(_BYTE *)((v6 & 0x7F) + (v9 << 7) + *(_DWORD *)(a1 + 24) - 128);
  if ( !v15 )
    goto LABEL_100;
  v16 = v15 & 0xC0;
  v39 = v15 & 0x3F;
  v42 = v15 & 0xC0;
  if ( (v15 & 0x3F) != 0 && (v15 & 0x3F) != 0x3F )
  {
LABEL_43:
    if ( !v16 || v16 == 64 )
    {
      v34 = 0;
LABEL_98:
      v24 = v39;
      v30 = v42;
      v33 = v6;
      v37 = v39;
      v38 = v42;
      goto LABEL_88;
    }
    Normalization__GetLastChar(a1, (int)a2, &v32, (int)&v35, &v40, &v41);
    v22 = v40;
    if ( !v40 || v40 == 63 )
    {
      v33 = v35;
      v37 = v40;
      v38 = v41;
      if ( (v41 == 64 || v41 == 0x80)
        && v16 == -64
        && Normalization__CanCombinableCharactersCombine((_DWORD *)a1, v35, v6) )
      {
        goto LABEL_68;
      }
      goto LABEL_86;
    }
    v23 = v41;
    if ( v41 && v41 != 64 )
    {
      v24 = v39;
      if ( v40 > v39 )
        goto LABEL_68;
      if ( v42 != 0xC0 || v40 == v39 )
        goto LABEL_87;
      v25 = v38;
      v26 = v37;
      if ( (v37 | v38) == 64 || (v37 | v38) == 0x80 || v38 == 64 && (!v37 || v37 == 63) )
      {
        if ( Normalization__CanCombinableCharactersCombine((_DWORD *)a1, v33, v6) )
          goto LABEL_68;
        v25 = v38;
      }
      if ( v24 >= v26 || v25 != 64 && v25 || (unsigned __int8)(v26 - 1) > 0x3Du )
        goto LABEL_87;
      if ( v26 == *(_BYTE *)(a1 + 64) )
      {
        if ( v24 >= *(_BYTE *)(a1 + 62) )
        {
          if ( v24 == *(_BYTE *)(a1 + 63) )
          {
LABEL_66:
            CanCombineWithStartFirstPair = Normalization__CanCombineWithStartFirstPair(
                                             (_DWORD *)a1,
                                             &v31,
                                             &v34,
                                             v33,
                                             v6);
            goto LABEL_67;
          }
LABEL_87:
          a2 = v36;
          v30 = v42;
LABEL_88:
          v40 = v24;
          v41 = v30;
LABEL_101:
          v35 = v6;
          v32 = a2;
          goto LABEL_102;
        }
      }
      else if ( v26 == *(_BYTE *)(a1 + 66) && v24 == *(_BYTE *)(a1 + 65) )
      {
        goto LABEL_66;
      }
      CanCombineWithStartFirstPair = Normalization__CanCombineWithStartBase((_DWORD *)a1, &v34, v33, v6);
LABEL_67:
      if ( CanCombineWithStartFirstPair )
        goto LABEL_68;
      goto LABEL_87;
    }
    v34 = 0;
    v31 = 0;
    v28 = v35;
    v33 = v35;
    if ( v42 != 0xC0 )
      goto LABEL_85;
    if ( v41 == 64 )
    {
      if ( Normalization__CanCombinableCharactersCombine((_DWORD *)a1, v35, v6) )
        goto LABEL_68;
      v28 = v33;
    }
    if ( v22 <= v39 )
      goto LABEL_85;
    if ( v22 == *(_BYTE *)(a1 + 64) )
    {
      if ( v39 >= *(_BYTE *)(a1 + 62) )
      {
        if ( v39 == *(_BYTE *)(a1 + 63) )
        {
LABEL_80:
          CanCombineWithStartBase = Normalization__CanCombineWithStartFirstPair((_DWORD *)a1, &v31, &v34, v28, v6);
          goto LABEL_84;
        }
LABEL_85:
        v37 = v22;
        v38 = v23;
LABEL_86:
        v24 = v39;
        goto LABEL_87;
      }
    }
    else if ( v22 == *(_BYTE *)(a1 + 66) && v39 == *(_BYTE *)(a1 + 65) )
    {
      goto LABEL_80;
    }
    CanCombineWithStartBase = Normalization__CanCombineWithStartBase((_DWORD *)a1, &v34, v28, v6);
LABEL_84:
    if ( CanCombineWithStartBase )
      goto LABEL_68;
    goto LABEL_85;
  }
  v17 = v15 - 64;
  if ( !v17 )
    goto LABEL_98;
  v18 = v17 - 63;
  if ( !v18 )
  {
LABEL_99:
    if ( !*(_BYTE *)(a1 + 61) )
      return -1073740009;
LABEL_100:
    v41 = 0;
    v40 = 0;
    goto LABEL_101;
  }
  v19 = v18 - 1;
  if ( !v19 )
    goto LABEL_98;
  v20 = v19 - 63;
  if ( !v20 )
    goto LABEL_68;
  v21 = v20 - 1;
  if ( !v21 )
  {
    Normalization__GetLastChar(a1, (int)a2, &v32, (int)&v35, &v40, &v41);
    if ( (v40 | v41) == 0x80 && Normalization__CanCombinableCharactersCombine((_DWORD *)a1, v35, v6) )
      goto LABEL_68;
    a2 = v36;
    goto LABEL_98;
  }
  if ( v21 != 63 )
    goto LABEL_43;
  if ( v6 || a3 > 1 )
    return -1073740009;
LABEL_103:
  *a4 = 1;
  return 0;
}
