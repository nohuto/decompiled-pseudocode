/*
 * XREFs of RtlUnicodeStringToUTF8String @ 0x180102BB0
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     RtlUnicodeToUTF8N @ 0x18005A9B0 (RtlUnicodeToUTF8N.c)
 *     CountUnicodeToUTF8 @ 0x18005AC68 (CountUnicodeToUTF8.c)
 *     NtdllpAllocateStringRoutine @ 0x18006DAA0 (NtdllpAllocateStringRoutine.c)
 */

NTSTATUS __cdecl RtlUnicodeStringToUTF8String(
        PUTF8_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  int v6; // edi
  NTSTATUS result; // eax
  SIZE_T v8; // rax
  unsigned __int16 Length; // cx
  char *StringRoutine; // rax
  unsigned __int16 MaximumLength; // ax
  int v12; // esi
  ULONG UTF8StringActualByteCount; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  result = CountUnicodeToUTF8(
             (unsigned int *)SourceString->Buffer,
             (unsigned int)SourceString->Length + 2,
             &UTF8StringActualByteCount);
  if ( result >= 0 )
  {
    v8 = UTF8StringActualByteCount;
    if ( UTF8StringActualByteCount > 0xFFFF )
      return -1073741584;
    Length = UTF8StringActualByteCount - 1;
    DestinationString->Length = UTF8StringActualByteCount - 1;
    if ( AllocateDestinationString )
    {
      DestinationString->MaximumLength = v8;
      StringRoutine = (char *)NtdllpAllocateStringRoutine(v8);
      DestinationString->Buffer = StringRoutine;
      if ( !StringRoutine )
        return -1073741801;
      Length = DestinationString->Length;
    }
    else
    {
      MaximumLength = DestinationString->MaximumLength;
      if ( Length >= MaximumLength )
      {
        if ( !MaximumLength )
          return -2147483643;
        Length = MaximumLength - 1;
        v6 = -2147483643;
        DestinationString->Length = MaximumLength - 1;
      }
    }
    v12 = RtlUnicodeToUTF8N(
            DestinationString->Buffer,
            Length,
            &UTF8StringActualByteCount,
            SourceString->Buffer,
            SourceString->Length);
    if ( v12 < 0 )
    {
      if ( AllocateDestinationString )
      {
        NtdllpFreeStringRoutine(DestinationString->Buffer);
        DestinationString->Buffer = 0LL;
      }
    }
    else
    {
      v12 = v6;
      DestinationString->Buffer[UTF8StringActualByteCount] = 0;
    }
    return v12;
  }
  return result;
}
