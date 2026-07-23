/*
 * XREFs of RtlUnicodeStringToUTF8String @ 0x14091C0C0
 * Callers:
 *     <none>
 * Callees:
 *     CountUnicodeToUTF8 @ 0x140329F14 (CountUnicodeToUTF8.c)
 *     ExpAllocateStringRoutine @ 0x1406C4F70 (ExpAllocateStringRoutine.c)
 *     RtlUnicodeToUTF8N @ 0x1406DA5A0 (RtlUnicodeToUTF8N.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlUnicodeStringToUTF8String(
        PUTF8_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  int Length; // edx
  int v7; // edi
  NTSTATUS result; // eax
  SIZE_T v9; // rax
  unsigned __int16 v10; // cx
  char *StringRoutine; // rax
  unsigned __int16 MaximumLength; // ax
  ULONG v13; // edx
  int v14; // esi
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp+10h] BYREF
  ULONG UTF8StringActualByteCount; // [rsp+68h] [rbp+20h] BYREF

  Length = SourceString->Length;
  LODWORD(NumberOfBytes) = 0;
  UTF8StringActualByteCount = 0;
  v7 = 0;
  result = CountUnicodeToUTF8((unsigned int *)SourceString->Buffer, Length + 2, (unsigned int *)&NumberOfBytes);
  if ( result >= 0 )
  {
    v9 = (unsigned int)NumberOfBytes;
    if ( (unsigned int)NumberOfBytes > 0xFFFF )
      return -1073741584;
    v10 = NumberOfBytes - 1;
    DestinationString->Length = NumberOfBytes - 1;
    if ( AllocateDestinationString )
    {
      DestinationString->MaximumLength = v9;
      StringRoutine = (char *)ExpAllocateStringRoutine(v9);
      DestinationString->Buffer = StringRoutine;
      if ( !StringRoutine )
        return -1073741801;
      v10 = DestinationString->Length;
    }
    else
    {
      MaximumLength = DestinationString->MaximumLength;
      if ( v10 >= MaximumLength )
      {
        if ( !MaximumLength )
          return -2147483643;
        v10 = MaximumLength - 1;
        v7 = -2147483643;
        DestinationString->Length = MaximumLength - 1;
      }
    }
    v14 = RtlUnicodeToUTF8N(
            DestinationString->Buffer,
            v10,
            &UTF8StringActualByteCount,
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
      v14 = v7;
      DestinationString->Buffer[UTF8StringActualByteCount] = 0;
    }
    return v14;
  }
  return result;
}
