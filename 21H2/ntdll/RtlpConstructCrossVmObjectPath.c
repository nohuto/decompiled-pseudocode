/*
 * XREFs of RtlpConstructCrossVmObjectPath @ 0x1800F5B9C
 * Callers:
 *     RtlConstructCrossVmMutexPath @ 0x1800F5B90 (RtlConstructCrossVmMutexPath.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlAppendUnicodeStringToString @ 0x180017270 (RtlAppendUnicodeStringToString.c)
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     RtlAppendUnicodeToString @ 0x180037990 (RtlAppendUnicodeToString.c)
 *     RtlStringFromGUIDEx @ 0x18006B070 (RtlStringFromGUIDEx.c)
 *     NtdllpAllocateStringRoutine @ 0x18006EBE0 (NtdllpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlpConstructCrossVmObjectPath(_UNICODE_STRING *a1, GUID *a2, GUID *a3)
{
  wchar_t *Buffer; // rdi
  NTSTATUS appended; // ebx
  _UNICODE_STRING Destination; // [rsp+20h] [rbp-30h] BYREF
  _UNICODE_STRING GuidString; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING Source; // [rsp+40h] [rbp-10h] BYREF

  Destination = 0LL;
  Destination.MaximumLength = 112;
  GuidString = 0LL;
  Source = 0LL;
  if ( a3 )
    Destination.MaximumLength = 190;
  Destination.Buffer = (wchar_t *)NtdllpAllocateStringRoutine(a3 != 0LL ? 190LL : 112LL);
  Buffer = Destination.Buffer;
  if ( Destination.Buffer )
  {
    appended = RtlAppendUnicodeStringToString(&Destination, &stru_18011E618);
    if ( appended < 0
      || (appended = RtlAppendUnicodeToString(&Destination, L"\\"), appended < 0)
      || a3
      && ((appended = RtlStringFromGUIDEx(a3, &GuidString, 1u), appended < 0)
       || (appended = RtlAppendUnicodeStringToString(&Destination, &GuidString), appended < 0)
       || (appended = RtlAppendUnicodeToString(&Destination, L"\\"), appended < 0))
      || (appended = RtlStringFromGUIDEx(a2, &Source, 1u), appended < 0)
      || (appended = RtlAppendUnicodeStringToString(&Destination, &Source), appended < 0) )
    {
      Buffer = Destination.Buffer;
    }
    else
    {
      Buffer = 0LL;
      *a1 = Destination;
    }
  }
  else
  {
    appended = -1073741801;
  }
  RtlFreeAnsiString(&GuidString);
  RtlFreeAnsiString(&Source);
  if ( Buffer )
    NtdllpFreeStringRoutine(Buffer);
  return (unsigned int)appended;
}
