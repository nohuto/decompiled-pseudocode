/*
 * XREFs of RtlUTF8StringToUnicodeString @ 0x18005A910
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     RtlUTF8ToUnicodeN @ 0x18005A9E0 (RtlUTF8ToUnicodeN.c)
 *     CountUTF8ToUnicode @ 0x18005AD90 (CountUTF8ToUnicode.c)
 *     NtdllpAllocateStringRoutine @ 0x18006EBE0 (NtdllpAllocateStringRoutine.c)
 */

NTSTATUS __cdecl RtlUTF8StringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PUTF8_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS result; // eax
  ULONG v7; // eax
  unsigned __int16 Length; // cx
  wchar_t *StringRoutine; // rax
  int v10; // edi
  unsigned __int64 v11; // rdx
  ULONG UnicodeStringActualByteCount; // [rsp+48h] [rbp+10h] BYREF

  result = CountUTF8ToUnicode(
             SourceString->Buffer,
             (unsigned int)SourceString->Length + 1,
             &UnicodeStringActualByteCount);
  if ( result >= 0 )
  {
    v7 = UnicodeStringActualByteCount;
    if ( UnicodeStringActualByteCount > 0xFFFE )
      return -1073741584;
    Length = UnicodeStringActualByteCount - 2;
    DestinationString->Length = UnicodeStringActualByteCount - 2;
    if ( AllocateDestinationString )
    {
      DestinationString->MaximumLength = v7;
      StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v7);
      DestinationString->Buffer = StringRoutine;
      if ( !StringRoutine )
        return -1073741801;
      Length = DestinationString->Length;
    }
    else
    {
      v11 = Length + 2LL;
      if ( v11 > DestinationString->MaximumLength || v11 < 2 )
        return -2147483643;
    }
    v10 = RtlUTF8ToUnicodeN(
            DestinationString->Buffer,
            Length,
            &UnicodeStringActualByteCount,
            SourceString->Buffer,
            SourceString->Length);
    if ( v10 < 0 )
    {
      if ( AllocateDestinationString )
      {
        NtdllpFreeStringRoutine(DestinationString->Buffer);
        DestinationString->Buffer = 0LL;
      }
    }
    else
    {
      v10 = 0;
      DestinationString->Buffer[(unsigned __int64)UnicodeStringActualByteCount >> 1] = 0;
    }
    return v10;
  }
  return result;
}
