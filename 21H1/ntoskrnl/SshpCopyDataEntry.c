/*
 * XREFs of SshpCopyDataEntry @ 0x14057A170
 * Callers:
 *     SleepstudyHelperCreateBlockerData @ 0x1408F7110 (SleepstudyHelperCreateBlockerData.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x14025C490 (RtlUnicodeStringCopy.c)
 *     SSHSupportAllocatePaged @ 0x1406E4DFC (SSHSupportAllocatePaged.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SshpCopyDataEntry(ULONG Tag, PCUNICODE_STRING SourceString, PUNICODE_STRING DestinationString)
{
  unsigned __int16 Length; // bx
  wchar_t *Paged; // rax
  wchar_t *v8; // rbp
  NTSTATUS v9; // ebx

  Length = SourceString->Length;
  Paged = (wchar_t *)SSHSupportAllocatePaged(SourceString->Length, Tag);
  v8 = Paged;
  if ( Paged )
  {
    DestinationString->Buffer = Paged;
    DestinationString->Length = 0;
    DestinationString->MaximumLength = Length;
    v9 = RtlUnicodeStringCopy(DestinationString, SourceString);
    if ( v9 < 0 )
    {
      ExFreePoolWithTag(v8, Tag);
    }
    else
    {
      v9 = 0;
      *(_QWORD *)&DestinationString[1].Length = *(_QWORD *)&SourceString[1].Length;
      DestinationString[1].Buffer = SourceString[1].Buffer;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v9;
}
