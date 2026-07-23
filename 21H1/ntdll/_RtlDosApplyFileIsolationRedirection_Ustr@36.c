/*
 * XREFs of _RtlDosApplyFileIsolationRedirection_Ustr@36 @ 0x4B2C9830
 * Callers:
 *     _LdrpQuerySxSMUIFile@20 @ 0x4B2B9006 (_LdrpQuerySxSMUIFile@20.c)
 *     _RtlDosSearchPath_Ustr@36 @ 0x4B2C5170 (_RtlDosSearchPath_Ustr@36.c)
 *     _LdrpPreprocessDllName@16 @ 0x4B2CB090 (_LdrpPreprocessDllName@16.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlGetFullPathName_UstrEx@32 @ 0x4B2C9650 (_RtlGetFullPathName_UstrEx@32.c)
 *     sxsisol_SearchActCtxForDllName @ 0x4B2C9D90 (sxsisol_SearchActCtxForDllName.c)
 *     _RtlFindCharInUnicodeString@16 @ 0x4B2CAA20 (_RtlFindCharInUnicodeString@16.c)
 *     _RtlMultiAppendUnicodeStringBuffer@12 @ 0x4B2E13B0 (_RtlMultiAppendUnicodeStringBuffer@12.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x4B2EBA54 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     sxsisol_RespectDotLocal @ 0x4B33D7A3 (sxsisol_RespectDotLocal.c)
 *     _RtlAssert@16 @ 0x4B34FBC0 (_RtlAssert@16.c)
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
  PSIZE_T v9; // esi
  PUNICODE_STRING v10; // ebx
  unsigned int MaximumLength; // edx
  wchar_t *Buffer; // eax
  char v13; // dl
  wchar_t *v14; // eax
  NTSTATUS CharInUnicodeString; // eax
  int appended; // esi
  int v17; // edx
  int v18; // eax
  _UNICODE_STRING *v19; // edx
  _UNICODE_STRING *v20; // ecx
  wchar_t *v21; // esi
  unsigned __int16 Length; // ax
  unsigned __int16 v23; // cx
  bool v24; // al
  _DWORD *v26; // edi
  int v27; // edx
  int v28; // edx
  int v29; // eax
  size_t v30; // [esp-4h] [ebp-15Ch]
  char v31; // [esp+Eh] [ebp-14Ah]
  _UNICODE_STRING StringToSearch; // [esp+10h] [ebp-148h] BYREF
  USHORT v33; // [esp+18h] [ebp-140h] BYREF
  PUNICODE_STRING StringUsed; // [esp+1Ch] [ebp-13Ch] BYREF
  _UNICODE_STRING v35; // [esp+20h] [ebp-138h] BYREF
  RTL_PATH_TYPE InputPathType; // [esp+28h] [ebp-130h] BYREF
  int v37; // [esp+2Ch] [ebp-12Ch] BYREF
  _UNICODE_STRING v38; // [esp+30h] [ebp-128h] BYREF
  PSIZE_T v39; // [esp+38h] [ebp-120h]
  PULONG v40; // [esp+3Ch] [ebp-11Ch]
  USHORT NonInclusivePrefixLength; // [esp+40h] [ebp-118h] BYREF
  int v42; // [esp+44h] [ebp-114h] BYREF
  _UNICODE_STRING v43; // [esp+48h] [ebp-110h] BYREF
  _UNICODE_STRING UnicodeString; // [esp+50h] [ebp-108h] BYREF
  _UNICODE_STRING v45[2]; // [esp+58h] [ebp-100h] BYREF
  _UNICODE_STRING v46; // [esp+68h] [ebp-F0h] BYREF
  wchar_t *v47; // [esp+70h] [ebp-E8h]
  wchar_t *v48; // [esp+74h] [ebp-E4h]
  int v49; // [esp+78h] [ebp-E0h]
  int v50; // [esp+7Ch] [ebp-DCh]
  _UNICODE_STRING v51; // [esp+84h] [ebp-D4h] BYREF
  wchar_t *v52; // [esp+8Ch] [ebp-CCh]
  wchar_t *v53; // [esp+90h] [ebp-C8h]
  int v54; // [esp+94h] [ebp-C4h]
  int v55; // [esp+98h] [ebp-C0h]
  __int16 v56; // [esp+9Ch] [ebp-BCh] BYREF
  PUNICODE_STRING v57; // [esp+A0h] [ebp-B8h]
  PUNICODE_STRING v58; // [esp+A4h] [ebp-B4h]
  PUNICODE_STRING *v59; // [esp+A8h] [ebp-B0h]
  char v60; // [esp+ACh] [ebp-ACh]
  _WORD v61[16]; // [esp+B0h] [ebp-A8h] BYREF
  char v62; // [esp+D0h] [ebp-88h] BYREF

  v40 = NewFlags;
  *(_DWORD *)&v35.Length = 0;
  v35.Buffer = 0;
  v9 = FileNameSize;
  v43.Buffer = (wchar_t *)&v62;
  v39 = FileNameSize;
  *(_DWORD *)&v43.Length = 0x800000;
  v42 = 0;
  v33 = 0;
  v37 = 0;
  if ( NewFlags )
    *NewFlags = 0;
  if ( FileNameSize )
    *(_DWORD *)FileNameSize = 0;
  if ( RequiredLength )
    *(_DWORD *)RequiredLength = 520;
  if ( DynamicString )
  {
    *(_DWORD *)&DynamicString->Length = 0;
    DynamicString->Buffer = 0;
  }
  v10 = StaticString;
  v47 = v61;
  v48 = v61;
  v46.Buffer = v61;
  v49 = 32;
  v50 = 32;
  v61[0] = 0;
  *(_DWORD *)&v46.Length = 0x200000;
  if ( StaticString )
  {
    MaximumLength = StaticString->MaximumLength;
    Buffer = StaticString->Buffer;
    if ( MaximumLength < 2 )
    {
      Buffer = (wchar_t *)&v56;
      MaximumLength = 2;
    }
    v52 = Buffer;
    v54 = MaximumLength;
    v53 = Buffer;
    v55 = MaximumLength;
    v51.Buffer = Buffer;
    if ( Buffer )
    {
      *Buffer = 0;
      v9 = v39;
    }
    v51.MaximumLength = MaximumLength;
    v51.Length = 0;
  }
  else
  {
    v54 = 2;
    v52 = (wchar_t *)&v56;
    v53 = (wchar_t *)&v56;
    v51.Buffer = (wchar_t *)&v56;
    v55 = 2;
    v56 = 0;
    *(_DWORD *)&v51.Length = 0x20000;
  }
  v57 = StaticString;
  v58 = DynamicString;
  v59 = NewName;
  v60 = 1;
  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    appended = -1073741811;
    goto LABEL_86;
  }
  if ( !OriginalName )
  {
    appended = -1073741811;
    goto LABEL_86;
  }
  if ( StaticString )
  {
    if ( !DynamicString || NewName )
      goto LABEL_20;
LABEL_92:
    appended = -1073741811;
    goto LABEL_86;
  }
  if ( !DynamicString && v9 )
    goto LABEL_92;
LABEL_20:
  v13 = 0;
  *(_DWORD *)&StringToSearch.Length = *(_DWORD *)&OriginalName->Length;
  v14 = OriginalName->Buffer;
  StringToSearch.Buffer = v14;
  if ( !Extension || !Extension->Length )
    goto LABEL_28;
  v31 = 0;
  CharInUnicodeString = RtlFindCharInUnicodeString(
                          1u,
                          &StringToSearch,
                          (PUNICODE_STRING)&CharSet,
                          &NonInclusivePrefixLength);
  appended = CharInUnicodeString;
  if ( CharInUnicodeString >= 0 )
  {
    v31 = 1;
LABEL_24:
    appended = 0;
    goto LABEL_25;
  }
  if ( CharInUnicodeString == -1073741275 )
    goto LABEL_24;
LABEL_25:
  if ( appended >= 0 )
  {
    if ( v31 )
    {
      v14 = StringToSearch.Buffer;
      v13 = 0;
LABEL_28:
      appended = 0;
      goto LABEL_29;
    }
    v45[0] = StringToSearch;
    v45[1] = *Extension;
    appended = RtlMultiAppendUnicodeStringBuffer(&v46, 2, v45);
    if ( appended >= 0 )
    {
      v14 = StringToSearch.Buffer;
      v13 = 1;
      goto LABEL_28;
    }
  }
  v14 = StringToSearch.Buffer;
  v13 = 0;
LABEL_29:
  if ( appended < 0 )
    goto LABEL_56;
  if ( v13 )
  {
    StringToSearch = v46;
    v14 = v46.Buffer;
  }
  StringUsed = 0;
  if ( v35.Buffer )
  {
    appended = -1073741811;
LABEL_48:
    if ( v35.Buffer )
    {
      RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v35.Buffer);
      *(_DWORD *)&v35.Length = 0;
      v35.Buffer = 0;
    }
    goto LABEL_50;
  }
  if ( StringToSearch.Length < 2u || (v17 = *v14, v17 != 92) && v17 != 47 )
  {
    if ( StringToSearch.Length >= 4u )
    {
      if ( *v14 )
      {
        if ( v14[1] == 58 && StringToSearch.Length >= 6u )
        {
          v18 = v14[2];
          if ( v18 == 92 || v18 == 47 )
          {
            InputPathType = RtlPathTypeDriveAbsolute;
            goto LABEL_42;
          }
        }
      }
    }
LABEL_46:
    v24 = 0;
    goto LABEL_47;
  }
  if ( StringToSearch.Length < 4u )
    goto LABEL_46;
  v27 = v14[1];
  if ( v27 != 92 && v27 != 47 )
    goto LABEL_46;
  if ( StringToSearch.Length >= 6u )
  {
    v28 = v14[2];
    if ( v28 == 46 || v28 == 63 )
    {
      if ( StringToSearch.Length >= 8u )
      {
        v29 = v14[3];
        if ( v29 == 92 || v29 == 47 )
        {
          InputPathType = RtlPathTypeLocalDevice;
          goto LABEL_42;
        }
      }
      if ( StringToSearch.Length == 6 )
        goto LABEL_46;
    }
  }
  InputPathType = RtlPathTypeUncAbsolute;
LABEL_42:
  appended = RtlGetFullPathName_UstrEx(&StringToSearch, &v43, &v35, &StringUsed, 0, 0, &InputPathType, 0);
  if ( appended < 0 )
    goto LABEL_48;
  v19 = StringUsed;
  v20 = *(_UNICODE_STRING **)&StringUsed->Length;
  v21 = StringUsed->Buffer;
  StringUsed = v20;
  UnicodeString.Buffer = v21;
  *(_DWORD *)&v38.Length = v20;
  if ( InputPathType == RtlPathTypeLocalDevice && StringToSearch.Buffer[5] == 58 && StringToSearch.Buffer[6] == 92 )
  {
    StringToSearch.MaximumLength -= 8;
    Length = StringToSearch.Length - 8;
    StringToSearch.Buffer += 4;
    v23 = (_WORD)v20 - 8;
    v21 += 4;
    v38.Length = v23;
    v38.MaximumLength -= 8;
    StringUsed = *(PUNICODE_STRING *)&v38.Length;
    v10 = StaticString;
    StringToSearch.Length -= 8;
  }
  else
  {
    Length = StringToSearch.Length;
    v23 = v38.Length;
  }
  if ( Length <= v23 )
    goto LABEL_46;
  v24 = v19 == &v35;
  *(_DWORD *)&StringToSearch.Length = StringUsed;
  StringToSearch.Buffer = v21;
LABEL_47:
  appended = 0;
  if ( !v24 )
    goto LABEL_48;
LABEL_50:
  if ( appended < 0 )
    goto LABEL_56;
  if ( (Flags & 1) != 0 )
  {
    if ( NtCurrentPeb()->ProcessParameters )
    {
      if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x1000) != 0 )
      {
        appended = sxsisol_RespectDotLocal(&StringToSearch, (int)&v37);
        if ( appended < 0 )
          goto LABEL_56;
      }
    }
  }
  if ( (v37 & 1) == 0 )
  {
    appended = sxsisol_SearchActCtxForDllName(&v42, v40, &v51);
    if ( appended < 0 )
      goto LABEL_56;
  }
  if ( !DynamicString && v10 && v51.Buffer != v10->Buffer )
  {
    appended = -1073741789;
    goto LABEL_86;
  }
  v26 = v39;
  if ( v39 )
  {
    appended = RtlFindCharInUnicodeString(1u, &v51, (PUNICODE_STRING)&RtlDosPathSeperatorsString, &v33);
    if ( appended < 0 )
      goto LABEL_56;
    *v26 = (v33 >> 1) + 1;
  }
  appended = sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(&v51);
  if ( appended >= 0 )
  {
    if ( v40 )
      *v40 = v37;
    appended = 0;
LABEL_86:
    if ( appended >= 0 )
      goto LABEL_63;
  }
LABEL_56:
  if ( v60 )
  {
    if ( v52 && v52 != v53 )
    {
      v38.Buffer = v52;
      RtlFreeAnsiString(&v38);
    }
    if ( v53 )
      *v53 = 0;
  }
  LODWORD(v30) = 44;
  memset(&v51, 0, v30);
LABEL_63:
  if ( v35.Buffer )
  {
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v35.Buffer);
    *(_DWORD *)&v35.Length = 0;
    v35.Buffer = 0;
  }
  if ( v47 )
  {
    if ( v47 != v48 )
    {
      UnicodeString.Buffer = v47;
      RtlFreeAnsiString(&UnicodeString);
    }
    v47 = v48;
    v49 = v50;
  }
  v46.Buffer = v48;
  if ( v48 )
    *v48 = 0;
  v46.Length = 0;
  v46.MaximumLength = v50;
  if ( appended == -1072365567 )
    RtlAssert(
      "Internal error check failed",
      "minkernel\\ntdll\\sxsisol.cpp",
      0x1B2u,
      (PSTR)"Status != STATUS_SXS_SECTION_NOT_FOUND");
  return appended;
}
