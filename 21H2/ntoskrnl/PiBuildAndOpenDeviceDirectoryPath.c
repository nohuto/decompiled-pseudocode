/*
 * XREFs of PiBuildAndOpenDeviceDirectoryPath @ 0x14089EE20
 * Callers:
 *     IoGetDeviceDirectory @ 0x14089E970 (IoGetDeviceDirectory.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintfEx @ 0x14036F210 (RtlUnicodeStringPrintfEx.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     IopAllocateUnicodeString @ 0x14074986C (IopAllocateUnicodeString.c)
 *     PiOpenDirectoryWithRoot @ 0x14089F790 (PiOpenDirectoryWithRoot.c)
 */

__int64 __fastcall PiBuildAndOpenDeviceDirectoryPath(
        PCUNICODE_STRING SourceString,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v8; // r9
  unsigned int v9; // ecx
  int UnicodeString; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)(a3 + 2 * v8) );
  v9 = *a2 + SourceString->Length + 20 + 2 * v8;
  if ( v9 <= 0xFFFE )
  {
    UnicodeString = IopAllocateUnicodeString((__int64)&DestinationString, v9);
    if ( UnicodeString >= 0 )
    {
      UnicodeString = RtlUnicodeStringPrintfEx(
                        &DestinationString,
                        0LL,
                        0x800u,
                        L"%wZ\\%ws\\%wZ\\%ws",
                        SourceString,
                        L"Devices",
                        a2,
                        a3);
      if ( UnicodeString >= 0 )
      {
        UnicodeString = PiOpenDirectoryWithRoot(SourceString, &DestinationString);
        if ( UnicodeString >= 0 )
          *a5 = 0LL;
      }
    }
  }
  else
  {
    UnicodeString = -2147483643;
  }
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)UnicodeString;
}
