/*
 * XREFs of PiGetDriverMutableStateDirectory @ 0x140944218
 * Callers:
 *     IoGetDriverDirectory @ 0x140943930 (IoGetDriverDirectory.c)
 * Callees:
 *     RtlUnicodeStringPrintfEx @ 0x1402D1840 (RtlUnicodeStringPrintfEx.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     PiGetStateRootPath @ 0x1406DF520 (PiGetStateRootPath.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x140769784 (IopAllocateUnicodeString.c)
 *     PiOpenDirectoryWithRoot @ 0x140944390 (PiOpenDirectoryWithRoot.c)
 */

__int64 __fastcall PiGetDriverMutableStateDirectory(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  void *v6; // rdi
  int StateRootPath; // ebx
  __int64 v9; // rdx
  __int64 v11; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-18h] BYREF

  v11 = 0LL;
  DestinationString = 0LL;
  v6 = 0LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  StateRootPath = PiGetStateRootPath(
                    L"Win32ServiceStateRoot",
                    (__int64)L"\\SystemRoot\\ServiceState",
                    1LL,
                    &DestinationString);
  if ( StateRootPath >= 0 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(a2 + 2 * v9) );
    if ( DestinationString.Length
       + (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 24LL)
       + 4
       + 2 * (_DWORD)v9 <= 0xFFFE )
    {
      StateRootPath = IopAllocateUnicodeString(
                        (__int64)&UnicodeString,
                        DestinationString.Length
                      + *(_WORD *)(*(_QWORD *)(a1 + 48) + 24LL)
                      + 4
                      + 2 * (unsigned __int16)v9);
      if ( StateRootPath >= 0 )
      {
        StateRootPath = RtlUnicodeStringPrintfEx(
                          &UnicodeString,
                          0LL,
                          0x800u,
                          L"%wZ\\%wZ\\%ws",
                          &DestinationString,
                          *(_QWORD *)(a1 + 48) + 24LL,
                          a2);
        if ( StateRootPath >= 0 )
        {
          StateRootPath = PiOpenDirectoryWithRoot(&DestinationString, &UnicodeString, (__int64)&v11);
          if ( StateRootPath < 0 )
            v6 = (void *)v11;
          else
            *a4 = v11;
        }
      }
    }
    else
    {
      StateRootPath = -2147483643;
    }
  }
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v6 )
    ZwClose(v6);
  return (unsigned int)StateRootPath;
}
