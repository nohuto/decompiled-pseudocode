/*
 * XREFs of RtlUpcaseUnicodeStringToAnsiString @ 0x14090C900
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1405E63B0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     ExpAllocateStringRoutine @ 0x1406F19D0 (ExpAllocateStringRoutine.c)
 *     RtlxUnicodeStringToAnsiSize @ 0x1407480F0 (RtlxUnicodeStringToAnsiSize.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  char *StringRoutine; // rax
  ULONG v9; // edx
  int v10; // edi
  ULONG BytesInMultiByteString; // [rsp+78h] [rbp+20h] BYREF

  BytesInMultiByteString = 0;
  v6 = RtlxUnicodeStringToAnsiSize(SourceString);
  if ( v6 > 0xFFFF )
    return -1073741584;
  DestinationString->Length = v6 - 1;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v6;
    StringRoutine = (char *)ExpAllocateStringRoutine(v6);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else if ( (unsigned __int16)(v6 - 1) >= DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v10 = RtlUpcaseUnicodeToMultiByteN(
          DestinationString->Buffer,
          DestinationString->Length,
          &BytesInMultiByteString,
          SourceString->Buffer,
          SourceString->Length);
  if ( v10 >= 0 )
  {
    DestinationString->Buffer[BytesInMultiByteString] = 0;
    v10 = 0;
  }
  if ( v10 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePoolWithTag(DestinationString->Buffer, v9);
      DestinationString->Buffer = 0LL;
    }
  }
  return v10;
}
