/*
 * XREFs of PiGetDriverMutableStateDirectory @ 0x1408A1EF8
 * Callers:
 *     IoGetDriverDirectory @ 0x1408A1640 (IoGetDriverDirectory.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintfEx @ 0x14036DF30 (RtlUnicodeStringPrintfEx.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     IopAllocateUnicodeString @ 0x140743F8C (IopAllocateUnicodeString.c)
 *     PiGetStateRootPath @ 0x14077D51C (PiGetStateRootPath.c)
 *     PiOpenDirectoryWithRoot @ 0x1408A2060 (PiOpenDirectoryWithRoot.c)
 */

__int64 __fastcall PiGetDriverMutableStateDirectory(__int64 a1, __int64 a2, _QWORD *a3)
{
  int StateRootPath; // ebx
  __int64 v6; // rdx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-10h] BYREF

  DestinationString = 0LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  StateRootPath = PiGetStateRootPath(
                    L"Win32ServiceStateRoot",
                    L"\\SystemRoot\\ServiceState",
                    LocationTypeFileSystem,
                    &DestinationString);
  if ( StateRootPath >= 0 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( aData[v6] );
    if ( DestinationString.Length
       + (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 24LL)
       + 4
       + 2 * (_DWORD)v6 <= 0xFFFE )
    {
      StateRootPath = IopAllocateUnicodeString(
                        (__int64)&UnicodeString,
                        DestinationString.Length
                      + *(_WORD *)(*(_QWORD *)(a1 + 48) + 24LL)
                      + 4
                      + 2 * (unsigned __int16)v6);
      if ( StateRootPath >= 0 )
      {
        StateRootPath = RtlUnicodeStringPrintfEx(
                          &UnicodeString,
                          0LL,
                          0x800u,
                          L"%wZ\\%wZ\\%ws",
                          &DestinationString,
                          *(_QWORD *)(a1 + 48) + 24LL,
                          L"Data");
        if ( StateRootPath >= 0 )
        {
          StateRootPath = PiOpenDirectoryWithRoot(&DestinationString, &UnicodeString);
          if ( StateRootPath >= 0 )
            *a3 = 0LL;
        }
      }
    }
    else
    {
      StateRootPath = -2147483643;
    }
  }
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)StateRootPath;
}
