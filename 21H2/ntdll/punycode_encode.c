/*
 * XREFs of punycode_encode @ 0x180082B44
 * Callers:
 *     RtlpNameprepAsciiRealWorker @ 0x18000D1EC (RtlpNameprepAsciiRealWorker.c)
 * Callees:
 *     ValidateStd3Range @ 0x1800013F4 (ValidateStd3Range.c)
 *     RtlStringCopyWorkerW @ 0x18000188C (RtlStringCopyWorkerW.c)
 *     adapt @ 0x180001908 (adapt.c)
 *     FindLabelEnd @ 0x18000CE5C (FindLabelEnd.c)
 *     _wcsnicmp @ 0x18008E4B0 (_wcsnicmp.c)
 *     GetUTF32 @ 0x1800FEF24 (GetUTF32.c)
 */

__int64 __fastcall punycode_encode(wchar_t *String1, int a2, wchar_t *a3, unsigned int *a4, char a5, char a6)
{
  wchar_t *v6; // rbx
  unsigned int *v7; // r13
  wchar_t *v8; // r15
  wchar_t *v9; // rbp
  wchar_t *v10; // r11
  wchar_t *v11; // r10
  __int64 v12; // rax
  unsigned int v13; // r9d
  unsigned __int64 v14; // r12
  char v15; // r14
  wchar_t *v16; // r9
  wchar_t *v17; // rdi
  wchar_t *LabelEnd; // rax
  wchar_t *v19; // r10
  __int16 v20; // r11
  wchar_t *v21; // rsi
  const wchar_t *v22; // r15
  int v23; // edx
  __int64 v24; // rcx
  int v25; // edi
  wchar_t *i; // r8
  int v27; // ecx
  __int64 v28; // r12
  char *v29; // rdx
  wchar_t *j; // rcx
  __int64 result; // rax
  int v32; // eax
  __int64 v33; // rdx
  int k; // r15d
  int v35; // r11d
  wchar_t *v36; // r10
  int UTF32; // eax
  __int64 v38; // r10
  __int64 v39; // rcx
  wchar_t *v40; // r13
  int m; // r9d
  int v42; // eax
  int v43; // r9d
  int v44; // ecx
  int v45; // r15d
  int n; // r10d
  int v47; // r8d
  int v48; // edx
  int v49; // ecx
  __int16 v50; // dx
  __int16 v51; // ax
  int v52; // eax
  __int64 v53; // rcx
  wchar_t *v54; // rcx
  int v55; // [rsp+30h] [rbp-88h]
  int v56; // [rsp+34h] [rbp-84h]
  unsigned __int64 v57; // [rsp+38h] [rbp-80h]
  wchar_t *v58; // [rsp+40h] [rbp-78h]
  wchar_t *v59; // [rsp+48h] [rbp-70h]
  wchar_t *v61; // [rsp+58h] [rbp-60h]
  __int64 v62; // [rsp+60h] [rbp-58h]
  unsigned int v64; // [rsp+C8h] [rbp+10h]
  __int64 v65; // [rsp+D0h] [rbp+18h] BYREF
  unsigned int *v66; // [rsp+D8h] [rbp+20h]

  v66 = a4;
  v6 = a3;
  v7 = a4;
  v61 = a3;
  v8 = String1;
  v9 = String1;
  v10 = a3;
  v11 = &String1[a2];
  v12 = (int)*a4;
  v13 = 0;
  v59 = v11;
  v14 = (unsigned __int64)&a3[v12];
  v57 = v14;
  if ( a2 <= 0 )
    goto LABEL_41;
  v15 = a5;
  v16 = a3;
  if ( String1 >= v11 )
  {
LABEL_102:
    v17 = v16;
    v54 = v16;
    v13 = 0;
    if ( !v15 )
      goto LABEL_106;
    goto LABEL_107;
  }
  v58 = a3;
  while ( 1 )
  {
    v17 = v6;
    LabelEnd = FindLabelEnd(v9, (unsigned __int64)v11, v15);
    v13 = 0;
    v21 = LabelEnd;
    if ( LabelEnd == v9 )
      break;
    if ( !v15 && a6 && (*v9 == v20 || LabelEnd > v8 && *(LabelEnd - 1) == v20) )
      goto LABEL_41;
    v22 = L"xl--";
    if ( !v15 )
      v22 = L"xn--";
    v23 = 0;
    v24 = (__int64)(v14 - (_QWORD)v6) >> 1;
    if ( (unsigned __int64)(v24 - 1) > 0x7FFFFFFE )
      v23 = -1073741811;
    if ( v23 < 0 )
    {
      if ( v24 )
        *v6 = 0;
    }
    else
    {
      v23 = 0;
      if ( !v24 )
      {
        if ( *v22 )
        {
          if ( !v6 )
            goto LABEL_45;
          v23 = -2147483643;
        }
LABEL_14:
        v6 = v17;
        goto LABEL_15;
      }
      v65 = 0LL;
      v23 = RtlStringCopyWorkerW(v6, v24, &v65, (__int64)v22, 4LL);
      v13 = 0;
      v17 = &v6[v65];
      if ( (int)(v23 + 0x80000000) < 0 || v23 == -2147483643 )
        goto LABEL_14;
    }
LABEL_15:
    if ( v23 < 0 )
      goto LABEL_45;
    v25 = 0;
    for ( i = v9; i < v21; ++i )
    {
      v27 = *i;
      if ( (unsigned __int16)v27 >= 0x80u )
      {
        if ( (unsigned __int16)(v27 + 10240) <= 0x3FFu )
          ++i;
      }
      else
      {
        if ( !v15 && (a6 != (_BYTE)v13 && !ValidateStd3Range(v27) || (unsigned __int16)v27 < 0x20u || (_WORD)v27 == 127)
          || !(_WORD)v27 )
        {
          goto LABEL_41;
        }
        if ( (unsigned __int64)v6 >= v14 )
          goto LABEL_45;
        if ( !v15 && (unsigned __int16)(v27 - 65) <= 0x19u )
          LOWORD(v27) = v27 + 32;
        *v6++ = v27;
        ++v25;
      }
    }
    v56 = v25;
    v28 = v21 - v9;
    v62 = v28;
    if ( v25 == v28 )
    {
      v29 = (char *)v58;
      v6 -= 4;
      for ( j = v58; j < v6; ++j )
        *j = j[4];
    }
    else
    {
      if ( (__int64)(((char *)v59 - (char *)v9) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 )
      {
        v32 = wcsnicmp(v9, v22, 4uLL);
        v13 = 0;
        if ( !v32 )
          goto LABEL_41;
      }
      v33 = v13;
      v64 = v13;
      if ( v25 > 0 )
      {
        if ( (unsigned __int64)v6 >= v57 )
        {
LABEL_45:
          result = 3221225507LL;
          goto LABEL_42;
        }
        *v6++ = 45;
      }
      LODWORD(v65) = 72;
      for ( k = 128; v25 < v28; k = v35 + 1 )
      {
        v35 = 0x7FFFFFF;
        v36 = v9;
        if ( v9 < v21 )
        {
          do
          {
            UTF32 = GetUTF32(v36, v33, i);
            if ( UTF32 >= k && UTF32 < v35 )
              v35 = UTF32;
            v39 = 4LL;
            if ( UTF32 < 0x10000 )
              v39 = 2LL;
            v36 = (wchar_t *)(v39 + v38);
          }
          while ( v36 < v21 );
          v28 = v62;
          v33 = v64;
        }
        v40 = v9;
        for ( m = (v35 - k) * (v25 - v33 + 1) + v13; v40 < v21; v40 = (wchar_t *)((char *)v40 + v53) )
        {
          v42 = GetUTF32(v40, v33, i);
          v44 = v43 + 1;
          v55 = v42;
          if ( v42 >= v35 )
            v44 = v43;
          m = v44;
          if ( v42 == v35 )
          {
            v45 = v44;
            for ( n = 36; ; n += 36 )
            {
              if ( n > (int)v65 )
                v47 = n < (int)v65 + 26 ? n - v65 : 26;
              else
                v47 = 1;
              if ( v45 < v47 )
                break;
              if ( (unsigned __int64)v6 >= v57 )
                goto LABEL_104;
              v48 = (v45 - v47) % (36 - v47);
              v45 = (v45 - v47) / (36 - v47);
              v49 = v48 + v47;
              v50 = 22;
              if ( v49 <= 25 )
                v50 = 97;
              *v6++ = v49 + v50;
            }
            if ( (unsigned __int64)v6 >= v57 )
            {
LABEL_104:
              v13 = 0;
              goto LABEL_45;
            }
            v51 = 22;
            if ( v45 <= 25 )
              v51 = 97;
            *v6++ = v45 + v51;
            v52 = adapt(m, v25 - v64 + 1, v25 == v56);
            v33 = v64;
            m = 0;
            ++v25;
            LODWORD(v65) = v52;
            v42 = v55;
            if ( v35 >= 0x10000 )
            {
              ++v25;
              v33 = ++v64;
            }
          }
          else
          {
            v33 = v64;
          }
          v53 = 4LL;
          if ( v42 < 0x10000 )
            v53 = 2LL;
        }
        v13 = m + 1;
      }
      v29 = (char *)v58;
      v13 = 0;
    }
    if ( !v15 && (__int64)(((char *)v6 - v29) & 0xFFFFFFFFFFFFFFFEuLL) > 126 )
      goto LABEL_41;
    v11 = v59;
    v14 = v57;
    if ( v21 != v59 )
    {
      if ( (unsigned __int64)v6 >= v57 )
        goto LABEL_45;
      *v6++ = *v21;
      if ( v15 )
      {
        if ( *v21 == 64 )
        {
          v15 = v13;
          v61 = v6;
        }
      }
    }
    v58 = v6;
    v9 = v21 + 1;
    v16 = v6;
    if ( v21 >= v59 )
    {
      v10 = a3;
      v7 = v66;
      goto LABEL_102;
    }
    v8 = String1;
  }
  if ( v15 || LabelEnd != v19 )
    goto LABEL_41;
  v10 = a3;
  v7 = v66;
LABEL_106:
  v54 = v17;
  if ( v17 - v61 <= 255LL - (*(v6 - 1) != 46) )
  {
LABEL_107:
    if ( *(v6 - 1) != 64 )
    {
      *v7 = v54 - v10;
      return 0LL;
    }
  }
LABEL_41:
  result = 3221227286LL;
LABEL_42:
  *v66 = v13;
  return result;
}
