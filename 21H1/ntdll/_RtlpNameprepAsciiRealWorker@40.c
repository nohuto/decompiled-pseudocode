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

NTSTATUS __fastcall RtlpNameprepAsciiRealWorker(
        int a1,
        void *a2,
        LONG a3,
        void *a4,
        int *a5,
        char a6,
        PWSTR DestinationString,
        int a8,
        const void *a9,
        int a10)
{
  _WORD *v11; // ecx
  LONG v12; // esi
  int v13; // edi
  char v14; // al
  char v15; // dl
  NTSTATUS result; // eax
  LONG v17; // eax
  LONG v18; // ecx
  LONG v19; // edi
  WCHAR *v20; // edx
  const WCHAR *v21; // edi
  LONG EmailAt; // eax
  bool v23; // zf
  bool v24; // zf
  int v25; // edx
  const void *v26; // ecx
  bool v27; // cc
  PWSTR v28; // ecx
  size_t v29; // [esp-4h] [ebp-34h]
  int v30; // [esp+10h] [ebp-20h]
  int v31; // [esp+14h] [ebp-1Ch]
  LONG v32; // [esp+14h] [ebp-1Ch]
  BOOL v33; // [esp+18h] [ebp-18h]
  char v34; // [esp+1Ch] [ebp-14h]
  LONG DestinationStringLength; // [esp+20h] [ebp-10h] BYREF
  LONG v36; // [esp+24h] [ebp-Ch]
  void *Src; // [esp+28h] [ebp-8h]
  char v38; // [esp+2Fh] [ebp-1h]

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
  v36 = v13;
  if ( v13 < 0 || v13 > 0 && !a4 )
    return -1073741811;
  if ( (a1 & 0xFFFFFFF8) != 0 )
    return -1073741811;
  v38 = 0;
  v30 = a1 & 1;
  v31 = a1 & 4;
  v14 = v31 != 0;
  v15 = (a1 & 2) != 0;
  v33 = v31 != 0;
  v34 = v15;
  if ( a3 == -1 )
  {
    if ( RtlStringCchLengthW((int)Src, 0x7FFFFFFFu, &DestinationStringLength) >= 0 )
    {
      v11 = Src;
      v12 = DestinationStringLength + 1;
      v14 = v31 != 0;
      v15 = v34;
      goto LABEL_9;
    }
    return -1073741811;
  }
LABEL_9:
  if ( v12 > 0 )
  {
    v13 = v36;
    if ( !v11[v12 - 1] )
    {
      v38 = 1;
      --v12;
    }
  }
  if ( (unsigned __int8)RtlpValidateAsciiStd3AndLength(v14, v15) )
  {
    if ( !v12 )
      return -1073740010;
    if ( v38 )
      ++v12;
    if ( !a4 || !v13 )
      goto LABEL_20;
    if ( v12 <= v13 )
    {
      LODWORD(v29) = 2 * v12;
      memcpy(a4, Src, v29);
LABEL_20:
      *a5 = v12;
      return 0;
    }
    goto LABEL_51;
  }
  v17 = 511;
  v18 = 0;
  v19 = 0;
  v20 = DestinationString;
  if ( v31 )
  {
    v21 = (const WCHAR *)Src;
    EmailAt = FindEmailAt(Src, v12);
    v32 = EmailAt;
    if ( !EmailAt )
      goto LABEL_50;
    DestinationStringLength = 511;
    result = RtlNormalizeString(1u, v21, EmailAt, DestinationString, &DestinationStringLength);
    v19 = DestinationStringLength;
    v23 = result == 0;
    if ( result >= 0 )
    {
      if ( DestinationStringLength )
      {
        v18 = v32;
        v20 = &DestinationString[DestinationStringLength];
        v17 = 511 - DestinationStringLength;
        goto LABEL_31;
      }
      v23 = result == 0;
    }
    if ( v23 || result == -1073741789 || result == -1073740009 )
      goto LABEL_50;
    v27 = DestinationStringLength <= 0;
    goto LABEL_49;
  }
LABEL_31:
  if ( v18 < v12 )
  {
    DestinationStringLength = v17;
    result = RtlNormalizeString(((v30 ^ 1) << 8) + 13, (PCWSTR)Src + v18, v12 - v18, v20, &DestinationStringLength);
    HIWORD(v18) = HIWORD(DestinationStringLength);
    v24 = result == 0;
    if ( result >= 0 )
    {
      if ( DestinationStringLength )
      {
        v19 += DestinationStringLength;
        goto LABEL_35;
      }
      v24 = result == 0;
    }
    if ( v24 || result == -1073741789 || result == -1073740009 )
      goto LABEL_50;
    v27 = DestinationStringLength <= 0;
LABEL_49:
    if ( !v27 )
      goto LABEL_50;
    goto LABEL_52;
  }
LABEL_35:
  if ( v19 > 0 )
  {
    v25 = (unsigned __int16)DestinationString[v19 - 1];
    if ( v25 == 46 )
    {
      LOWORD(v18) = *((_WORD *)Src + v12 - 1);
      if ( !(unsigned __int8)IsAnyDot(v18) )
        goto LABEL_50;
    }
    if ( !(_WORD)v25 )
      goto LABEL_50;
  }
  DestinationStringLength = 515;
  result = punycode_encode(a9, &DestinationStringLength, v33, v34);
  v12 = DestinationStringLength;
  if ( DestinationStringLength )
  {
    if ( a6 )
    {
      if ( !v38 )
      {
        v26 = a9;
        goto LABEL_59;
      }
      if ( DestinationStringLength < 515 )
      {
        v26 = a9;
        *((_WORD *)a9 + DestinationStringLength) = 0;
        ++v12;
LABEL_59:
        if ( !a4 || !v36 )
          goto LABEL_20;
        if ( v12 <= v36 )
        {
          LODWORD(v29) = 2 * v12;
          memcpy(a4, v26, v29);
          goto LABEL_20;
        }
        goto LABEL_51;
      }
      goto LABEL_50;
    }
    if ( !v38 )
    {
      v28 = DestinationString;
      goto LABEL_67;
    }
    if ( v19 <= 511 )
    {
      v28 = DestinationString;
      DestinationString[v19++] = 0;
LABEL_67:
      if ( a4 && v36 )
      {
        if ( v19 > v36 )
        {
LABEL_51:
          result = -1073741789;
          goto LABEL_52;
        }
        LODWORD(v29) = 2 * v19;
        memcpy(a4, v28, v29);
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
