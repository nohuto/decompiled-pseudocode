/*
 * XREFs of RtlpConstructCrossVmObjectPath @ 0x140911158
 * Callers:
 *     RtlConstructCrossVmMutexPath @ 0x140911140 (RtlConstructCrossVmMutexPath.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14025BA90 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1402E1FA0 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     ExpAllocateStringRoutine @ 0x1406D0920 (ExpAllocateStringRoutine.c)
 *     RtlStringFromGUIDEx @ 0x14070EF18 (RtlStringFromGUIDEx.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpConstructCrossVmObjectPath(UNICODE_STRING *a1, unsigned int *a2, unsigned int *a3)
{
  wchar_t *Buffer; // rdi
  int appended; // ebx
  ULONG v8; // edx
  UNICODE_STRING Destination; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING Source; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-10h] BYREF

  Destination = 0LL;
  Destination.MaximumLength = 112;
  Source = 0LL;
  UnicodeString = 0LL;
  if ( a3 )
    Destination.MaximumLength = 190;
  Destination.Buffer = (wchar_t *)ExpAllocateStringRoutine(a3 != 0LL ? 190LL : 112LL);
  Buffer = Destination.Buffer;
  if ( Destination.Buffer )
  {
    appended = RtlAppendUnicodeStringToString(&Destination, &stru_140009668);
    if ( appended < 0
      || (appended = RtlAppendUnicodeToString(&Destination, L"\\"), appended < 0)
      || a3
      && ((appended = RtlStringFromGUIDEx(a3, (__int64)&Source, 1), appended < 0)
       || (appended = RtlAppendUnicodeStringToString(&Destination, &Source), appended < 0)
       || (appended = RtlAppendUnicodeToString(&Destination, L"\\"), appended < 0))
      || (appended = RtlStringFromGUIDEx(a2, (__int64)&UnicodeString, 1), appended < 0)
      || (appended = RtlAppendUnicodeStringToString(&Destination, &UnicodeString), appended < 0) )
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
  RtlFreeAnsiString(&Source);
  RtlFreeAnsiString(&UnicodeString);
  if ( Buffer )
    ExFreePoolWithTag(Buffer, v8);
  return (unsigned int)appended;
}
