/*
 * XREFs of _RtlGetFullPathName_UstrEx@32 @ 0x4B2C9650
 * Callers:
 *     _RtlDosSearchPath_Ustr@36 @ 0x4B2C5170 (_RtlDosSearchPath_Ustr@36.c)
 *     _RtlDosApplyFileIsolationRedirection_Ustr@36 @ 0x4B2C9830 (_RtlDosApplyFileIsolationRedirection_Ustr@36.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlGetFullPathName_Ustr@24 @ 0x4B2C8CA0 (_RtlGetFullPathName_Ustr@24.c)
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
  PUNICODE_STRING *v8; // esi
  wchar_t *Buffer; // eax
  unsigned int FullPathName_Ustr; // ecx
  NTSTATUS v11; // esi
  wchar_t *StringRoutine; // edi
  wchar_t *v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned __int16 v17; // cx
  signed int v18; // eax
  int v19; // ecx
  int v20; // eax
  unsigned __int16 MaximumLength; // [esp+Ch] [ebp-1Ch]
  int v22; // [esp+Ch] [ebp-1Ch]
  unsigned int v23; // [esp+Ch] [ebp-1Ch]
  int v24; // [esp+10h] [ebp-18h] BYREF
  POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor; // [esp+14h] [ebp-14h]
  unsigned int v26; // [esp+18h] [ebp-10h]
  int v27; // [esp+1Ch] [ebp-Ch]
  int v28[2]; // [esp+20h] [ebp-8h] BYREF

  v8 = StringUsed;
  v24 = 0;
  BoundaryDescriptor = 0;
  if ( StringUsed )
    *StringUsed = 0;
  if ( BytesRequired )
    *(_DWORD *)BytesRequired = 0;
  if ( FilePartPrefixCch )
    *(_DWORD *)FilePartPrefixCch = 0;
  v28[0] = *InputPathType;
  if ( StaticString )
  {
    if ( DynamicString && !StringUsed )
    {
      v11 = -1073741811;
LABEL_23:
      *InputPathType = (RTL_PATH_TYPE)v28[0];
      return v11;
    }
    MaximumLength = StaticString->MaximumLength;
    Buffer = StaticString->Buffer;
LABEL_11:
    FullPathName_Ustr = RtlGetFullPathName_Ustr(&FileName->Length, MaximumLength, Buffer, &v24, NameInvalid, v28);
    if ( FullPathName_Ustr )
    {
      if ( StaticString && FullPathName_Ustr < MaximumLength )
      {
        StaticString->Length = FullPathName_Ustr;
        if ( FilePartPrefixCch )
        {
          if ( v24 )
            v18 = (signed int)(v24 - (unsigned int)StaticString->Buffer) >> 1;
          else
            v18 = 0;
          *(_DWORD *)FilePartPrefixCch = v18;
        }
        if ( StringUsed )
          *StringUsed = StaticString;
        v11 = 0;
      }
      else if ( DynamicString )
      {
        v14 = (wchar_t *)BoundaryDescriptor;
        if ( BoundaryDescriptor )
        {
          v8 = StringUsed;
          if ( FullPathName_Ustr < MaximumLength )
          {
            DynamicString->Length = FullPathName_Ustr;
            DynamicString->MaximumLength = MaximumLength;
            v14[FullPathName_Ustr >> 1] = 0;
            if ( FilePartPrefixCch )
            {
              if ( v24 )
                v19 = (v24 - (int)v14) >> 1;
              else
                v19 = 0;
              *(_DWORD *)FilePartPrefixCch = v19;
            }
            if ( StringUsed )
              *StringUsed = DynamicString;
            DynamicString->Buffer = v14;
            v11 = 0;
            goto LABEL_23;
          }
        }
        if ( FullPathName_Ustr + 2 <= 0xFFFE )
        {
          while ( 1 )
          {
            v27 = (unsigned __int16)(FullPathName_Ustr + 2);
            v22 = v27;
            StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v27);
            if ( !StringRoutine )
            {
              v11 = -1073741801;
              goto LABEL_19;
            }
            v23 = v22 - 2;
            v15 = RtlGetFullPathName_Ustr(&FileName->Length, v23, StringRoutine, &v24, NameInvalid, v28);
            v16 = v15;
            v26 = v15;
            if ( !v15 )
            {
              v11 = -1073741773;
              goto LABEL_19;
            }
            if ( v15 <= v23 )
              break;
            RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)StringRoutine);
            LOWORD(FullPathName_Ustr) = v26;
            if ( v26 + 2 > 0xFFFE )
              goto LABEL_55;
          }
          if ( FilePartPrefixCch )
          {
            if ( v24 )
              v20 = (v24 - (int)StringRoutine) >> 1;
            else
              v20 = 0;
            *(_DWORD *)FilePartPrefixCch = v20;
          }
          StringRoutine[v16 >> 1] = 0;
          DynamicString->Length = v16;
          v17 = v27;
          DynamicString->Buffer = StringRoutine;
          DynamicString->MaximumLength = v17;
          if ( v8 )
            *v8 = DynamicString;
          StringRoutine = 0;
          v11 = 0;
          goto LABEL_19;
        }
LABEL_55:
        v11 = -1073741562;
      }
      else
      {
        if ( BytesRequired )
          *(_DWORD *)BytesRequired = FullPathName_Ustr;
        v11 = -1073741789;
      }
    }
    else
    {
      v11 = -1073741773;
    }
    StringRoutine = 0;
LABEL_19:
    if ( BoundaryDescriptor )
      RtlDeleteBoundaryDescriptor(BoundaryDescriptor);
    if ( StringRoutine )
      RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)StringRoutine);
    goto LABEL_23;
  }
  MaximumLength = 520;
  Buffer = (wchar_t *)NtdllpAllocateStringRoutine(520);
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)Buffer;
  if ( Buffer )
    goto LABEL_11;
  return -1073741801;
}
