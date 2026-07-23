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
 *     memset @ 0x1800A4740 (memset.c)
 *     sxsisol_RespectDotLocal @ 0x1800DF710 (sxsisol_RespectDotLocal.c)
 *     RtlAssert @ 0x1800ED7F0 (RtlAssert.c)
 */

NTSTATUS __cdecl RtlDosApplyFileIsolationRedirection_Ustr(
        ULONG Flags,
        PUNICODE_STRING OriginalName,
        PUNICODE_STRING Extension,
        PUNICODE_STRING StaticString,
        PUNICODE_STRING DynamicString,
        PUNICODE_STRING *NewName,
        PULONG NewFlags,
        PSIZE_T FileNameSize,
        PSIZE_T RequiredLength)
{
  char v9; // r14
  _UNICODE_STRING *v14; // rdx
  __int64 v15; // r9
  char v16; // di
  int CharInUnicodeString; // ebx
  char v18; // di
  RTL_PATH_TYPE v19; // r11d
  ULONG v20; // r14d
  PULONG v21; // rdi
  wchar_t *Buffer; // rax
  wchar_t *v23; // rcx
  _UNICODE_STRING v25; // xmm0
  unsigned __int16 Length; // cx
  unsigned __int16 v27; // ax
  USHORT v28[8]; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING StringToSearch; // [rsp+50h] [rbp-B0h] BYREF
  RTL_PATH_TYPE InputPathType; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v31[3]; // [rsp+64h] [rbp-9Ch] BYREF
  PUNICODE_STRING StringUsed[2]; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING v33; // [rsp+80h] [rbp-80h] BYREF
  USHORT NonInclusivePrefixLength[2]; // [rsp+90h] [rbp-70h] BYREF
  ULONG v35; // [rsp+94h] [rbp-6Ch]
  PULONG v36; // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h] BYREF
  _UNICODE_STRING StaticStringa; // [rsp+A8h] [rbp-58h] BYREF
  _UNICODE_STRING v39; // [rsp+B8h] [rbp-48h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v41[2]; // [rsp+D8h] [rbp-28h] BYREF
  _UNICODE_STRING v42; // [rsp+F8h] [rbp-8h] BYREF
  wchar_t *v43; // [rsp+108h] [rbp+8h]
  wchar_t *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  __int64 v46; // [rsp+120h] [rbp+20h]
  _UNICODE_STRING v47[6]; // [rsp+130h] [rbp+30h] BYREF
  _WORD v48[16]; // [rsp+190h] [rbp+90h] BYREF
  char v49; // [rsp+1B0h] [rbp+B0h] BYREF

  v9 = 0;
  v35 = Flags;
  v36 = NewFlags;
  *(_DWORD *)&v33.Length = 0;
  v33.Buffer = 0LL;
  *(_DWORD *)&StaticStringa.Length = 0x800000;
  StaticStringa.Buffer = (wchar_t *)&v49;
  v37 = 0LL;
  v28[0] = 0;
  v31[0] = 0;
  if ( NewFlags )
    *NewFlags = 0;
  if ( FileNameSize )
    *FileNameSize = 0LL;
  if ( RequiredLength )
    *RequiredLength = 520LL;
  if ( DynamicString )
    *DynamicString = 0LL;
  v43 = v48;
  v45 = 32LL;
  v44 = v48;
  v46 = 32LL;
  v42.Buffer = v48;
  v48[0] = 0;
  *(_DWORD *)&v42.Length = 0x200000;
  sxsisol_InitUnicodeStringBufferAroundUnicodeStrings(v47, StaticString, DynamicString, NewName);
  if ( (Flags & 0xFFFFFFFE) != 0 || !OriginalName )
    goto LABEL_80;
  if ( !StaticString )
  {
    if ( DynamicString || !FileNameSize )
      goto LABEL_13;
LABEL_80:
    CharInUnicodeString = -1073741811;
    goto LABEL_37;
  }
  if ( DynamicString && !v15 )
    goto LABEL_80;
LABEL_13:
  StringToSearch = *OriginalName;
  if ( !Extension || !Extension->Length )
    goto LABEL_20;
  v16 = 0;
  CharInUnicodeString = RtlFindCharInUnicodeString(
                          1u,
                          &StringToSearch,
                          (PUNICODE_STRING)&CharSet,
                          NonInclusivePrefixLength);
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
    v41[1] = *Extension;
    v41[0] = StringToSearch;
    CharInUnicodeString = RtlMultiAppendUnicodeStringBuffer(&v42, 2LL, v41);
    if ( CharInUnicodeString < 0 )
      goto LABEL_37;
    v9 = 1;
  }
LABEL_20:
  if ( v9 )
    StringToSearch = v42;
  StringUsed[0] = 0LL;
  v18 = 0;
  if ( v33.Buffer )
  {
    CharInUnicodeString = -1073741811;
  }
  else
  {
    v19 = (unsigned int)RtlDetermineDosPathNameType_Ustr(&StringToSearch);
    InputPathType = v19;
    if ( ((v19 - 1) & 0xFFFFFFFA) != 0 || v19 == RtlPathTypeRelative )
      goto LABEL_25;
    CharInUnicodeString = RtlGetFullPathName_UstrEx(
                            &StringToSearch,
                            &StaticStringa,
                            &v33,
                            StringUsed,
                            0LL,
                            0LL,
                            &InputPathType,
                            0LL);
    if ( CharInUnicodeString >= 0 )
    {
      v14 = StringUsed[0];
      v25 = *StringUsed[0];
      *(_UNICODE_STRING *)StringUsed = *StringUsed[0];
      if ( InputPathType == RtlPathTypeLocalDevice && StringToSearch.Buffer[5] == 58 && StringToSearch.Buffer[6] == 92 )
      {
        StringUsed[1] = (PUNICODE_STRING)((char *)StringUsed[1] + 8);
        StringToSearch.MaximumLength -= 8;
        Length = StringToSearch.Length - 8;
        StringToSearch.Buffer += 4;
        v27 = LOWORD(StringUsed[0]) - 8;
        StringToSearch.Length -= 8;
        WORD1(StringUsed[0]) -= 8;
        LOWORD(StringUsed[0]) -= 8;
        v25 = *(_UNICODE_STRING *)StringUsed;
      }
      else
      {
        Length = StringToSearch.Length;
        v27 = (unsigned __int16)StringUsed[0];
      }
      if ( Length > v27 )
      {
        StringToSearch = v25;
        if ( v14 == &v33 )
          v18 = 1;
      }
LABEL_25:
      CharInUnicodeString = 0;
      if ( v18 )
        goto LABEL_28;
    }
  }
  if ( v33.Buffer )
  {
    NtdllpFreeStringRoutine(v33.Buffer);
    v33 = 0LL;
  }
LABEL_28:
  if ( CharInUnicodeString >= 0 )
  {
    if ( (v35 & 1) != 0 )
    {
      if ( NtCurrentPeb()->ProcessParameters )
      {
        if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x1000) != 0 )
        {
          CharInUnicodeString = sxsisol_RespectDotLocal(&StringToSearch, v47, v31);
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
      if ( StaticString || (LOBYTE(v14) = 1, DynamicString) )
        LOBYTE(v14) = 0;
      v21 = v36;
      CharInUnicodeString = sxsisol_SearchActCtxForDllName(
                              (unsigned int)&StringToSearch,
                              (_DWORD)v14,
                              (unsigned int)&v37,
                              (_DWORD)v36,
                              (__int64)v47);
      if ( CharInUnicodeString < 0 )
        goto LABEL_37;
    }
    if ( !DynamicString && StaticString && v47[0].Buffer != StaticString->Buffer )
    {
      CharInUnicodeString = -1073741789;
      goto LABEL_37;
    }
    if ( FileNameSize )
    {
      CharInUnicodeString = RtlFindCharInUnicodeString(1u, v47, &RtlDosPathSeperatorsString, v28);
      if ( CharInUnicodeString < 0 )
        goto LABEL_37;
      *FileNameSize = ((unsigned __int64)v28[0] >> 1) + 1;
    }
    CharInUnicodeString = sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(v47);
    if ( CharInUnicodeString >= 0 )
    {
      if ( v21 )
        *v21 = v20;
      CharInUnicodeString = 0;
    }
LABEL_37:
    if ( CharInUnicodeString >= 0 )
      goto LABEL_45;
  }
  if ( LOBYTE(v47[5].Length) )
  {
    Buffer = v47[1].Buffer;
    if ( *(_QWORD *)&v47[1].Length && *(wchar_t **)&v47[1].Length != v47[1].Buffer )
    {
      v39.Buffer = *(wchar_t **)&v47[1].Length;
      RtlFreeAnsiString(&v39);
      Buffer = v47[1].Buffer;
    }
    if ( Buffer )
      *Buffer = 0;
  }
  memset(v47, 0, 0x58uLL);
LABEL_45:
  if ( v33.Buffer )
  {
    NtdllpFreeStringRoutine(v33.Buffer);
    v33 = 0LL;
  }
  v23 = v44;
  if ( v43 )
  {
    if ( v43 != v44 )
    {
      UnicodeString.Buffer = v43;
      RtlFreeAnsiString(&UnicodeString);
      v23 = v44;
    }
    v45 = v46;
    v43 = v23;
  }
  v42.Buffer = v23;
  if ( v23 )
    *v23 = 0;
  v42.MaximumLength = v46;
  v42.Length = 0;
  if ( CharInUnicodeString == -1072365567 )
    RtlAssert(
      "Internal error check failed",
      "minkernel\\ntdll\\sxsisol.cpp",
      0x1B2u,
      (PSTR)"Status != STATUS_SXS_SECTION_NOT_FOUND");
  return CharInUnicodeString;
}
