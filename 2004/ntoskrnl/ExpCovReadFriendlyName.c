/*
 * XREFs of ExpCovReadFriendlyName @ 0x14095480C
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x140761018 (ExCovReadjustUnloadedModuleEntry.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x140953ABC (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovIsModulePresent @ 0x140953E54 (ExpCovIsModulePresent.c)
 *     ExpCovQueryLoadedModule @ 0x14095469C (ExpCovQueryLoadedModule.c)
 * Callees:
 *     DbgPrintEx @ 0x14037D2B0 (DbgPrintEx.c)
 *     RtlInitAnsiStringEx @ 0x1403B5740 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063D070 (RtlAnsiStringToUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x1406C5110 (RtlDuplicateUnicodeString.c)
 */

int __fastcall ExpCovReadFriendlyName(__int64 a1, const UNICODE_STRING *a2, UNICODE_STRING *a3)
{
  __int64 v3; // rax
  int result; // eax
  _STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(unsigned int *)(a1 + 36);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( *(_DWORD *)(v3 + a1) == 327680 )
  {
    result = RtlInitAnsiStringEx(&DestinationString, (PCSZ)(a1 + *(unsigned int *)(v3 + a1 + 12)));
    if ( result >= 0 )
      return RtlAnsiStringToUnicodeString(a3, &DestinationString, 1u);
  }
  else
  {
    DbgPrintEx(
      0x7Eu,
      2u,
      "COV: Instrumentation Version %ul is not yet supported in kernel hence defaulting to binary name instead of friendl"
      "y name for %wZ\n");
    return RtlDuplicateUnicodeString(1u, a2, a3);
  }
  return result;
}
