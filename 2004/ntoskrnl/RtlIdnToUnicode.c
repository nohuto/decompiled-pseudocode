/*
 * XREFs of RtlIdnToUnicode @ 0x140913300
 * Callers:
 *     <none>
 * Callees:
 *     IdnaMemAlloc @ 0x140587E20 (IdnaMemAlloc.c)
 *     RtlpIdnToUnicodeWorker @ 0x140587E94 (RtlpIdnToUnicodeWorker.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
