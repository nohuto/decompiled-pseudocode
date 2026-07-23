/*
 * XREFs of _RtlUnicodeStringToUTF8String@12 @ 0x4B36A770
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlUnicodeToUTF8N@20 @ 0x4B2E4640 (_RtlUnicodeToUTF8N@20.c)
 *     _CountUnicodeToUTF8@12 @ 0x4B2E47B1 (_CountUnicodeToUTF8@12.c)
 */

NTSTATUS __cdecl RtlUnicodeStringToUTF8String(
        PUTF8_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS result; // eax
  ULONG v4; // eax
  unsigned __int16 v5; // cx
  char *StringRoutine; // eax
  unsigned __int16 Length; // dx
  unsigned __int16 MaximumLength; // ax
  unsigned __int16 v9; // ax
  int v10; // edi
  ULONG UTF8StringActualByteCount; // [esp+4h] [ebp-8h] BYREF
  int v12; // [esp+8h] [ebp-4h]

  v12 = 0;
  result = CountUnicodeToUTF8((char *)SourceString->Buffer, SourceString->Length + 2, &UTF8StringActualByteCount);
  if ( result >= 0 )
  {
    v4 = UTF8StringActualByteCount;
    if ( UTF8StringActualByteCount > 0xFFFF )
      return -1073741584;
    v5 = UTF8StringActualByteCount - 1;
    DestinationString->Length = UTF8StringActualByteCount - 1;
    if ( AllocateDestinationString )
    {
      DestinationString->MaximumLength = v4;
      StringRoutine = (char *)NtdllpAllocateStringRoutine(v4);
      DestinationString->Buffer = StringRoutine;
      if ( !StringRoutine )
        return -1073741801;
      Length = DestinationString->Length;
    }
    else
    {
      MaximumLength = DestinationString->MaximumLength;
      Length = v5;
      if ( v5 >= MaximumLength )
      {
        if ( !MaximumLength )
          return -2147483643;
        v9 = MaximumLength - 1;
        v12 = -2147483643;
        DestinationString->Length = v9;
        Length = v9;
      }
    }
    v10 = RtlUnicodeToUTF8N(
            DestinationString->Buffer,
            Length,
            &UTF8StringActualByteCount,
            (PCWCH)SourceString->Buffer,
            SourceString->Length);
    if ( v10 < 0 )
    {
      if ( AllocateDestinationString )
      {
        RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)DestinationString->Buffer);
        DestinationString->Buffer = 0;
      }
    }
    else
    {
      v10 = v12;
      DestinationString->Buffer[UTF8StringActualByteCount] = 0;
    }
    return v10;
  }
  return result;
}
