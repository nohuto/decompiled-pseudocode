/*
 * XREFs of RtlUTF8StringToUnicodeString @ 0x14091BFC0
 * Callers:
 *     PiGetDefaultMessageString @ 0x140766E94 (PiGetDefaultMessageString.c)
 * Callees:
 *     CountUTF8ToUnicode @ 0x14058D598 (CountUTF8ToUnicode.c)
 *     ExpAllocateStringRoutine @ 0x1406C4F70 (ExpAllocateStringRoutine.c)
 *     RtlUTF8ToUnicodeN @ 0x1406D78D0 (RtlUTF8ToUnicodeN.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlUTF8StringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PUTF8_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  int v6; // edx
  char *Buffer; // rcx
  NTSTATUS result; // eax
  SIZE_T v9; // rax
  unsigned __int16 Length; // cx
  wchar_t *StringRoutine; // rax
  unsigned __int64 v12; // rdx
  ULONG v13; // edx
  int v14; // edi
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp+10h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+68h] [rbp+20h] BYREF

  v6 = SourceString->Length + 1;
  LODWORD(NumberOfBytes) = 0;
  Buffer = SourceString->Buffer;
  UnicodeStringActualByteCount = 0;
  result = CountUTF8ToUnicode(Buffer, v6, &NumberOfBytes);
  if ( result >= 0 )
  {
    v9 = (unsigned int)NumberOfBytes;
    if ( (unsigned int)NumberOfBytes > 0xFFFE )
      return -1073741584;
    Length = NumberOfBytes - 2;
    DestinationString->Length = NumberOfBytes - 2;
    if ( AllocateDestinationString )
    {
      DestinationString->MaximumLength = v9;
      StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v9);
      DestinationString->Buffer = StringRoutine;
      if ( !StringRoutine )
        return -1073741801;
      Length = DestinationString->Length;
    }
    else
    {
      v12 = Length + 2LL;
      if ( v12 > DestinationString->MaximumLength || v12 < 2 )
        return -2147483643;
    }
    v14 = RtlUTF8ToUnicodeN(
            DestinationString->Buffer,
            Length,
            &UnicodeStringActualByteCount,
            SourceString->Buffer,
            SourceString->Length);
    if ( v14 < 0 )
    {
      if ( AllocateDestinationString )
      {
        ExFreePoolWithTag(DestinationString->Buffer, v13);
        DestinationString->Buffer = 0LL;
      }
    }
    else
    {
      v14 = 0;
      DestinationString->Buffer[(unsigned __int64)UnicodeStringActualByteCount >> 1] = 0;
    }
    return v14;
  }
  return result;
}
