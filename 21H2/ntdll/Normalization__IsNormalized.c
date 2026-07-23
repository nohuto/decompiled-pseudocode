/*
 * XREFs of Normalization__IsNormalized @ 0x180100368
 * Callers:
 *     RtlIsNormalizedString @ 0x180100850 (RtlIsNormalizedString.c)
 * Callees:
 *     CanComposeHangul @ 0x1800FF564 (CanComposeHangul.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x1800FFE90 (Normalization__CanCombinableCharactersCombine.c)
 *     Normalization__CanCombineWithStartBase @ 0x1800FFFF4 (Normalization__CanCombineWithStartBase.c)
 *     Normalization__CanCombineWithStartFirstPair @ 0x180100040 (Normalization__CanCombineWithStartFirstPair.c)
 *     Normalization__GetLastChar @ 0x180100134 (Normalization__GetLastChar.c)
 */

__int64 __fastcall Normalization__IsNormalized(__int64 a1, unsigned __int16 *a2, int a3, _BYTE *a4)
{
  int v4; // r15d
  unsigned __int16 *v5; // r12
  int v8; // ebx
  __int64 v9; // r9
  unsigned __int8 v10; // cl
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // edx
  unsigned __int8 v17; // r13
  unsigned __int8 v18; // r14
  unsigned __int8 v19; // si
  unsigned __int8 v20; // r15
  unsigned __int8 v21; // cl
  unsigned __int8 v22; // si
  unsigned int v23; // r15d
  int CanCombineWithStartFirstPair; // eax
  unsigned int v25; // eax
  int CanCombineWithStartBase; // eax
  unsigned __int8 v27; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int8 v28; // [rsp+31h] [rbp-1Fh]
  unsigned __int8 v29; // [rsp+32h] [rbp-1Eh]
  int v30; // [rsp+34h] [rbp-1Ch] BYREF
  int v31; // [rsp+38h] [rbp-18h] BYREF
  int v32; // [rsp+3Ch] [rbp-14h]
  int v33; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int16 *v34; // [rsp+48h] [rbp-8h] BYREF
  unsigned __int8 v35; // [rsp+98h] [rbp+48h] BYREF
  int v36; // [rsp+A0h] [rbp+50h]
  _BYTE *v37; // [rsp+A8h] [rbp+58h]

  v37 = a4;
  v36 = a3;
  v4 = a3;
  v5 = a2;
  if ( !a2 )
    return 3221225485LL;
  v30 = 0;
  v27 = 0;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  v34 = a2 - 1;
  v32 = 0;
  v29 = 0;
  v28 = 0;
  if ( a3 <= 0 )
    goto LABEL_93;
  do
  {
    v8 = *v5;
    if ( v8 < *(_DWORD *)(a1 + 28) )
      goto LABEL_92;
    v9 = *(_QWORD *)(a1 + 32);
    v10 = *(_BYTE *)(((unsigned __int64)*v5 >> 7) + v9);
    if ( !v10 || v10 == 0xFB && *(_BYTE *)(a1 + 113) )
      goto LABEL_92;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v11 = v10;
          if ( !v10 )
            goto LABEL_90;
          v12 = v10 - 251;
          if ( !v12 )
            goto LABEL_89;
          v13 = v12 - 1;
          if ( !v13 )
            return 3221227287LL;
          v14 = v13 - 1;
          if ( !v14 )
            goto LABEL_30;
          v15 = v14 - 1;
          if ( v15 )
            break;
          if ( v4 <= 1 )
            return 3221227287LL;
          ++v5;
          v36 = --v4;
          if ( (unsigned __int16)(*v5 + 9216) > 0x3FFu )
            return 3221227287LL;
          v8 = *v5 + ((v8 - 55287) << 10);
          v10 = *(_BYTE *)(((__int64)v8 >> 7) + v9);
        }
        if ( v15 != 1 )
        {
          v16 = *(unsigned __int8 *)((v8 & 0x7F) + (v11 << 7) + *(_QWORD *)(a1 + 40) - 128);
          if ( !(_BYTE)v16 )
            goto LABEL_90;
          v17 = v16 & 0xC0;
          v18 = v16 & 0x3F;
          if ( (v16 & 0x3F) == 0 || v18 == 63 )
          {
            switch ( v16 )
            {
              case 64:
                goto LABEL_88;
              case 127:
LABEL_89:
                if ( *(_BYTE *)(a1 + 113) )
                  goto LABEL_90;
                break;
              case 128:
                goto LABEL_88;
              case 191:
                goto LABEL_30;
              case 192:
                Normalization__GetLastChar(a1, (__int64)v5, &v34, (unsigned int *)&v30, &v27, &v35);
                if ( (v27 | v35) == 0x80 && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v30, v8) )
                  goto LABEL_30;
                goto LABEL_88;
              case 255:
                if ( !v8 && v4 <= 1 )
                  goto LABEL_93;
                break;
              default:
                goto LABEL_40;
            }
            return 3221227287LL;
          }
LABEL_40:
          if ( (v16 & 0x80) != 0 )
          {
            Normalization__GetLastChar(a1, (__int64)v5, &v34, (unsigned int *)&v30, &v27, &v35);
            v19 = v27;
            if ( !v27 || v27 == 63 )
            {
              v32 = v30;
              v29 = v27;
              v28 = v35;
              if ( ((v35 - 64) & 0xBF) == 0
                && v17 == 0xC0
                && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v30, v8) )
              {
                goto LABEL_30;
              }
              goto LABEL_63;
            }
            v20 = v35;
            if ( (v35 & 0xBF) != 0 )
            {
              if ( v27 > v18 )
                goto LABEL_30;
              if ( v17 != 0xC0 || v27 == v18 )
                goto LABEL_62;
              v21 = v28;
              v22 = v29;
              if ( (((v29 | v28) - 64) & 0xBF) != 0 && (v28 != 64 || v29 && v29 != 63) )
              {
                v23 = v32;
              }
              else
              {
                v23 = v32;
                if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v32, v8) )
                  goto LABEL_30;
                v21 = v28;
              }
              if ( v18 >= v22 || (v21 & 0xBF) != 0 || (unsigned __int8)(v22 - 1) > 0x3Du )
                goto LABEL_62;
              if ( v22 == *(_BYTE *)(a1 + 116) )
              {
                if ( v18 >= *(_BYTE *)(a1 + 114) )
                {
                  if ( v18 != *(_BYTE *)(a1 + 115) )
                  {
LABEL_62:
                    v4 = v36;
LABEL_63:
                    v27 = v18;
                    v35 = v17;
                    goto LABEL_91;
                  }
                  goto LABEL_60;
                }
              }
              else if ( v22 == *(_BYTE *)(a1 + 118) && v18 == *(_BYTE *)(a1 + 117) )
              {
LABEL_60:
                CanCombineWithStartFirstPair = Normalization__CanCombineWithStartFirstPair(a1, &v33, &v31, v23, v8);
                goto LABEL_61;
              }
              CanCombineWithStartFirstPair = Normalization__CanCombineWithStartBase(a1, &v31, v23, v8);
LABEL_61:
              if ( !CanCombineWithStartFirstPair )
                goto LABEL_62;
LABEL_30:
              *v37 = 0;
              return 0LL;
            }
            v31 = 0;
            v33 = 0;
            v25 = v30;
            v32 = v30;
            if ( v17 != 0xC0 )
              goto LABEL_80;
            if ( v35 == 64 )
            {
              if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v30, v8) )
                goto LABEL_30;
              v25 = v32;
            }
            if ( v19 <= v18 )
            {
LABEL_80:
              v29 = v19;
              v28 = v20;
              goto LABEL_62;
            }
            if ( v19 == *(_BYTE *)(a1 + 116) )
            {
              if ( v18 >= *(_BYTE *)(a1 + 114) )
              {
                if ( v18 != *(_BYTE *)(a1 + 115) )
                  goto LABEL_80;
                goto LABEL_75;
              }
            }
            else if ( v19 == *(_BYTE *)(a1 + 118) && v18 == *(_BYTE *)(a1 + 117) )
            {
LABEL_75:
              CanCombineWithStartBase = Normalization__CanCombineWithStartFirstPair(a1, &v33, &v31, v25, v8);
              goto LABEL_79;
            }
            CanCombineWithStartBase = Normalization__CanCombineWithStartBase(a1, &v31, v25, v8);
LABEL_79:
            if ( CanCombineWithStartBase )
              goto LABEL_30;
            goto LABEL_80;
          }
          v31 = 0;
LABEL_88:
          v32 = v8;
          v29 = v18;
          v28 = v17;
          goto LABEL_63;
        }
        if ( v8 >= 44032 )
          break;
        if ( v4 > 1 && CanComposeHangul((unsigned int)v8, v5[1]) )
          goto LABEL_30;
        if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || (unsigned int)(v8 - 4447) > 1 )
          goto LABEL_23;
LABEL_18:
        v10 = -5;
      }
      if ( v8 < 55204 )
        break;
      if ( (unsigned int)(v8 - 55216) > 0x16 && (unsigned int)(v8 - 55243) > 0x30 )
        goto LABEL_18;
LABEL_23:
      v10 = 0;
    }
    if ( *(_BYTE *)(a1 + 112) == 1 || v4 > 1 && CanComposeHangul((unsigned int)v8, v5[1]) )
      goto LABEL_30;
LABEL_90:
    v35 = 0;
    v27 = 0;
LABEL_91:
    v30 = v8;
    v34 = v5;
LABEL_92:
    --v4;
    ++v5;
    v36 = v4;
  }
  while ( v4 > 0 );
LABEL_93:
  *v37 = 1;
  return 0LL;
}
