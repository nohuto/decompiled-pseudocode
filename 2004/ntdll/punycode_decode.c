/*
 * XREFs of punycode_decode @ 0x18000C918
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x18000C7A0 (RtlpIdnToUnicodeWorker.c)
 * Callees:
 *     ValidateStd3Range @ 0x1800013F4 (ValidateStd3Range.c)
 *     adapt @ 0x180001908 (adapt.c)
 *     InsertChar @ 0x18000196C (InsertChar.c)
 *     FindLabelEnd @ 0x18000CE5C (FindLabelEnd.c)
 *     _wcsnicmp @ 0x18008DDB0 (_wcsnicmp.c)
 */

__int64 __fastcall punycode_decode(
        wchar_t *String1,
        int a2,
        unsigned __int16 *a3,
        int *a4,
        char a5,
        char a6,
        _BYTE *a7,
        _QWORD *a8)
{
  _BYTE *v8; // r13
  unsigned __int16 *v9; // rbx
  unsigned __int16 *v10; // r8
  unsigned __int16 *v11; // rbp
  wchar_t *v12; // r14
  unsigned __int16 *v13; // r12
  wchar_t *v14; // rsi
  char v15; // r15
  unsigned __int16 *v16; // r9
  unsigned __int64 LabelEnd; // rax
  signed __int64 v18; // r10
  unsigned __int64 v19; // r11
  wchar_t *v20; // rdi
  const wchar_t *v21; // rdx
  __int16 v22; // r9
  __int16 v24; // r11
  wchar_t *v25; // r9
  __int64 v26; // r10
  unsigned __int16 v27; // cx
  int v28; // eax
  int v29; // r13d
  int v30; // ebp
  int v31; // r11d
  wchar_t *v32; // r12
  int v33; // r10d
  int v34; // r9d
  int i; // r8d
  int v36; // ecx
  int v37; // eax
  __int64 v38; // r11
  __int64 v39; // r11
  __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // ebp
  unsigned __int16 *v43; // r10
  unsigned __int16 v44; // r11
  unsigned __int16 *v45; // rax
  __int16 v46; // r11
  __int64 v47; // r10
  int v48; // [rsp+20h] [rbp-78h]
  unsigned __int16 *v49; // [rsp+28h] [rbp-70h]
  unsigned __int64 v50; // [rsp+30h] [rbp-68h]
  wchar_t *v51; // [rsp+38h] [rbp-60h]
  unsigned __int16 *v52; // [rsp+40h] [rbp-58h]
  int v53; // [rsp+A8h] [rbp+10h]
  unsigned __int16 *v54; // [rsp+B0h] [rbp+18h] BYREF
  _DWORD *v55; // [rsp+B8h] [rbp+20h]

  v55 = a4;
  v54 = a3;
  v8 = a7;
  v9 = a3;
  v10 = (unsigned __int16 *)*a4;
  *a4 = 0;
  *v8 = 1;
  if ( a2 <= 0 )
    return 3221227286LL;
  v11 = &v9[(_QWORD)v10];
  v12 = String1;
  v13 = v9;
  v49 = v9;
  v52 = v9;
  v50 = (unsigned __int64)v11;
  v14 = &String1[a2];
  v51 = String1 - 1;
  *a8 = v9 - 1;
  if ( String1 >= v14 )
    return 3221227286LL;
  v15 = a5;
  v16 = v9;
  while ( 1 )
  {
    LOBYTE(v10) = v15;
    LabelEnd = FindLabelEnd(v12, v14, v10, v16);
    v20 = (wchar_t *)LabelEnd;
    if ( (wchar_t *)LabelEnd == v12 )
      break;
    if ( !v15
      && (a6 && (*v12 == 45 || LabelEnd > v19 && *(_WORD *)(LabelEnd - 2) == 45)
       || (__int64)((LabelEnd - (_QWORD)v12) & 0xFFFFFFFFFFFFFFFEuLL) > v18) )
    {
      return 3221227286LL;
    }
    if ( (__int64)(((char *)v14 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 )
    {
      v21 = L"xl--";
      if ( !v15 )
        v21 = L"xn--";
      if ( !wcsnicmp(v12, v21, 4uLL) )
      {
        *v8 = 0;
        v12 += 4;
        v10 = v20 - 1;
        if ( v20 - 1 < v12 )
        {
LABEL_88:
          v10 = 0LL;
        }
        else
        {
          while ( *v10 != 45 )
          {
            if ( --v10 < v12 )
              goto LABEL_88;
          }
        }
        if ( v10 == v20 - 1 )
          return 3221227286LL;
        if ( v10 && v10 > v12 )
        {
          v24 = 1;
          v25 = v12;
          v26 = v10 - v12;
          do
          {
            if ( v9 >= v11 )
              break;
            if ( !v15 && (a6 && !ValidateStd3Range(*v25) || *v25 < 0x20u || *v25 == 127) )
              return 3221227286LL;
            v27 = *v25;
            if ( (unsigned __int16)(*v25 - v24) > 0x7Eu )
              return 3221227286LL;
            if ( !v15 && (unsigned __int16)(v27 - 65) <= 0x19u )
              v27 += 32;
            *v9 = v27;
            ++v25;
            v54 = ++v9;
          }
          while ( v25 != v10 );
          if ( v25 != v10 )
            return 3221227286LL;
        }
        else
        {
          LODWORD(v26) = 0;
        }
        v53 = 0;
        v28 = v26 + 1;
        v29 = 128;
        if ( (int)v26 <= 0 )
          v28 = 0;
        v30 = 0;
        v31 = 72;
        v32 = &v12[v28];
        if ( v32 < v20 )
        {
LABEL_55:
          v33 = v30;
          v34 = 1;
          for ( i = 36; v32 < v20; i += 36 )
          {
            if ( (unsigned __int16)(*v32 - 48) <= 9u )
            {
              v36 = *v32 - 22;
            }
            else if ( (unsigned __int16)(*v32 - 97) > 0x19u )
            {
              v36 = (unsigned __int16)(*v32 - 65) > 0x19u ? -1 : *v32 - 65;
            }
            else
            {
              v36 = *v32 - 97;
            }
            ++v32;
            if ( v36 < 0 || v36 > (0x7FFFFFF - v30) / v34 )
              break;
            v30 += v34 * v36;
            if ( i <= v31 )
            {
              v37 = 1;
            }
            else if ( i < v31 + 26 )
            {
              v37 = i - v31;
            }
            else
            {
              v37 = 26;
            }
            if ( v36 < v37 )
            {
              v48 = adapt(v30 - v33, (unsigned int)(v9 - v49) - v53 + 1, v33 == 0);
              v39 = v38 - v53;
              v40 = v30 / (v39 + 1);
              v41 = v30 % (v39 + 1);
              v42 = v41;
              if ( v40 > 0x7FFFFFF - v29 )
                return 3221227286LL;
              v29 += v40;
              if ( (unsigned int)(v29 - 128) > 0x10FF7F || (unsigned int)(v29 - 55296) <= 0x7FF )
                return 3221227286LL;
              if ( v53 > 0 )
              {
                v43 = v49;
                if ( (int)v41 > 0 )
                {
                  while ( v43 < v9 )
                  {
                    v45 = v43 + 1;
                    LODWORD(v41) = v41 - 1;
                    if ( (unsigned __int16)(*v43 + 10240) > 0x7FFu )
                      v45 = v43;
                    v43 = v45 + 1;
                    if ( (int)v41 <= 0 )
                      goto LABEL_74;
                  }
                  return 3221227286LL;
                }
              }
              else
              {
                v43 = &v49[(int)v41];
              }
LABEL_74:
              if ( v29 >= 0x10000 )
              {
                if ( (unsigned __int64)v9 >= v50 - 2 || v43 > v9 )
                  return 3221227286LL;
                InsertChar((v29 - 0x10000) / 1024 - 10240, v43, &v54);
                ++v53;
                v44 = v46 - 9216;
                v43 = (unsigned __int16 *)(v47 + 2);
              }
              else
              {
                if ( (unsigned __int64)v9 >= v50 || v43 > v9 )
                  return 3221227286LL;
                v44 = v29;
              }
              InsertChar(v44, v43, &v54);
              v9 = v54;
              v30 = v42 + 1;
              if ( v32 >= v20 )
                goto LABEL_80;
              v31 = v48;
              goto LABEL_55;
            }
            if ( v34 > 0x7FFFFFF / (36 - v37) )
              return 3221227286LL;
            v34 *= 36 - v37;
          }
          return 3221227286LL;
        }
LABEL_80:
        v8 = a7;
        v11 = (unsigned __int16 *)v50;
        v13 = v49;
        goto LABEL_22;
      }
      LOWORD(v18) = 126;
    }
    if ( (__int64)(((char *)v11 - (char *)v9) & 0xFFFFFFFFFFFFFFFEuLL) < (__int64)(((char *)v20 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) )
      return 3221227286LL;
    v10 = v12;
    if ( v12 < v20 )
    {
      v22 = 1;
      while ( (v15 || (!a6 || ValidateStd3Range(*v10)) && *v10 >= 0x20u && *v10 != 127)
           && (unsigned __int16)(*v10 - v22) <= (unsigned __int16)v18 )
      {
        *v9 = *v10++;
        v54 = ++v9;
        if ( v10 >= v20 )
          goto LABEL_22;
      }
      return 3221227286LL;
    }
LABEL_22:
    if ( !v15 && ((__int64)(((char *)v20 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) > 126 || v9 == v13) )
      return 3221227286LL;
    if ( v20 != v14 )
    {
      if ( v9 >= v11 )
        return 3221227286LL;
      *v9++ = *v20;
      v54 = v9;
    }
    if ( v15 )
    {
      v15 = 0;
      v51 = v20;
      *a8 = (char *)v9 - (v14 != v20 ? 2 : 0);
      if ( v20 == v14 - 1 )
        return 3221227286LL;
    }
    v12 = v20 + 1;
    v49 = v9;
    v13 = v9;
    v16 = v9;
    if ( v20 >= v14 )
      goto LABEL_28;
  }
  if ( v15 || (wchar_t *)LabelEnd != v14 )
    return 3221227286LL;
LABEL_28:
  if ( v16 != v52 && v14 - v51 <= 256LL - (*(v14 - 1) != 46) )
  {
    *v55 = v16 - v52;
    return 0LL;
  }
  return 3221227286LL;
}
