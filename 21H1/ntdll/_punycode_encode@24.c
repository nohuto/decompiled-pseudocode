/*
 * XREFs of _punycode_encode@24 @ 0x4B365B90
 * Callers:
 *     _RtlpNameprepAsciiRealWorker@40 @ 0x4B2E598C (_RtlpNameprepAsciiRealWorker@40.c)
 * Callees:
 *     __wcsnicmp @ 0x4B2F7AC0 (__wcsnicmp.c)
 *     _RtlStringCchCopyNExW@28 @ 0x4B3382E0 (_RtlStringCchCopyNExW@28.c)
 *     _FindLabelEnd@12 @ 0x4B3651FC (_FindLabelEnd@12.c)
 *     _GetUTF32@4 @ 0x4B365232 (_GetUTF32@4.c)
 *     _ValidateStd3Range@4 @ 0x4B3655A6 (_ValidateStd3Range@4.c)
 *     _adapt@12 @ 0x4B3655DC (_adapt@12.c)
 */

int __fastcall punycode_encode(wchar_t *a1, int a2, wchar_t *a3, int *a4, char a5, char a6)
{
  wchar_t *v6; // ebx
  unsigned int v7; // edi
  wchar_t *v8; // esi
  wchar_t *v9; // eax
  int v10; // ecx
  wchar_t *LabelEnd; // edi
  wchar_t *v12; // eax
  const wchar_t *v13; // ecx
  int v14; // esi
  wchar_t *v15; // edx
  unsigned int v16; // ecx
  char v17; // al
  wchar_t v18; // ax
  _WORD *v19; // esi
  _WORD *v20; // edi
  unsigned int i; // ecx
  const wchar_t *v22; // eax
  int v23; // edx
  int v24; // eax
  unsigned __int16 *v25; // esi
  int v26; // ebx
  int UTF32; // eax
  int v28; // edx
  unsigned __int16 *v29; // eax
  int v30; // eax
  int v31; // ecx
  bool v32; // zf
  int v33; // eax
  int v34; // edx
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  int v38; // et2
  int v39; // eax
  char v40; // dl
  bool v41; // cf
  wchar_t *v42; // ecx
  int result; // eax
  size_t v44; // [esp-4h] [ebp-60h]
  wchar_t *v45; // [esp+Ch] [ebp-50h]
  int v46; // [esp+10h] [ebp-4Ch]
  wchar_t *v47; // [esp+18h] [ebp-44h]
  int v48; // [esp+1Ch] [ebp-40h]
  wchar_t *v49; // [esp+20h] [ebp-3Ch]
  int v50; // [esp+20h] [ebp-3Ch]
  wchar_t *v51; // [esp+2Ch] [ebp-30h]
  unsigned int v52; // [esp+30h] [ebp-2Ch]
  int v53; // [esp+34h] [ebp-28h]
  unsigned __int16 *v54; // [esp+34h] [ebp-28h]
  int v55; // [esp+38h] [ebp-24h]
  int v56; // [esp+3Ch] [ebp-20h]
  int v57; // [esp+40h] [ebp-1Ch]
  int v58; // [esp+40h] [ebp-1Ch]
  char *v59; // [esp+44h] [ebp-18h]
  wchar_t *v60; // [esp+48h] [ebp-14h]
  int v61; // [esp+48h] [ebp-14h]
  unsigned int v62; // [esp+4Ch] [ebp-10h]
  int v63; // [esp+50h] [ebp-Ch]
  wchar_t *String1; // [esp+54h] [ebp-8h]
  int v65; // [esp+58h] [ebp-4h]
  int v66; // [esp+58h] [ebp-4h]

  String1 = a1;
  v51 = a1;
  v6 = a3;
  v7 = (unsigned int)&a1[a2];
  v47 = a3;
  v8 = a3;
  v59 = (char *)v7;
  v45 = a3;
  v62 = (unsigned int)&a3[*a4];
  if ( a2 <= 0 )
    goto LABEL_91;
  v9 = a3;
  if ( (unsigned int)a1 >= v7 )
  {
LABEL_84:
    v8 = v9;
    v42 = v9;
    if ( a5 )
    {
LABEL_86:
      if ( *(v6 - 1) != 64 )
      {
        *a4 = v42 - v45;
        return 0;
      }
      goto LABEL_91;
    }
LABEL_85:
    v42 = v8;
    if ( v8 - v47 > (*(v6 - 1) == 46) + 254 )
      goto LABEL_91;
    goto LABEL_86;
  }
  v52 = (unsigned int)a3;
  while ( 1 )
  {
    LabelEnd = FindLabelEnd(a1, v7, a5);
    v49 = LabelEnd;
    if ( LabelEnd == String1 )
    {
      if ( a5 || LabelEnd != (wchar_t *)v59 )
        goto LABEL_91;
      goto LABEL_85;
    }
    if ( a5 )
    {
      v12 = (wchar_t *)L"xl--";
    }
    else
    {
      if ( a6 )
      {
        v10 = 45;
        if ( *String1 == 45 || LabelEnd > v51 && *(LabelEnd - 1) == 45 )
          goto LABEL_91;
      }
      v12 = L"xn--";
    }
    if ( RtlStringCchCopyNExW(v6, (int)(v62 - (_DWORD)v6) >> 1, v12, (int)&a3, &a3, v10, v10) < 0 )
      goto LABEL_88;
    v13 = String1;
    v14 = 0;
    v6 = a3;
    v15 = String1;
    v57 = 0;
    v60 = a3;
    if ( String1 < LabelEnd )
    {
      do
      {
        v16 = *v15;
        if ( (unsigned __int16)v16 >= 0x80u )
        {
          if ( (unsigned __int16)(v16 + 10240) <= 0x3FFu )
            ++v15;
        }
        else
        {
          v17 = a5;
          if ( !a5 )
          {
            if ( a6 )
            {
              if ( !ValidateStd3Range(v16) )
                goto LABEL_91;
              v17 = a5;
            }
            if ( v16 < 0x20 || v16 == 127 )
              goto LABEL_91;
          }
          if ( !(_WORD)v16 )
            goto LABEL_91;
          if ( (unsigned int)v6 >= v62 )
            goto LABEL_88;
          if ( v17 || (unsigned __int16)(v16 - 65) > 0x19u )
            v18 = v16;
          else
            v18 = v16 + 32;
          *v6++ = v18;
          ++v14;
          v60 = v6;
          a3 = v6;
          v57 = v14;
        }
        ++v15;
      }
      while ( v15 < LabelEnd );
      v13 = String1;
    }
    v46 = v14;
    v48 = LabelEnd - v13;
    if ( v14 != v48 )
      break;
    if ( v52 < (unsigned int)(v6 - 4) )
    {
      v19 = (_WORD *)(v52 + 8);
      v20 = (_WORD *)v52;
      for ( i = (((unsigned int)v6 - v52 - 9) >> 1) + 1; i; --i )
        *v20++ = *v19++;
      LabelEnd = v49;
    }
    v6 -= 4;
    a3 = v6;
LABEL_76:
    v40 = a5;
    if ( !a5 && (int)(((unsigned int)v6 - v52) & 0xFFFFFFFE) > 126 )
      goto LABEL_91;
    if ( LabelEnd != (wchar_t *)v59 )
    {
      if ( (unsigned int)v6 >= v62 )
        goto LABEL_88;
      *v6++ = *LabelEnd;
      a3 = v6;
      if ( v40 )
      {
        if ( *LabelEnd == 64 )
        {
          v47 = v6;
          a5 = 0;
        }
      }
    }
    v41 = LabelEnd < (wchar_t *)v59;
    a1 = LabelEnd + 1;
    v7 = (unsigned int)v59;
    v9 = v6;
    String1 = a1;
    v8 = v6;
    v52 = (unsigned int)v6;
    if ( !v41 )
      goto LABEL_84;
  }
  if ( (int)((v59 - (char *)v13) & 0xFFFFFFFE) >= 8 )
  {
    v22 = L"xl--";
    if ( !a5 )
      v22 = L"xn--";
    LODWORD(v44) = 4;
    if ( _wcsnicmp(v13, v22, v44) )
    {
      v13 = String1;
      goto LABEL_44;
    }
LABEL_91:
    result = -1073740010;
    goto LABEL_92;
  }
LABEL_44:
  v56 = 0;
  if ( v14 > 0 )
  {
    if ( (unsigned int)v6 >= v62 )
      goto LABEL_88;
    *v6++ = 45;
    v60 = v6;
    a3 = v6;
  }
  v53 = 128;
  v23 = 0;
  v55 = 72;
  while ( 1 )
  {
    v66 = v23;
    if ( v14 >= v48 )
      goto LABEL_76;
    v24 = 0x7FFFFFF;
    v63 = 0x7FFFFFF;
    if ( v13 < LabelEnd )
    {
      v25 = (unsigned __int16 *)v13;
      v26 = 0x7FFFFFF;
      do
      {
        UTF32 = GetUTF32(v25);
        if ( UTF32 >= v53 && UTF32 < v26 )
          v26 = UTF32;
        v25 += (UTF32 >= 0x10000) + 1;
      }
      while ( v25 < LabelEnd );
      v14 = v57;
      v23 = v66;
      v63 = v26;
      v6 = v60;
      v24 = v63;
    }
    v28 = (v24 - v53) * (v14 - v56 + 1) + v23;
    v13 = String1;
    v65 = v28;
    v29 = String1;
    v54 = String1;
    if ( String1 < LabelEnd )
      break;
LABEL_74:
    v23 = v28 + 1;
    v53 = v63 + 1;
  }
  while ( 1 )
  {
    v30 = GetUTF32(v29);
    v28 = v65;
    v31 = v30;
    v50 = v30;
    v32 = v30 == v63;
    if ( v30 < v63 )
    {
      v28 = v65 + 1;
      v32 = v30 == v63;
      ++v65;
    }
    if ( v32 )
      break;
LABEL_72:
    v54 += (v31 >= 0x10000) + 1;
    v29 = v54;
    if ( v54 >= LabelEnd )
    {
      v13 = String1;
      goto LABEL_74;
    }
  }
  v33 = v28;
  v34 = 36;
  v61 = v33;
  v35 = v55;
  v36 = 36 - v55;
  while ( 2 )
  {
    if ( v34 <= v35 )
    {
      v37 = 1;
      goto LABEL_64;
    }
    if ( v34 < v35 + 26 )
    {
      v37 = v36;
      v58 = v36;
    }
    else
    {
      v37 = 26;
LABEL_64:
      v58 = v37;
    }
    if ( v61 >= v37 )
    {
      if ( (unsigned int)v6 >= v62 )
        goto LABEL_88;
      v38 = (v61 - v37) % (36 - v37);
      v61 = (v61 - v37) / (36 - v37);
      v35 = v55;
      *v6 = v58 + v38 + (v58 + v38 > 25 ? 22 : 97);
      v34 += 36;
      ++v6;
      v36 += 36;
      continue;
    }
    break;
  }
  if ( (unsigned int)v6 < v62 )
  {
    *v6++ = v61 + (v61 > 25 ? 22 : 97);
    v60 = v6;
    a3 = v6;
    v39 = adapt(v65, v14 - v56 + 1, v14 == v46);
    v31 = v50;
    v28 = 0;
    ++v14;
    v55 = v39;
    v65 = 0;
    v57 = v14;
    if ( v63 >= 0x10000 )
    {
      ++v14;
      ++v56;
      v57 = v14;
    }
    goto LABEL_72;
  }
LABEL_88:
  result = -1073741789;
LABEL_92:
  *a4 = 0;
  return result;
}
