/*
 * XREFs of RtlIdnToUnicode @ 0x140911F80
 * Callers:
 *     <none>
 * Callees:
 *     IdnaMemAlloc @ 0x1405876F0 (IdnaMemAlloc.c)
 *     RtlpIdnToUnicodeWorker @ 0x140587764 (RtlpIdnToUnicodeWorker.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlIdnToUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  WCHAR *v9; // rdi
  NTSTATUS v11; // ebx
  BOOLEAN v12; // [rsp+30h] [rbp-18h]

  v9 = (WCHAR *)IdnaMemAlloc(0x3FEuLL);
  if ( !v9 )
    return -1073741801;
  v11 = RtlpIdnToUnicodeWorker(
          Flags,
          SourceString,
          SourceStringLength,
          DestinationString,
          DestinationStringLength,
          v9,
          v12);
  ExFreePoolWithTag(v9, 0);
  return v11;
}
