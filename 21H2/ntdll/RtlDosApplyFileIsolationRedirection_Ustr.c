/*
 * XREFs of RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001A9E0
 * Callers:
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     RtlDosSearchPath_Ustr @ 0x180019C40 (RtlDosSearchPath_Ustr.c)
 *     LdrpApplyFileNameRedirection @ 0x18001A514 (LdrpApplyFileNameRedirection.c)
 *     LdrpQuerySxSMUIFile @ 0x1800775AC (LdrpQuerySxSMUIFile.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001C1AC (RtlDetermineDosPathNameType_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001C2B4 (sxsisol_SearchActCtxForDllName.c)
 *     sxsisol_InitUnicodeStringBufferAroundUnicodeStrings @ 0x18001D2F4 (sxsisol_InitUnicodeStringBufferAroundUnicodeStrings.c)
 *     RtlFindCharInUnicodeString @ 0x18001D390 (RtlFindCharInUnicodeString.c)
 *     RtlGetFullPathName_UstrEx @ 0x18001D890 (RtlGetFullPathName_UstrEx.c)
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x18006EC20 (RtlMultiAppendUnicodeStringBuffer.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x1800830F4 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     memset @ 0x1800A4780 (memset.c)
 *     sxsisol_RespectDotLocal @ 0x1800DF750 (sxsisol_RespectDotLocal.c)
 *     RtlAssert @ 0x1800ED830 (RtlAssert.c)
 */

__int64 __fastcall RtlDosApplyFileIsolationRedirection_Ustr(
        int a1,
        __int128 *a2,
        _WORD *a3,
        __int64 a4,
        _OWORD *a5,
        __int64 a6,
        _DWORD *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  char v9; // r14
  __int128 *v14; // rdx
  __int64 v15; // r9
  char v16; // di
  int CharInUnicodeString; // ebx
  char v18; // di
  int v19; // r11d
  int v20; // r14d
  _DWORD *v21; // rdi
  _WORD *v22; // rax
  wchar_t *v23; // rcx
  __int128 v25; // xmm0
  unsigned __int16 v26; // cx
  unsigned __int16 v27; // ax
  _WORD v28[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v31[3]; // [rsp+64h] [rbp-9Ch] BYREF
  __int128 v32; // [rsp+70h] [rbp-90h] BYREF
  __int128 v33; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v34[4]; // [rsp+90h] [rbp-70h] BYREF
  int v35; // [rsp+94h] [rbp-6Ch]
  _DWORD *v36; // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h] BYREF
  int v38; // [rsp+A8h] [rbp-58h] BYREF
  char *v39; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING v40; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v42[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v43; // [rsp+F8h] [rbp-8h] BYREF
  wchar_t *v44; // [rsp+108h] [rbp+8h]
  wchar_t *v45; // [rsp+110h] [rbp+10h]
  __int64 v46; // [rsp+118h] [rbp+18h]
  __int64 v47; // [rsp+120h] [rbp+20h]
  _QWORD v48[12]; // [rsp+130h] [rbp+30h] BYREF
  _WORD v49[16]; // [rsp+190h] [rbp+90h] BYREF
  char v50; // [rsp+1B0h] [rbp+B0h] BYREF

  v9 = 0;
  v35 = a1;
  v36 = a7;
  LODWORD(v33) = 0;
  *((_QWORD *)&v33 + 1) = 0LL;
  v38 = 0x800000;
  v39 = &v50;
  v37 = 0LL;
  v28[0] = 0;
  v31[0] = 0;
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0LL;
  if ( a9 )
    *a9 = 520LL;
  if ( a5 )
    *a5 = 0LL;
  v44 = v49;
  v46 = 32LL;
  v45 = v49;
  v47 = 32LL;
  *((_QWORD *)&v43 + 1) = v49;
  v49[0] = 0;
  LODWORD(v43) = 0x200000;
  sxsisol_InitUnicodeStringBufferAroundUnicodeStrings(v48, a4, a5, a6);
  if ( (a1 & 0xFFFFFFFE) != 0 || !a2 )
    goto LABEL_80;
  if ( !a4 )
  {
    if ( a5 || !a8 )
      goto LABEL_13;
LABEL_80:
    CharInUnicodeString = -1073741811;
    goto LABEL_37;
  }
  if ( a5 && !v15 )
    goto LABEL_80;
LABEL_13:
  v29 = *a2;
  if ( !a3 || !*a3 )
    goto LABEL_20;
  v16 = 0;
  CharInUnicodeString = RtlFindCharInUnicodeString(1LL, &v29, &unk_18011D220, v34);
  if ( CharInUnicodeString >= 0 )
  {
    v16 = 1;
LABEL_17:
    CharInUnicodeString = 0;
    goto LABEL_18;
  }
  if ( CharInUnicodeString == -1073741275 )
    goto LABEL_17;
LABEL_18:
  if ( CharInUnicodeString < 0 )
    goto LABEL_37;
  if ( !v16 )
  {
    v42[1] = *(_OWORD *)a3;
    v42[0] = v29;
    CharInUnicodeString = RtlMultiAppendUnicodeStringBuffer(&v43, 2LL, v42);
    if ( CharInUnicodeString < 0 )
      goto LABEL_37;
    v9 = 1;
  }
LABEL_20:
  if ( v9 )
    v29 = v43;
  *(_QWORD *)&v32 = 0LL;
  v18 = 0;
  if ( *((_QWORD *)&v33 + 1) )
  {
    CharInUnicodeString = -1073741811;
  }
  else
  {
    v19 = RtlDetermineDosPathNameType_Ustr(&v29);
    v30 = v19;
    if ( ((v19 - 1) & 0xFFFFFFFA) != 0 || v19 == 5 )
      goto LABEL_25;
    CharInUnicodeString = RtlGetFullPathName_UstrEx(
                            (unsigned int)&v29,
                            (unsigned int)&v38,
                            (unsigned int)&v33,
                            (unsigned int)&v32,
                            0LL,
                            0LL,
                            (__int64)&v30,
                            0LL);
    if ( CharInUnicodeString >= 0 )
    {
      v14 = (__int128 *)v32;
      v25 = *(_OWORD *)v32;
      v32 = *(_OWORD *)v32;
      if ( v30 == 6 && *(_DWORD *)(*((_QWORD *)&v29 + 1) + 10LL) == 6029370 )
      {
        *((_QWORD *)&v32 + 1) += 8LL;
        WORD1(v29) -= 8;
        v26 = v29 - 8;
        *((_QWORD *)&v29 + 1) += 8LL;
        v27 = v32 - 8;
        LOWORD(v29) = v29 - 8;
        WORD1(v32) -= 8;
        LOWORD(v32) = v32 - 8;
        v25 = v32;
      }
      else
      {
        v26 = v29;
        v27 = v32;
      }
      if ( v26 > v27 )
      {
        v29 = v25;
        if ( v14 == &v33 )
          v18 = 1;
      }
LABEL_25:
      CharInUnicodeString = 0;
      if ( v18 )
        goto LABEL_28;
    }
  }
  if ( *((_QWORD *)&v33 + 1) )
  {
    NtdllpFreeStringRoutine(*((_QWORD *)&v33 + 1));
    v33 = 0LL;
  }
LABEL_28:
  if ( CharInUnicodeString < 0 )
    goto LABEL_38;
  if ( (v35 & 1) != 0 )
  {
    if ( NtCurrentPeb()->ProcessParameters )
    {
      if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x1000) != 0 )
      {
        CharInUnicodeString = sxsisol_RespectDotLocal(&v29, v48, v31);
        if ( CharInUnicodeString < 0 )
          goto LABEL_37;
      }
    }
  }
  v20 = v31[0];
  if ( (v31[0] & 1) != 0 )
  {
    v21 = v36;
  }
  else
  {
    if ( a4 || (LOBYTE(v14) = 1, a5) )
      LOBYTE(v14) = 0;
    v21 = v36;
    CharInUnicodeString = sxsisol_SearchActCtxForDllName(
                            (unsigned int)&v29,
                            (_DWORD)v14,
                            (unsigned int)&v37,
                            (_DWORD)v36,
                            (__int64)v48);
    if ( CharInUnicodeString < 0 )
      goto LABEL_37;
  }
  if ( !a5 && a4 && v48[1] != *(_QWORD *)(a4 + 8) )
  {
    CharInUnicodeString = -1073741789;
    goto LABEL_37;
  }
  if ( a8 )
  {
    CharInUnicodeString = RtlFindCharInUnicodeString(1LL, v48, &RtlDosPathSeperatorsString, v28);
    if ( CharInUnicodeString < 0 )
      goto LABEL_37;
    *a8 = ((unsigned __int64)v28[0] >> 1) + 1;
  }
  CharInUnicodeString = sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(v48);
  if ( CharInUnicodeString >= 0 )
  {
    if ( v21 )
      *v21 = v20;
    CharInUnicodeString = 0;
  }
  while ( 1 )
  {
LABEL_37:
    if ( CharInUnicodeString < 0 )
    {
LABEL_38:
      if ( LOBYTE(v48[10]) )
      {
        v22 = (_WORD *)v48[3];
        if ( v48[2] && v48[2] != v48[3] )
        {
          v40.Buffer = (wchar_t *)v48[2];
          RtlFreeAnsiString(&v40);
          v22 = (_WORD *)v48[3];
        }
        if ( v22 )
          *v22 = 0;
      }
      memset(v48, 0, 0x58uLL);
    }
    if ( *((_QWORD *)&v33 + 1) )
    {
      NtdllpFreeStringRoutine(*((_QWORD *)&v33 + 1));
      v33 = 0LL;
    }
    v23 = v45;
    if ( v44 )
    {
      if ( v44 != v45 )
      {
        UnicodeString.Buffer = v44;
        RtlFreeAnsiString(&UnicodeString);
        v23 = v45;
      }
      v46 = v47;
      v44 = v23;
    }
    *((_QWORD *)&v43 + 1) = v23;
    if ( v23 )
      *v23 = 0;
    WORD1(v43) = v47;
    LOWORD(v43) = 0;
    if ( CharInUnicodeString != -1072365567 )
      break;
    RtlAssert(
      "Internal error check failed",
      "minkernel\\ntdll\\sxsisol.cpp",
      434LL,
      "Status != STATUS_SXS_SECTION_NOT_FOUND");
    CharInUnicodeString = -1073741595;
  }
  return (unsigned int)CharInUnicodeString;
}
