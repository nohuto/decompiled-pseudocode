/*
 * XREFs of ExpCovReadFriendlyName @ 0x140A03B84
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x1406EB634 (ExCovReadjustUnloadedModuleEntry.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x140A02E2C (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovIsModulePresent @ 0x140A031C4 (ExpCovIsModulePresent.c)
 *     ExpCovQueryLoadedModule @ 0x140A03A08 (ExpCovQueryLoadedModule.c)
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     RtlInitAnsiStringEx @ 0x1403C7DA0 (RtlInitAnsiStringEx.c)
 *     RtlDuplicateUnicodeString @ 0x1406A9D20 (RtlDuplicateUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 */

int __fastcall ExpCovReadFriendlyName(__int64 a1, const UNICODE_STRING *a2, UNICODE_STRING *a3)
{
  __int64 v3; // rax
  int result; // eax
  STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

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
