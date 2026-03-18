/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x14078E700
 * Callers:
 *     CmpSetSystemRegistryString @ 0x1403B2F94 (CmpSetSystemRegistryString.c)
 *     IopInitializeBootLogging @ 0x14088D370 (IopInitializeBootLogging.c)
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 *     VhdiInitializeBootDisk @ 0x140A92790 (VhdiInitializeBootDisk.c)
 * Callees:
 *     RtlInitAnsiStringEx @ 0x1403B3040 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x14068A690 (RtlAnsiStringToUnicodeString.c)
 */

bool __fastcall RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, const char *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  return RtlInitAnsiStringEx(&DestinationStringa, a2) >= 0
      && RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u) >= 0;
}
