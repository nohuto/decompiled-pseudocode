/*
 * XREFs of _RtlpNameprepAsciiRealWorker@40 @ 0x4B2E598C
 * Callers:
 *     _RtlpNameprepAsciiWorker@24 @ 0x4B2E58F1 (_RtlpNameprepAsciiWorker@24.c)
 * Callees:
 *     _RtlStringCchLengthW@12 @ 0x4B2D415E (_RtlStringCchLengthW@12.c)
 *     _RtlpValidateAsciiStd3AndLength@16 @ 0x4B2E5A9B (_RtlpValidateAsciiStd3AndLength@16.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _FindEmailAt@8 @ 0x4B3651DC (_FindEmailAt@8.c)
 *     _IsAnyDot@4 @ 0x4B365282 (_IsAnyDot@4.c)
 *     _punycode_encode@24 @ 0x4B365B90 (_punycode_encode@24.c)
 *     _RtlNormalizeString@20 @ 0x4B3685C0 (_RtlNormalizeString@20.c)
 */

int __fastcall RtlpNameprepAsciiRealWorker(
        int a1,
        void *a2,
        int a3,
        void *a4,
        int *a5,
        char a6,
        char *a7,
        int a8,
        const void *a9,
        int a10)
{
  _WORD *v11; // ecx
  int v12; // esi
  int v13; // edi
  char v14; // al
  char v15; // dl
  int result; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // edi
  char *v20; // edx
  void *v21; // edi
  int EmailAt; // eax
  bool v23; // zf
  bool v24; // zf
  int v25; // edx
  const void *v26; // ecx
  bool v27; // cc
  char *v28; // ecx
  int v29; // [esp+10h] [ebp-20h]
  int v30; // [esp+14h] [ebp-1Ch]
  int v31; // [esp+14h] [ebp-1Ch]
  BOOL v32; // [esp+18h] [ebp-18h]
  char v33; // [esp+1Ch] [ebp-14h]
  int v34; // [esp+20h] [ebp-10h] BYREF
  int v35; // [esp+24h] [ebp-Ch]
  void *Src; // [esp+28h] [ebp-8h]
  char v37; // [esp+2Fh] [ebp-1h]

  Src = a2;
  v11 = Src;
  if ( !Src )
    return -1073741811;
  v12 = a3;
  if ( a3 < -1 )
    return -1073741811;
  if ( !a5 )
    return -1073741811;
  v13 = *a5;
  v35 = v13;
  if ( v13 < 0 || v13 > 0 && !a4 )
    return -1073741811;
  if ( (a1 & 0xFFFFFFF8) != 0 )
    return -1073741811;
  v37 = 0;
  v29 = a1 & 1;
  v30 = a1 & 4;
  v14 = v30 != 0;
  v15 = (a1 & 2) != 0;
  v32 = v30 != 0;
  v33 = v15;
  if ( a3 == -1 )
  {
    if ( RtlStringCchLengthW((int)Src, 0x7FFFFFFFu, &v34) >= 0 )
    {
      v11 = Src;
      v12 = v34 + 1;
      v14 = v30 != 0;
      v15 = v33;
      goto LABEL_9;
    }
    return -1073741811;
  }
LABEL_9:
  if ( v12 > 0 )
  {
    v13 = v35;
    if ( !v11[v12 - 1] )
    {
      v37 = 1;
      --v12;
    }
  }
  if ( (unsigned __int8)RtlpValidateAsciiStd3AndLength(v14, v15) )
  {
    if ( !v12 )
      return -1073740010;
    if ( v37 )
      ++v12;
    if ( !a4 || !v13 )
      goto LABEL_20;
    if ( v12 <= v13 )
    {
      memcpy(a4, Src, 2 * v12);
LABEL_20:
      *a5 = v12;
      return 0;
    }
    goto LABEL_51;
  }
  v17 = 511;
  v18 = 0;
  v19 = 0;
  v20 = a7;
  if ( v30 )
  {
    v21 = Src;
    EmailAt = FindEmailAt(Src, v12);
    v31 = EmailAt;
    if ( !EmailAt )
      goto LABEL_50;
    v34 = 511;
    result = RtlNormalizeString(1, v21, EmailAt, a7, &v34);
    v19 = v34;
    v23 = result == 0;
    if ( result >= 0 )
    {
      if ( v34 )
      {
        v18 = v31;
        v20 = &a7[2 * v34];
        v17 = 511 - v34;
        goto LABEL_31;
      }
      v23 = result == 0;
    }
    if ( v23 || result == -1073741789 || result == -1073740009 )
      goto LABEL_50;
    v27 = v34 <= 0;
    goto LABEL_49;
  }
LABEL_31:
  if ( v18 < v12 )
  {
    v34 = v17;
    result = RtlNormalizeString(((v29 ^ 1) << 8) + 13, (char *)Src + 2 * v18, v12 - v18, v20, &v34);
    HIWORD(v18) = HIWORD(v34);
    v24 = result == 0;
    if ( result >= 0 )
    {
      if ( v34 )
      {
        v19 += v34;
        goto LABEL_35;
      }
      v24 = result == 0;
    }
    if ( v24 || result == -1073741789 || result == -1073740009 )
      goto LABEL_50;
    v27 = v34 <= 0;
LABEL_49:
    if ( !v27 )
      goto LABEL_50;
    goto LABEL_52;
  }
LABEL_35:
  if ( v19 > 0 )
  {
    v25 = *(unsigned __int16 *)&a7[2 * v19 - 2];
    if ( v25 == 46 )
    {
      LOWORD(v18) = *((_WORD *)Src + v12 - 1);
      if ( !(unsigned __int8)IsAnyDot(v18) )
        goto LABEL_50;
    }
    if ( !(_WORD)v25 )
      goto LABEL_50;
  }
  v34 = 515;
  result = punycode_encode(a9, &v34, v32, v33);
  v12 = v34;
  if ( v34 )
  {
    if ( a6 )
    {
      if ( !v37 )
      {
        v26 = a9;
        goto LABEL_59;
      }
      if ( v34 < 515 )
      {
        v26 = a9;
        *((_WORD *)a9 + v34) = 0;
        ++v12;
LABEL_59:
        if ( !a4 || !v35 )
          goto LABEL_20;
        if ( v12 <= v35 )
        {
          memcpy(a4, v26, 2 * v12);
          goto LABEL_20;
        }
        goto LABEL_51;
      }
      goto LABEL_50;
    }
    if ( !v37 )
    {
      v28 = a7;
      goto LABEL_67;
    }
    if ( v19 <= 511 )
    {
      v28 = a7;
      *(_WORD *)&a7[2 * v19++] = 0;
LABEL_67:
      if ( a4 && v35 )
      {
        if ( v19 > v35 )
        {
LABEL_51:
          result = -1073741789;
          goto LABEL_52;
        }
        memcpy(a4, v28, 2 * v19);
      }
      *a5 = v19;
      return 0;
    }
LABEL_50:
    result = -1073740010;
  }
LABEL_52:
  *a5 = 0;
  return result;
}
