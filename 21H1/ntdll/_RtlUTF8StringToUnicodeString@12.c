/*
 * XREFs of _RtlUTF8StringToUnicodeString@12 @ 0x4B36A6A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlUTF8ToUnicodeN@20 @ 0x4B2DD1E0 (_RtlUTF8ToUnicodeN@20.c)
 *     _CountUTF8ToUnicode@12 @ 0x4B2DD464 (_CountUTF8ToUnicode@12.c)
 */

NTSTATUS __cdecl RtlUTF8StringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PUTF8_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS result; // eax
  ULONG v4; // eax
  unsigned __int16 Length; // cx
  wchar_t *StringRoutine; // eax
  unsigned int v7; // edx
  int v8; // edi
  ULONG UnicodeStringActualByteCount; // [esp+4h] [ebp-4h] BYREF

  result = CountUTF8ToUnicode(SourceString->Buffer, SourceString->Length + 1, &UnicodeStringActualByteCount);
  if ( result >= 0 )
  {
    v4 = UnicodeStringActualByteCount;
    if ( UnicodeStringActualByteCount > 0xFFFE )
      return -1073741584;
    Length = UnicodeStringActualByteCount - 2;
    DestinationString->Length = UnicodeStringActualByteCount - 2;
    if ( AllocateDestinationString )
    {
      DestinationString->MaximumLength = v4;
      StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v4);
      DestinationString->Buffer = StringRoutine;
      if ( !StringRoutine )
        return -1073741801;
      Length = DestinationString->Length;
    }
    else
    {
      v7 = Length + 2;
      if ( v7 > DestinationString->MaximumLength || v7 < 2 )
        return -2147483643;
    }
    v8 = RtlUTF8ToUnicodeN(
           (PWSTR)DestinationString->Buffer,
           Length,
           &UnicodeStringActualByteCount,
           SourceString->Buffer,
           SourceString->Length);
    if ( v8 < 0 )
    {
      if ( AllocateDestinationString )
      {
        RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)DestinationString->Buffer);
        DestinationString->Buffer = 0;
      }
    }
    else
    {
      v8 = 0;
      DestinationString->Buffer[UnicodeStringActualByteCount >> 1] = 0;
    }
    return v8;
  }
  return result;
}
