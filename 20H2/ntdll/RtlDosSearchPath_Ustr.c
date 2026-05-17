/*
 * XREFs of RtlDosSearchPath_Ustr @ 0x180019C40
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlDoesFileExists_UstrEx @ 0x18001A1F0 (RtlDoesFileExists_UstrEx.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001A9E0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001C1AC (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlGetFullPathName_UstrEx @ 0x18001D890 (RtlGetFullPathName_UstrEx.c)
 *     RtlUnicodeStringCbCopyStringN @ 0x180068CBC (RtlUnicodeStringCbCopyStringN.c)
 *     RtlUnicodeStringCat @ 0x180068DA8 (RtlUnicodeStringCat.c)
 *     NtdllpAllocateStringRoutine @ 0x18006DBB0 (NtdllpAllocateStringRoutine.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 */

__int64 __fastcall RtlDosSearchPath_Ustr(
        int a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  char v10; // bl
  unsigned __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  unsigned __int16 *v15; // r11
  unsigned __int64 v16; // rdx
  wchar_t *StringRoutine; // rax
  __int64 v18; // rdx
  int FullPathName_Ustr; // ebx
  UNICODE_STRING *p_UnicodeString; // rcx
  int v22; // r9d
  int v23; // r8d
  unsigned __int16 v24; // bx
  unsigned __int64 v25; // rdx
  _WORD *v26; // rcx
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r9
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r13
  _WORD *v35; // rdi
  _WORD *v36; // r15
  _WORD *i; // rsi
  __int64 v38; // rbx
  bool v39; // zf
  unsigned __int16 v40; // bx
  __int64 v41; // r12
  unsigned __int64 v42; // rdx
  __int64 v43; // r8
  unsigned __int64 v44; // rax
  _WORD *v45; // rcx
  int v46; // eax
  unsigned __int64 v47; // rdx
  _WORD *v48; // rcx
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-B0h] BYREF
  int v50; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v51; // [rsp+68h] [rbp-98h]
  _QWORD *v52; // [rsp+70h] [rbp-90h]
  __int64 v53; // [rsp+78h] [rbp-88h]
  unsigned __int64 v54; // [rsp+80h] [rbp-80h]
  int v55; // [rsp+88h] [rbp-78h]
  __int64 v56; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 *v57; // [rsp+98h] [rbp-68h]
  _QWORD *v58; // [rsp+A0h] [rbp-60h]
  __int64 v59; // [rsp+A8h] [rbp-58h]
  _BYTE v60[528]; // [rsp+B0h] [rbp-50h] BYREF

  v54 = (unsigned __int64)a2;
  v10 = a1;
  v53 = a5;
  v12 = 0LL;
  v51 = a9;
  UnicodeString.Buffer = (wchar_t *)v60;
  v57 = a4;
  v59 = a6;
  v58 = a7;
  v52 = a8;
  LOWORD(v55) = 0;
  *(_DWORD *)&UnicodeString.Length = 34078720;
  if ( a7 )
    *a7 = 0LL;
  if ( a9 )
    *a9 = 0LL;
  if ( a8 )
    *a8 = 0LL;
  if ( a6 )
  {
    *(_DWORD *)a6 = 0;
    *(_QWORD *)(a6 + 8) = 0LL;
  }
  if ( (a1 & 0xFFFFFFF8) != 0 || !a2 || !a3 || a5 && a6 && !a7 )
  {
    FullPathName_Ustr = -1073741811;
    goto LABEL_27;
  }
  v13 = RtlDetermineDosPathNameType_Ustr(a3);
  v50 = v13;
  if ( (v10 & 2) != 0 && v13 == 5 && *a3 >= 4u )
  {
    v45 = (_WORD *)*((_QWORD *)a3 + 1);
    if ( *v45 == 46 )
    {
      if ( v45[1] == 92 || v45[1] == 47 )
      {
        v13 = 0;
        v50 = 0;
      }
      else if ( v45[1] == 46 && *a3 >= 6u && (v45[2] == 92 || v45[2] == 47) )
      {
        v50 = 0;
        goto LABEL_18;
      }
    }
  }
  if ( v13 == 5 )
  {
    if ( (v10 & 1) != 0 )
    {
      v56 = 0LL;
      v46 = RtlDosApplyFileIsolationRedirection_Ustr(
              1,
              (_DWORD)a3,
              (_DWORD)a4,
              v53,
              a6,
              (__int64)&v56,
              0LL,
              (__int64)v52,
              (__int64)v51);
      FullPathName_Ustr = v46;
      if ( v46 >= 0 )
      {
        if ( a7 )
          *a7 = v56;
LABEL_34:
        FullPathName_Ustr = 0;
        goto LABEL_27;
      }
      if ( v46 != -1072365560 )
        goto LABEL_27;
      v15 = (unsigned __int16 *)v54;
    }
    if ( a4 )
    {
      v24 = *a4;
      if ( *a3 )
      {
        v25 = *((_QWORD *)a3 + 1);
        v26 = (_WORD *)(v25 + 2 * ((unsigned __int64)*a3 >> 1));
        while ( (unsigned __int64)v26 > v25 )
        {
          if ( *--v26 == 47 || *v26 == 92 )
            break;
          if ( *v26 == 46 )
          {
            v57 = 0LL;
            v24 = 0;
            break;
          }
        }
      }
    }
    else
    {
      v24 = v55;
    }
    if ( *v15 )
    {
      v27 = *((_QWORD *)v15 + 1);
      v28 = v27 + 2 * ((unsigned __int64)*v15 >> 1);
      v29 = v28;
      if ( v28 > v27 )
      {
        do
        {
          v30 = v29 - 2;
          if ( *(_WORD *)(v29 - 2) == 59 )
          {
            v43 = (__int64)(v28 - v29 + 2) >> 1;
            LOWORD(v44) = v43 - 1;
            if ( (_WORD)v43 != 1 && *(_WORD *)(v28 - 2) != 92 && *(_WORD *)(v28 - 2) != 47 )
              LOWORD(v44) = (__int64)(v28 - v29 + 2) >> 1;
            v44 = (unsigned __int16)v44;
            v28 = v29 - 2;
            if ( (unsigned __int16)v44 <= v12 )
              v44 = v12;
            v12 = v44;
          }
          v29 -= 2LL;
        }
        while ( v30 > v27 );
        v15 = (unsigned __int16 *)v54;
      }
      v31 = (__int64)(v28 - v29) >> 1;
      if ( (_WORD)v31 && *(_WORD *)(v28 - 2) != 92 && *(_WORD *)(v28 - 2) != 47 )
        LOWORD(v31) = v31 + 1;
      v31 = (unsigned __int16)v31;
      if ( (unsigned __int16)v31 <= v12 )
        v31 = v12;
      v12 = 2 * v31;
    }
    v32 = v24;
    v33 = v24 + (unsigned __int64)*a3;
    v54 = v24;
    v34 = v33 + v12 + 2;
    if ( v34 <= 0xFFFE )
    {
      v35 = (_WORD *)*((_QWORD *)v15 + 1);
      v36 = &v35[(unsigned __int64)*v15 >> 1];
      if ( v35 < v36 )
      {
        while ( 1 )
        {
          for ( i = v35; i != v36; ++i )
          {
            if ( *i == 59 )
              break;
          }
          v38 = i - v35;
          v39 = 2 * (_WORD)v38 == 0;
          v40 = 2 * v38;
          v41 = v40;
          if ( !v39 && *(i - 1) != 92 && *(i - 1) != 47 )
            v40 += 2;
          v42 = v40 + *a3 + v32;
          if ( UnicodeString.MaximumLength < v42 + 2 )
          {
            if ( (_BYTE *)UnicodeString.Buffer != v60 || v42 > 0xFFFC )
              break;
            UnicodeString.MaximumLength = v34;
            UnicodeString.Buffer = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)v34);
            if ( !UnicodeString.Buffer )
              return (unsigned int)-1073741801;
          }
          UnicodeString.Length = 0;
          RtlUnicodeStringCbCopyStringN(&UnicodeString, v35, v41);
          if ( v40 && (_WORD)v41 != v40 )
          {
            UnicodeString.Buffer[(unsigned __int64)UnicodeString.Length >> 1] = 92;
            UnicodeString.Length += 2;
          }
          RtlUnicodeStringCat(&UnicodeString, a3);
          if ( v57 )
            RtlUnicodeStringCat(&UnicodeString, v57);
          if ( (unsigned __int64)UnicodeString.Length + 2 > UnicodeString.MaximumLength )
            break;
          UnicodeString.Buffer[(unsigned __int64)UnicodeString.Length >> 1] = 0;
          if ( (unsigned __int8)RtlDoesFileExists_UstrEx(&UnicodeString, 0LL) )
          {
            v22 = (int)v58;
            p_UnicodeString = &UnicodeString;
            v23 = v59;
            goto LABEL_33;
          }
          v35 = i + 1;
          if ( i == v36 )
            v35 = i;
          if ( v35 >= v36 )
            goto LABEL_26;
          v32 = v54;
        }
        FullPathName_Ustr = -1073741595;
        goto LABEL_27;
      }
      goto LABEL_26;
    }
    goto LABEL_109;
  }
LABEL_18:
  LOBYTE(v14) = 1;
  if ( (unsigned __int8)RtlDoesFileExists_UstrEx(a3, v14) )
  {
    LODWORD(p_UnicodeString) = (_DWORD)a3;
LABEL_32:
    v22 = (int)a7;
    v23 = a6;
LABEL_33:
    FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                          (_DWORD)p_UnicodeString,
                          v53,
                          v23,
                          v22,
                          (__int64)v52,
                          0LL,
                          (__int64)&v50,
                          (__int64)v51);
    if ( FullPathName_Ustr < 0 )
      goto LABEL_27;
    goto LABEL_34;
  }
  if ( a4 && *a4 )
  {
    if ( (v10 & 4) == 0 )
    {
      if ( *a3 )
      {
        v47 = *((_QWORD *)a3 + 1);
        v48 = (_WORD *)(v47 + 2 * ((unsigned __int64)*a3 >> 1));
        while ( (unsigned __int64)v48 > v47 )
        {
          if ( *--v48 == 92 || *v48 == 47 )
            break;
          if ( *v48 == 46 )
            goto LABEL_26;
        }
      }
    }
    v16 = *a4 + *a3 + 2LL;
    if ( v16 <= 0xFFFE )
    {
      if ( v16 > UnicodeString.MaximumLength )
      {
        UnicodeString.MaximumLength = *a4 + *a3 + 2;
        StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)v16);
        UnicodeString.Buffer = StringRoutine;
        if ( !StringRoutine )
          return (unsigned int)-1073741801;
      }
      else
      {
        StringRoutine = UnicodeString.Buffer;
      }
      memmove(StringRoutine, *((const void **)a3 + 1), *a3);
      memmove(&UnicodeString.Buffer[(unsigned __int64)*a3 >> 1], *((const void **)a4 + 1), *a4);
      LOBYTE(v18) = 1;
      UnicodeString.Buffer[(*a3 + (unsigned __int64)*a4) >> 1] = 0;
      UnicodeString.Length = *a3 + *a4;
      if ( !(unsigned __int8)RtlDoesFileExists_UstrEx(&UnicodeString, v18) )
        goto LABEL_26;
      p_UnicodeString = &UnicodeString;
      goto LABEL_32;
    }
LABEL_109:
    FullPathName_Ustr = -1073741562;
    goto LABEL_27;
  }
LABEL_26:
  FullPathName_Ustr = -1073741809;
LABEL_27:
  if ( UnicodeString.Buffer && (_BYTE *)UnicodeString.Buffer != v60 )
    RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)FullPathName_Ustr;
}
