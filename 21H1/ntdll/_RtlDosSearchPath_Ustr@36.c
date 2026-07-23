/*
 * XREFs of _RtlDosSearchPath_Ustr@36 @ 0x4B2C5170
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpDosPathNameToRelativeNtPathName@28 @ 0x4B2C5860 (_RtlpDosPathNameToRelativeNtPathName@28.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlGetFullPathName_UstrEx@32 @ 0x4B2C9650 (_RtlGetFullPathName_UstrEx@32.c)
 *     _RtlDosApplyFileIsolationRedirection_Ustr@36 @ 0x4B2C9830 (_RtlDosApplyFileIsolationRedirection_Ustr@36.c)
 *     _RtlUnicodeStringCbCopyStringN@12 @ 0x4B2DDCAF (_RtlUnicodeStringCbCopyStringN@12.c)
 *     _RtlUnicodeStringCat@8 @ 0x4B2DDD16 (_RtlUnicodeStringCat@8.c)
 *     _RtlDoesFileExists_UstrEx@8 @ 0x4B2E318E (_RtlDoesFileExists_UstrEx@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryAttributesFile@8 @ 0x4B2F2D50 (_ZwQueryAttributesFile@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

NTSTATUS __cdecl RtlDosSearchPath_Ustr(
        ULONG Flags,
        PUNICODE_STRING Path,
        PUNICODE_STRING FileName,
        PUNICODE_STRING DefaultExtension,
        PUNICODE_STRING StaticString,
        PUNICODE_STRING DynamicString,
        PCUNICODE_STRING *FullFileNameOut,
        SIZE_T *FilePartPrefixCch,
        SIZE_T *BytesRequired)
{
  PUNICODE_STRING v9; // edi
  PUNICODE_STRING v10; // esi
  unsigned int Length; // ecx
  wchar_t *Buffer; // eax
  int v13; // edx
  int v14; // edx
  RTL_PATH_TYPE v15; // edx
  void *v16; // eax
  NTSTATUS v17; // esi
  HANDLE *v18; // eax
  unsigned int v19; // ecx
  wchar_t *StringRoutine; // ecx
  wchar_t *v21; // edi
  void *v22; // eax
  NTSTATUS v23; // eax
  HANDLE *v24; // ebx
  int v25; // esi
  int v26; // esi
  unsigned int v28; // eax
  wchar_t *v29; // edx
  wchar_t *v30; // eax
  int v31; // ecx
  PVOID v32; // ecx
  unsigned int v33; // eax
  unsigned __int16 v34; // si
  unsigned int v35; // esi
  char *v36; // ecx
  char *v37; // edx
  char *v38; // eax
  char *v39; // edi
  unsigned int v40; // eax
  int v41; // ecx
  int v42; // edx
  int v43; // eax
  _UNICODE_STRING *v44; // ebx
  _UNICODE_STRING *p_MaximumLength; // ecx
  _UNICODE_STRING *v46; // eax
  _UNICODE_STRING *i; // esi
  char *v48; // eax
  int Buffer_high; // ecx
  unsigned int v50; // edx
  int v51; // edx
  unsigned __int16 v52; // cx
  int v53; // ebx
  NTSTATUS FullPathName_Ustr; // eax
  NTSTATUS v55; // eax
  int v56; // edx
  int v57; // edx
  int v58; // edx
  int v59; // edx
  int v60; // eax
  unsigned int v61; // eax
  wchar_t *v62; // ebx
  wchar_t *v63; // eax
  int v64; // ecx
  size_t v65; // [esp-10h] [ebp-318h]
  size_t v66; // [esp-4h] [ebp-30Ch]
  _UNICODE_STRING UnicodeString; // [esp+10h] [ebp-2F8h] BYREF
  PUNICODE_STRING Extension; // [esp+18h] [ebp-2F0h]
  int v69; // [esp+1Ch] [ebp-2ECh]
  PUNICODE_STRING v70; // [esp+20h] [ebp-2E8h]
  PVOID BaseAddress; // [esp+24h] [ebp-2E4h]
  unsigned int v72; // [esp+28h] [ebp-2E0h]
  PSIZE_T RequiredLength; // [esp+2Ch] [ebp-2DCh]
  int v74; // [esp+30h] [ebp-2D8h]
  PUNICODE_STRING v75; // [esp+34h] [ebp-2D4h]
  RTL_PATH_TYPE InputPathType; // [esp+38h] [ebp-2D0h] BYREF
  PSIZE_T FileNameSize; // [esp+3Ch] [ebp-2CCh]
  PUNICODE_STRING *StringUsed; // [esp+40h] [ebp-2C8h]
  _UNICODE_STRING v79; // [esp+44h] [ebp-2C4h] BYREF
  _UNICODE_STRING Destination; // [esp+4Ch] [ebp-2BCh] BYREF
  PUNICODE_STRING NewName; // [esp+54h] [ebp-2B4h] BYREF
  _UNICODE_STRING v82; // [esp+58h] [ebp-2B0h] BYREF
  void *v83; // [esp+60h] [ebp-2A8h]
  PVOID v84; // [esp+64h] [ebp-2A4h]
  _UNICODE_STRING v85; // [esp+68h] [ebp-2A0h] BYREF
  void *v86; // [esp+70h] [ebp-298h]
  PVOID v87; // [esp+74h] [ebp-294h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+78h] [ebp-290h] BYREF
  _OBJECT_ATTRIBUTES v89; // [esp+90h] [ebp-278h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [esp+A8h] [ebp-260h] BYREF
  _FILE_BASIC_INFORMATION v91; // [esp+D0h] [ebp-238h] BYREF
  _BYTE v92[524]; // [esp+F8h] [ebp-210h] BYREF

  Extension = DefaultExtension;
  v75 = StaticString;
  RequiredLength = BytesRequired;
  BaseAddress = Path;
  v70 = DynamicString;
  StringUsed = (PUNICODE_STRING *)FullFileNameOut;
  FileNameSize = FilePartPrefixCch;
  v72 = 0;
  v74 = 0;
  *(_DWORD *)&UnicodeString.Length = 34078720;
  UnicodeString.Buffer = (wchar_t *)v92;
  v9 = FileName;
  *(_DWORD *)&v79.Length = FileName;
  if ( FullFileNameOut )
    *FullFileNameOut = 0;
  v10 = Extension;
  if ( RequiredLength )
  {
    *(_DWORD *)RequiredLength = 0;
    v10 = Extension;
  }
  if ( FilePartPrefixCch )
    *(_DWORD *)FilePartPrefixCch = 0;
  if ( DynamicString )
  {
    *(_DWORD *)&DynamicString->Length = 0;
    DynamicString->Buffer = 0;
  }
  if ( (Flags & 0xFFFFFFF8) != 0 || !Path || !FileName || v75 && DynamicString && !FullFileNameOut )
    return -1073741811;
  Length = FileName->Length;
  Buffer = FileName->Buffer;
  if ( Length >= 2 && ((v13 = *Buffer, v13 == 92) || v13 == 47) )
  {
    if ( Length >= 4 && ((v56 = Buffer[1], v56 == 92) || v56 == 47) )
    {
      if ( Length >= 6 && ((v57 = Buffer[2], v57 == 46) || v57 == 63) )
      {
        if ( Length >= 8 && ((v58 = Buffer[3], v58 == 92) || v58 == 47) )
          v15 = RtlPathTypeLocalDevice;
        else
          v15 = Length != 6 ? RtlPathTypeUncAbsolute : RtlPathTypeRootLocalDevice;
      }
      else
      {
        v15 = RtlPathTypeUncAbsolute;
      }
    }
    else
    {
      v15 = RtlPathTypeRooted;
    }
  }
  else if ( Length >= 4 && *Buffer && Buffer[1] == 58 )
  {
    if ( Length >= 6 && ((v14 = Buffer[2], v14 == 92) || v14 == 47) )
      v15 = RtlPathTypeDriveAbsolute;
    else
      v15 = RtlPathTypeDriveRelative;
  }
  else
  {
    v15 = RtlPathTypeRelative;
  }
  InputPathType = v15;
  if ( (Flags & 2) != 0 )
  {
    if ( v15 != RtlPathTypeRelative )
    {
LABEL_26:
      if ( RtlpDosPathNameToRelativeNtPathName(0, &Destination, 0, 0, (int)&v82) < 0 )
      {
LABEL_34:
        if ( v10 && v10->Length )
        {
          if ( (Flags & 4) == 0 )
          {
            v61 = FileName->Length;
            if ( (_WORD)v61 )
            {
              v62 = FileName->Buffer;
              v63 = &v62[v61 >> 1];
              while ( v63 > v62 )
              {
                v64 = *--v63;
                if ( v64 == 92 || v64 == 47 )
                  break;
                if ( v64 == 46 )
                  goto LABEL_47;
              }
            }
          }
          v19 = v10->Length + FileName->Length + 2;
          if ( v19 > 0xFFFE )
          {
            v26 = -1073741562;
            goto LABEL_48;
          }
          if ( v19 > UnicodeString.MaximumLength )
          {
            UnicodeString.MaximumLength = v10->Length + FileName->Length + 2;
            StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)v19);
            UnicodeString.Buffer = StringRoutine;
            if ( !StringRoutine )
              return -1073741801;
          }
          else
          {
            StringRoutine = UnicodeString.Buffer;
          }
          LODWORD(v66) = FileName->Length;
          memcpy(StringRoutine, FileName->Buffer, v66);
          LODWORD(v65) = v10->Length;
          memcpy(&UnicodeString.Buffer[FileName->Length >> 1], v10->Buffer, v65);
          UnicodeString.Buffer[(FileName->Length + (unsigned int)v10->Length) >> 1] = 0;
          UnicodeString.Length = FileName->Length + v10->Length;
          if ( RtlpDosPathNameToRelativeNtPathName(0, &v79, 0, 0, (int)&v85) >= 0 )
          {
            v21 = v79.Buffer;
            if ( v85.Length )
            {
              v79 = v85;
              v22 = v86;
            }
            else
            {
              v22 = 0;
            }
            v89.RootDirectory = v22;
            v89.ObjectName = &v79;
            v89.Length = 24;
            v89.Attributes = 64;
            v89.SecurityDescriptor = 0;
            v89.SecurityQualityOfService = 0;
            v23 = ZwQueryAttributesFile(&v89, &v91);
            v24 = (HANDLE *)v87;
            v25 = v23;
            if ( v87 && !_InterlockedExchangeAdd((volatile signed __int32 *)v87, 0xFFFFFFFF) )
            {
              NtClose(v24[1]);
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v24);
            }
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v21);
            if ( v25 >= 0 || v25 == -1073741757 || v25 == -1073741790 )
            {
              FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                                    &UnicodeString,
                                    v75,
                                    v70,
                                    StringUsed,
                                    FileNameSize,
                                    0,
                                    &InputPathType,
                                    RequiredLength);
LABEL_109:
              v26 = FullPathName_Ustr;
              if ( FullPathName_Ustr >= 0 )
                v26 = 0;
              goto LABEL_48;
            }
          }
        }
        goto LABEL_47;
      }
      BaseAddress = Destination.Buffer;
      if ( v82.Length )
      {
        Destination = v82;
        v16 = v83;
      }
      else
      {
        v16 = 0;
      }
      ObjectAttributes.RootDirectory = v16;
      ObjectAttributes.ObjectName = &Destination;
      ObjectAttributes.Length = 24;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.SecurityDescriptor = 0;
      ObjectAttributes.SecurityQualityOfService = 0;
      v17 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
      v18 = (HANDLE *)v84;
      if ( v84 && !_InterlockedExchangeAdd((volatile signed __int32 *)v84, 0xFFFFFFFF) )
      {
        NtClose(v18[1]);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v84);
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      if ( v17 < 0 && v17 != -1073741757 && v17 != -1073741790 )
      {
        v10 = Extension;
        goto LABEL_34;
      }
      v26 = RtlGetFullPathName_UstrEx(
              FileName,
              v75,
              DynamicString,
              StringUsed,
              FileNameSize,
              0,
              &InputPathType,
              RequiredLength);
      if ( v26 < 0 )
        goto LABEL_48;
LABEL_53:
      v26 = 0;
      goto LABEL_48;
    }
    if ( Length >= 4 && *Buffer == 46 )
    {
      v59 = Buffer[1];
      if ( v59 == 92 || v59 == 47 || v59 == 46 && Length >= 6 && ((v60 = Buffer[2], v60 == 92) || v60 == 47) )
      {
        InputPathType = RtlPathTypeUnknown;
        goto LABEL_26;
      }
    }
  }
  else if ( v15 != RtlPathTypeRelative )
  {
    goto LABEL_26;
  }
  if ( (Flags & 1) != 0 )
  {
    NewName = 0;
    v55 = RtlDosApplyFileIsolationRedirection_Ustr(
            1u,
            FileName,
            v10,
            v75,
            DynamicString,
            &NewName,
            0,
            FileNameSize,
            RequiredLength);
    v26 = v55;
    if ( v55 >= 0 )
    {
      if ( StringUsed )
        *StringUsed = NewName;
      goto LABEL_53;
    }
    if ( v55 != -1072365560 )
      goto LABEL_48;
    v10 = Extension;
  }
  if ( v10 )
  {
    v28 = FileName->Length;
    v74 = v10->Length;
    if ( (_WORD)v28 )
    {
      v29 = FileName->Buffer;
      v30 = &v29[v28 >> 1];
      if ( v30 > v29 )
      {
        while ( 1 )
        {
          v31 = *--v30;
          if ( v31 == 46 )
            break;
          if ( v31 == 92 || v31 == 47 || v30 <= v29 )
            goto LABEL_66;
        }
        Extension = 0;
        v74 = 0;
      }
    }
  }
LABEL_66:
  v32 = BaseAddress;
  v33 = *(unsigned __int16 *)BaseAddress;
  v34 = v33;
  *(_DWORD *)&Destination.Length = v33;
  if ( (_WORD)v33 )
  {
    v35 = *((_DWORD *)BaseAddress + 1);
    v36 = (char *)(v35 + 2 * (v33 >> 1));
    v37 = v36;
    if ( (unsigned int)v36 > v35 )
    {
      v38 = v36 - 2;
      v39 = v36;
      do
      {
        if ( *(_WORD *)v38 == 59 )
        {
          v69 = (unsigned __int16)((v39 - v37 + 2) >> 1);
          v52 = v69 - 1;
          if ( (_WORD)v69 != 1 )
          {
            v53 = *((unsigned __int16 *)v39 - 1);
            if ( v53 != 92 && v53 != 47 )
              v52 = v69;
          }
          if ( v52 > v72 )
            v72 = v52;
          v39 = v38;
        }
        v37 -= 2;
        v38 -= 2;
      }
      while ( (unsigned int)v37 > v35 );
      v69 = (int)v39;
      v9 = *(PUNICODE_STRING *)&v79.Length;
      v36 = (char *)v69;
    }
    LOWORD(v40) = (v36 - v37) >> 1;
    if ( (_WORD)v40 )
    {
      v41 = *((unsigned __int16 *)v36 - 1);
      if ( v41 != 92 && v41 != 47 )
        LOWORD(v40) = v40 + 1;
    }
    v40 = (unsigned __int16)v40;
    if ( (unsigned __int16)v40 <= v72 )
      v40 = v72;
    v32 = BaseAddress;
    v34 = Destination.Length;
    v72 = 2 * v40;
  }
  v42 = (unsigned __int16)v74;
  v43 = (unsigned __int16)v74 + v9->Length;
  v69 = (unsigned __int16)v74;
  v44 = v70;
  *(_DWORD *)&Destination.Length = v72 + 2 + v43;
  if ( *(_DWORD *)&Destination.Length > 0xFFFEu )
  {
    v26 = -1073741562;
    goto LABEL_48;
  }
  p_MaximumLength = (_UNICODE_STRING *)*((_DWORD *)v32 + 1);
  v70 = p_MaximumLength;
  v46 = (_UNICODE_STRING *)((char *)p_MaximumLength + 2 * (v34 >> 1));
  *(_DWORD *)&v79.Length = v46;
  if ( p_MaximumLength < v46 )
  {
    while ( 1 )
    {
      for ( i = p_MaximumLength; i != v46; i = (_UNICODE_STRING *)((char *)i + 2) )
      {
        if ( i->Length == 59 )
          break;
      }
      v48 = (char *)(((_WORD)i - (_WORD)p_MaximumLength) & 0xFFFE);
      BaseAddress = v48;
      v74 = (unsigned __int16)v48;
      if ( (_WORD)v48 )
      {
        Buffer_high = HIWORD(i[-1].Buffer);
        if ( Buffer_high != 92 && Buffer_high != 47 )
        {
          v48 += 2;
          BaseAddress = v48;
        }
      }
      v50 = (unsigned __int16)v48 + v9->Length + v42;
      if ( UnicodeString.MaximumLength < v50 + 2 )
      {
        if ( (_BYTE *)UnicodeString.Buffer != v92 || v50 > 0xFFFC )
          break;
        UnicodeString.MaximumLength = Destination.Length;
        UnicodeString.Buffer = (wchar_t *)NtdllpAllocateStringRoutine(Destination.Length);
        if ( !UnicodeString.Buffer )
          return -1073741801;
      }
      UnicodeString.Length = 0;
      RtlUnicodeStringCbCopyStringN((unsigned __int16)v74);
      if ( (_WORD)BaseAddress && (_WORD)v74 != (_WORD)BaseAddress )
      {
        UnicodeString.Buffer[UnicodeString.Length >> 1] = 92;
        UnicodeString.Length += 2;
      }
      RtlUnicodeStringCat(&UnicodeString, v9);
      if ( Extension )
        RtlUnicodeStringCat(&UnicodeString, Extension);
      if ( (unsigned int)UnicodeString.Length + 2 > UnicodeString.MaximumLength )
        break;
      v51 = UnicodeString.Length >> 1;
      UnicodeString.Buffer[v51] = 0;
      LOBYTE(v51) = 0;
      if ( (unsigned __int8)RtlDoesFileExists_UstrEx(&UnicodeString, v51) )
      {
        FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                              &UnicodeString,
                              v75,
                              v44,
                              StringUsed,
                              FileNameSize,
                              0,
                              &InputPathType,
                              RequiredLength);
        goto LABEL_109;
      }
      v46 = *(_UNICODE_STRING **)&v79.Length;
      if ( i == *(_UNICODE_STRING **)&v79.Length )
      {
        p_MaximumLength = i;
        v70 = i;
      }
      else
      {
        p_MaximumLength = (_UNICODE_STRING *)&i->MaximumLength;
        v70 = (PUNICODE_STRING)&i->MaximumLength;
      }
      if ( (unsigned int)p_MaximumLength >= *(_DWORD *)&v79.Length )
        goto LABEL_47;
      v42 = v69;
    }
    v26 = -1073741595;
    goto LABEL_48;
  }
LABEL_47:
  v26 = -1073741809;
LABEL_48:
  if ( UnicodeString.Buffer )
  {
    if ( (_BYTE *)UnicodeString.Buffer != v92 )
      RtlFreeAnsiString(&UnicodeString);
  }
  return v26;
}
