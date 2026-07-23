/*
 * XREFs of RtlGetFullPathName_UstrEx @ 0x18001D890
 * Callers:
 *     RtlDosSearchPath_Ustr @ 0x180019C40 (RtlDosSearchPath_Ustr.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001A9E0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlGetFullPathName_Ustr @ 0x18001B430 (RtlGetFullPathName_Ustr.c)
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x18006DBB0 (NtdllpAllocateStringRoutine.c)
 */

NTSTATUS __cdecl RtlGetFullPathName_UstrEx(
        PUNICODE_STRING FileName,
        PUNICODE_STRING StaticString,
        PUNICODE_STRING DynamicString,
        PUNICODE_STRING *StringUsed,
        SIZE_T *FilePartPrefixCch,
        PBOOLEAN NameInvalid,
        RTL_PATH_TYPE *InputPathType,
        SIZE_T *BytesRequired)
{
  wchar_t *v11; // r12
  SIZE_T *v12; // r13
  SIZE_T *v13; // r15
  wchar_t *StringRoutine; // rsi
  unsigned __int16 MaximumLength; // bx
  wchar_t *Buffer; // r8
  unsigned int FullPathName_Ustr; // eax
  __int64 v18; // rbx
  NTSTATUS v19; // ebx
  unsigned __int16 v21; // bx
  __int64 v22; // r13
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v29; // [rsp+78h] [rbp+10h] BYREF
  __int64 v30; // [rsp+88h] [rbp+20h]

  v29 = 0LL;
  v11 = 0LL;
  if ( StringUsed )
    *StringUsed = 0LL;
  v12 = BytesRequired;
  if ( BytesRequired )
    *BytesRequired = 0LL;
  v13 = FilePartPrefixCch;
  if ( FilePartPrefixCch )
    *FilePartPrefixCch = 0LL;
  StringRoutine = 0LL;
  SLODWORD(FilePartPrefixCch) = *InputPathType;
  if ( StaticString )
  {
    if ( DynamicString && !StringUsed )
    {
      v19 = -1073741811;
      goto LABEL_22;
    }
    MaximumLength = StaticString->MaximumLength;
    Buffer = StaticString->Buffer;
    v30 = MaximumLength;
LABEL_11:
    LODWORD(BytesRequired) = MaximumLength;
    FullPathName_Ustr = RtlGetFullPathName_Ustr(
                          &FileName->Length,
                          MaximumLength,
                          Buffer,
                          &v29,
                          NameInvalid,
                          (__int64)&FilePartPrefixCch);
    LOWORD(v18) = FullPathName_Ustr;
    if ( FullPathName_Ustr )
    {
      if ( StaticString && FullPathName_Ustr < (unsigned int)BytesRequired )
      {
        StaticString->Length = FullPathName_Ustr;
        if ( v13 )
        {
          if ( v29 )
            v24 = (signed __int64)(v29 - (unsigned __int64)StaticString->Buffer) >> 1;
          else
            v24 = 0LL;
          *v13 = v24;
        }
        if ( StringUsed )
          *StringUsed = StaticString;
        v19 = 0;
      }
      else if ( DynamicString )
      {
        if ( v11 && FullPathName_Ustr < (unsigned int)BytesRequired )
        {
          DynamicString->MaximumLength = v30;
          DynamicString->Length = FullPathName_Ustr;
          v11[(unsigned __int64)FullPathName_Ustr >> 1] = 0;
          if ( v13 )
          {
            if ( v29 )
              v26 = (v29 - (__int64)v11) >> 1;
            else
              v26 = 0LL;
            *v13 = v26;
          }
          if ( StringUsed )
            *StringUsed = DynamicString;
          DynamicString->Buffer = v11;
          v19 = 0;
          goto LABEL_22;
        }
        if ( (unsigned __int64)FullPathName_Ustr + 2 > 0xFFFE )
        {
LABEL_56:
          v19 = -1073741562;
        }
        else
        {
          while ( 1 )
          {
            v21 = v18 + 2;
            v22 = v21;
            StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v21);
            if ( !StringRoutine )
            {
              v19 = -1073741801;
              goto LABEL_18;
            }
            v23 = RtlGetFullPathName_Ustr(
                    &FileName->Length,
                    (unsigned int)v21 - 2,
                    StringRoutine,
                    &v29,
                    NameInvalid,
                    (__int64)&FilePartPrefixCch);
            v18 = v23;
            if ( !v23 )
              goto LABEL_47;
            if ( v23 <= (unsigned __int64)(v22 - 2) )
              break;
            NtdllpFreeStringRoutine(StringRoutine);
            if ( (unsigned __int64)(v18 + 2) > 0xFFFE )
              goto LABEL_56;
          }
          if ( v13 )
          {
            if ( v29 )
              v27 = (v29 - (__int64)StringRoutine) >> 1;
            else
              v27 = 0LL;
            *v13 = v27;
          }
          StringRoutine[(unsigned __int64)(unsigned int)v18 >> 1] = 0;
          DynamicString->Buffer = StringRoutine;
          DynamicString->Length = v18;
          DynamicString->MaximumLength = v22;
          if ( StringUsed )
            *StringUsed = DynamicString;
          v19 = 0;
        }
        StringRoutine = 0LL;
      }
      else
      {
        if ( v12 )
          *v12 = FullPathName_Ustr;
        v19 = -1073741789;
      }
    }
    else
    {
LABEL_47:
      v19 = -1073741773;
    }
LABEL_18:
    if ( v11 )
      NtdllpFreeStringRoutine(v11);
    if ( StringRoutine )
      NtdllpFreeStringRoutine(StringRoutine);
LABEL_22:
    *InputPathType = (int)FilePartPrefixCch;
    return v19;
  }
  MaximumLength = 520;
  v30 = 520LL;
  v25 = NtdllpAllocateStringRoutine(520LL);
  v11 = (wchar_t *)v25;
  if ( v25 )
  {
    Buffer = (wchar_t *)v25;
    goto LABEL_11;
  }
  return -1073741801;
}
