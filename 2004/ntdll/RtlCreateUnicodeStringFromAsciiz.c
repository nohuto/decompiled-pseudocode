/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x180016570
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x180016530 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x180019580 (RtlAnsiStringToUnicodeString.c)
 */

bool __fastcall RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, const char *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  return RtlInitAnsiStringEx(&DestinationStringa, a2) >= 0
      && RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u) >= 0;
}
