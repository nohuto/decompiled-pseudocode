/*
 * XREFs of _RtlUnicodeStringToAnsiString@12 @ 0x4B2E0C90
 * Callers:
 *     _LdrpGetModuleName@16 @ 0x4B32F32C (_LdrpGetModuleName@16.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlxUnicodeStringToOemSize@4 @ 0x4B2E0C60 (_RtlxUnicodeStringToOemSize@4.c)
 *     _RtlUnicodeStringToAnsiString@12 @ 0x4B2E0C90 (_RtlUnicodeStringToAnsiString@12.c)
 *     _RtlUnicodeToMultiByteN@20 @ 0x4B2E0D70 (_RtlUnicodeToMultiByteN@20.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  void *v3; // ecx
  ULONG v4; // eax
  unsigned __int16 v5; // cx
  unsigned __int16 MaximumLength; // ax
  NTSTATUS result; // eax
  int v8; // edi
  char *StringRoutine; // eax
  ULONG BytesInMultiByteString; // [esp+14h] [ebp-24h] BYREF
  NTSTATUS v11; // [esp+18h] [ebp-20h]
  NTSTATUS v12; // [esp+1Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v11 = 0;
  v4 = RtlxUnicodeStringToOemSize(v3, (PWCH *)SourceString);
  if ( v4 > 0xFFFF )
    return -1073741584;
  v5 = v4 - 1;
  DestinationString->Length = v4 - 1;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v4;
    StringRoutine = (char *)NtdllpAllocateStringRoutine(v4);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( v5 >= MaximumLength )
    {
      if ( !MaximumLength )
        return -2147483643;
      v11 = -2147483643;
      DestinationString->Length = MaximumLength - 1;
    }
  }
  v12 = 0;
  ms_exc.registration.TryLevel = 0;
  result = RtlUnicodeToMultiByteN(
             DestinationString->Buffer,
             DestinationString->Length,
             &BytesInMultiByteString,
             (PCWCH)SourceString->Buffer,
             SourceString->Length);
  v8 = result;
  v12 = result;
  if ( result >= 0 )
    DestinationString->Buffer[BytesInMultiByteString] = 0;
  ms_exc.registration.TryLevel = -2;
  if ( result < 0 && AllocateDestinationString )
  {
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)DestinationString->Buffer);
    DestinationString->Buffer = 0;
    if ( v8 >= 0 )
      return v11;
    return v8;
  }
  return result;
}
