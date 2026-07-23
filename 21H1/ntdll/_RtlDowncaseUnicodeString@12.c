/*
 * XREFs of _RtlDowncaseUnicodeString@12 @ 0x4B2AAB30
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDowncaseUnicodeString@12 @ 0x4B2AAB30 (_RtlDowncaseUnicodeString@12.c)
 *     _NLS_DOWNCASE@4 @ 0x4B2AABCB (_NLS_DOWNCASE@4.c)
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

NTSTATUS __cdecl RtlDowncaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned __int16 Length; // ax
  wchar_t *Buffer; // ecx
  NTSTATUS result; // eax
  unsigned int i; // edi
  wchar_t v7; // ax
  wchar_t *StringRoutine; // eax
  NTSTATUS v9; // [esp+14h] [ebp-20h]

  Length = SourceString->Length;
  Buffer = (wchar_t *)SourceString->Length;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = Length;
    StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(Buffer);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    Buffer = (wchar_t *)SourceString->Length;
  }
  else if ( Length > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  result = (unsigned __int16)Buffer >> 1;
  v9 = result;
  for ( i = 0; i < result; ++i )
  {
    LOWORD(Buffer) = SourceString->Buffer[i];
    v7 = NLS_DOWNCASE(Buffer);
    Buffer = DestinationString->Buffer;
    Buffer[i] = v7;
    result = v9;
  }
  return result;
}
