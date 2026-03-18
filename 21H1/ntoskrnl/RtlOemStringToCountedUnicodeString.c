/*
 * XREFs of RtlOemStringToCountedUnicodeString @ 0x14090B4A0
 * Callers:
 *     <none>
 * Callees:
 *     ExpAllocateStringRoutine @ 0x1406D0920 (ExpAllocateStringRoutine.c)
 *     RtlOemToUnicodeN @ 0x1407497B0 (RtlOemToUnicodeN.c)
 *     RtlxOemStringToUnicodeSize @ 0x140749860 (RtlxOemStringToUnicodeSize.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlOemStringToCountedUnicodeString(
        PUNICODE_STRING DestinationString,
        PCOEM_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS result; // eax
  wchar_t *StringRoutine; // rax
  ULONG v8; // edx
  int v9; // esi
  ULONG BytesInUnicodeString; // [rsp+78h] [rbp+20h] BYREF

  result = RtlxOemStringToUnicodeSize(SourceString) - 2;
  if ( !result )
  {
    *(_DWORD *)&DestinationString->Length = 0;
    DestinationString->Buffer = 0LL;
    return result;
  }
  if ( (unsigned int)result > 0xFFFE )
    return -1073741584;
  DestinationString->Length = result;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = result;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine((unsigned int)result);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else if ( (unsigned __int16)result > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v9 = RtlOemToUnicodeN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInUnicodeString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v9 >= 0 )
    v9 = 0;
  if ( v9 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePoolWithTag(DestinationString->Buffer, v8);
      DestinationString->Buffer = 0LL;
    }
  }
  return v9;
}
