/*
 * XREFs of _punycode_decode@32 @ 0x4B365668
 * Callers:
 *     _RtlpIdnToUnicodeWorker@28 @ 0x4B36535D (_RtlpIdnToUnicodeWorker@28.c)
 * Callees:
 *     __wcsnicmp @ 0x4B2F7AC0 (__wcsnicmp.c)
 *     _FindLabelEnd@12 @ 0x4B3651FC (_FindLabelEnd@12.c)
 *     _InsertChar@12 @ 0x4B36525A (_InsertChar@12.c)
 *     _IsSurrogate@4 @ 0x4B3652AA (_IsSurrogate@4.c)
 *     _ValidateStd3Range@4 @ 0x4B3655A6 (_ValidateStd3Range@4.c)
 *     _adapt@12 @ 0x4B3655DC (_adapt@12.c)
 *     _decode_digit@4 @ 0x4B365633 (_decode_digit@4.c)
 */

int __fastcall punycode_decode(
        wchar_t *a1,
        int a2,
        unsigned __int16 *a3,
        int *a4,
        char a5,
        char a6,
        _BYTE *a7,
        _DWORD *a8)
{
  int v8; // esi
  unsigned __int16 *v9; // edi
  unsigned int v10; // edx
  unsigned __int16 *v11; // ebx
  unsigned __int16 *v12; // esi
  wchar_t *LabelEnd; // ebx
  unsigned int v14; // esi
  const wchar_t *v15; // eax
  unsigned __int16 *v16; // edx
  unsigned __int16 *v17; // ecx
  unsigned __int16 v18; // ax
  bool v19; // cc
  int v20; // eax
  int v21; // eax
  unsigned __int16 *v22; // ecx
  int v23; // edx
  int v24; // esi
  int v25; // ecx
  int v26; // eax
  int v27; // esi
  int v28; // eax
  int v29; // esi
  int v30; // ecx
  __int16 *v31; // edx
  int v32; // edx
  int v33; // esi
  __int16 v34; // ax
  int v35; // edx
  unsigned __int16 *v36; // edx
  unsigned __int16 v37; // ax
  char v38; // al
  size_t v40; // [esp-4h] [ebp-60h]
  unsigned __int16 *v41; // [esp+Ch] [ebp-50h]
  int v43; // [esp+14h] [ebp-48h]
  int v44; // [esp+18h] [ebp-44h]
  wchar_t *v45; // [esp+28h] [ebp-34h]
  wchar_t *v46; // [esp+2Ch] [ebp-30h]
  unsigned __int16 *v47; // [esp+30h] [ebp-2Ch]
  int v48; // [esp+30h] [ebp-2Ch]
  int v49; // [esp+34h] [ebp-28h]
  int i; // [esp+34h] [ebp-28h]
  __int16 *v51; // [esp+34h] [ebp-28h]
  int v52; // [esp+38h] [ebp-24h]
  int v53; // [esp+38h] [ebp-24h]
  unsigned __int16 *v54; // [esp+3Ch] [ebp-20h]
  int v55; // [esp+40h] [ebp-1Ch]
  int v56; // [esp+44h] [ebp-18h]
  int v57; // [esp+48h] [ebp-14h]
  __int16 *v58; // [esp+4Ch] [ebp-10h]
  unsigned int v59; // [esp+50h] [ebp-Ch]
  int v60; // [esp+54h] [ebp-8h]
  int v61; // [esp+54h] [ebp-8h]
  wchar_t *String1; // [esp+58h] [ebp-4h]
  wchar_t *String1a; // [esp+58h] [ebp-4h]

  v8 = *a4;
  *a4 = 0;
  v46 = a1;
  *a7 = 1;
  if ( a2 > 0 )
  {
    v9 = a3;
    v10 = (unsigned int)&a1[a2];
    v58 = (__int16 *)a3;
    v45 = a1 - 1;
    v11 = a3;
    String1 = a1;
    v41 = a3;
    v59 = (unsigned int)&a3[v8];
    *a8 = a3 - 1;
    if ( (unsigned int)a1 < v10 )
    {
      v12 = v11;
      while ( 1 )
      {
        LabelEnd = FindLabelEnd(a1, v10, a5);
        if ( LabelEnd == String1 )
          break;
        v14 = (unsigned int)String1;
        if ( !a5
          && (a6 && (*String1 == 45 || LabelEnd > v46 && *(LabelEnd - 1) == 45)
           || (int)(((char *)LabelEnd - (char *)String1) & 0xFFFFFFFE) > 126) )
        {
          return -1073740010;
        }
        if ( (int)((v10 - (_DWORD)String1) & 0xFFFFFFFE) < 8 )
          goto LABEL_78;
        v15 = L"xl--";
        if ( !a5 )
          v15 = L"xn--";
        LODWORD(v40) = 4;
        if ( _wcsnicmp(String1, v15, v40) )
        {
LABEL_78:
          if ( (int)((v59 - (_DWORD)v9) & 0xFFFFFFFE) < (int)(((char *)LabelEnd - (char *)String1) & 0xFFFFFFFE) )
            return -1073740010;
          v36 = String1;
          if ( String1 < LabelEnd )
          {
            while ( a5 || (!a6 || ValidateStd3Range(*v36)) && *v36 >= 0x20u && *v36 != 127 )
            {
              v37 = *v36;
              if ( !*v36 || v37 >= 0x80u )
                break;
              *v9 = v37;
              ++v36;
              a3 = ++v9;
              if ( v36 >= LabelEnd )
                goto LABEL_88;
            }
            return -1073740010;
          }
        }
        else
        {
          v16 = LabelEnd - 1;
          v14 = (unsigned int)(String1 + 4);
          String1a = (wchar_t *)v14;
          *a7 = 0;
          if ( (unsigned int)(LabelEnd - 1) < v14 )
          {
LABEL_18:
            v16 = 0;
          }
          else
          {
            while ( *v16 != 45 )
            {
              if ( (unsigned int)--v16 < v14 )
                goto LABEL_18;
            }
          }
          if ( v16 == LabelEnd - 1 )
            return -1073740010;
          if ( v16 && (unsigned int)v16 > v14 )
          {
            v47 = (unsigned __int16 *)v14;
            v17 = (unsigned __int16 *)v14;
            v49 = (int)((int)v16 - v14) >> 1;
            do
            {
              if ( (unsigned int)v9 >= v59 )
                break;
              if ( !a5 )
              {
                if ( a6 )
                {
                  if ( !ValidateStd3Range(*v17) )
                    return -1073740010;
                  v17 = v47;
                }
                if ( *v17 < 0x20u || *v17 == 127 )
                  return -1073740010;
              }
              v18 = *v17;
              if ( !*v17 || v18 >= 0x80u )
                return -1073740010;
              if ( !a5 )
              {
                v19 = (unsigned __int16)(v18 - 65) <= 0x19u;
                v18 = *v17;
                if ( v19 )
                  v18 += 32;
              }
              ++v17;
              *v9++ = v18;
              a3 = v9;
              v47 = v17;
            }
            while ( v17 != v16 );
            if ( v17 != v16 )
              return -1073740010;
            v20 = v49;
          }
          else
          {
            v20 = 0;
          }
          if ( v20 <= 0 )
            v21 = 0;
          else
            v21 = 2 * v20 + 2;
          v22 = (unsigned __int16 *)(v21 + v14);
          v55 = 0;
          v54 = (unsigned __int16 *)(v21 + v14);
          v56 = 128;
          v23 = 72;
          v48 = 72;
          if ( v21 + v14 < (unsigned int)LabelEnd )
          {
            v24 = 0;
LABEL_44:
            v52 = 36;
            v43 = v24;
            v44 = v24;
            v57 = 1;
            for ( i = 36 - v23; v22 < LabelEnd; i += 36 )
            {
              ++v54;
              v25 = decode_digit(*v22);
              if ( v25 < 0 || v25 > (0x7FFFFFF - v24) / v57 )
                break;
              v24 += v57 * v25;
              v60 = v24;
              if ( v52 > v48 )
              {
                if ( v52 < v48 + 26 )
                  v26 = i;
                else
                  v26 = 26;
              }
              else
              {
                v26 = 1;
              }
              if ( v25 < v26 )
              {
                v27 = (((char *)v9 - (char *)v58) >> 1) - v55 + 1;
                v48 = adapt(v60 - v43, v27, v44 == 0);
                v28 = v60 / v27;
                v29 = v60 % v27;
                v61 = v29;
                if ( v28 > 0x7FFFFFF - v56 )
                  return -1073740010;
                v30 = v28 + v56;
                v56 = v30;
                if ( (unsigned int)(v30 - 128) > 0x10FF7F || v30 >= 55296 && v30 <= 57343 )
                  return -1073740010;
                if ( v55 <= 0 )
                {
                  v31 = &v58[v29];
                  v51 = v31;
                }
                else
                {
                  v31 = v58;
                  v53 = v29;
                  v51 = v58;
                  if ( v29 > 0 )
                  {
                    while ( v31 < (__int16 *)v9 )
                    {
                      if ( IsSurrogate(*v31) )
                        v32 += 2;
                      v31 = (__int16 *)(v32 + 2);
                      v51 = v31;
                      if ( --v53 <= 0 )
                      {
                        v30 = v56;
                        goto LABEL_68;
                      }
                    }
                    return -1073740010;
                  }
                }
LABEL_68:
                if ( v30 >= 0x10000 )
                {
                  if ( (unsigned int)v9 >= v59 - 2 || v31 > (__int16 *)v9 )
                    return -1073740010;
                  v33 = (v30 - 0x10000) % 1024;
                  InsertChar((v30 - 0x10000) / 1024 - 10240, v51, &a3);
                  ++v55;
                  v34 = v33 - 9216;
                  v29 = v61;
                  v31 = (__int16 *)(v35 + 2);
                  LOWORD(v30) = v34;
                }
                else if ( (unsigned int)v9 >= v59 || v31 > (__int16 *)v9 )
                {
                  return -1073740010;
                }
                InsertChar(v30, v31, &a3);
                v22 = v54;
                v24 = v29 + 1;
                v9 = a3;
                if ( v54 < LabelEnd )
                {
                  v23 = v48;
                  goto LABEL_44;
                }
                v14 = (unsigned int)String1a;
                goto LABEL_88;
              }
              if ( v57 > 0x7FFFFFF / (36 - v26) )
                return -1073740010;
              v52 += 36;
              v57 *= 36 - v26;
              v22 = v54;
            }
            return -1073740010;
          }
        }
LABEL_88:
        if ( !a5 && ((int)(((unsigned int)LabelEnd - v14) & 0xFFFFFFFE) > 126 || v9 == (unsigned __int16 *)v58) )
          return -1073740010;
        v10 = (unsigned int)&v46[a2];
        if ( LabelEnd != (wchar_t *)v10 )
        {
          if ( (unsigned int)v9 >= v59 )
            return -1073740010;
          *v9++ = *LabelEnd;
          a3 = v9;
        }
        v38 = a5;
        if ( a5 )
        {
          a5 = 0;
          v45 = LabelEnd;
          *a8 = (char *)v9 - (v10 != (_DWORD)LabelEnd ? 2 : 0);
          if ( LabelEnd == (wchar_t *)(v10 - 2) )
            return -1073740010;
          v38 = a5;
        }
        a1 = LabelEnd + 1;
        v12 = v9;
        String1 = LabelEnd + 1;
        v58 = (__int16 *)v9;
        if ( (unsigned int)LabelEnd >= v10 )
          goto LABEL_101;
      }
      v38 = a5;
      if ( a5 || LabelEnd != (wchar_t *)v10 )
        return -1073740010;
LABEL_101:
      if ( v12 != v41 && (v38 || (int)(v10 - (_DWORD)v45) >> 1 <= (*(_WORD *)(v10 - 2) == 46) + 255) )
      {
        *a4 = v12 - v41;
        return 0;
      }
    }
  }
  return -1073740010;
}
