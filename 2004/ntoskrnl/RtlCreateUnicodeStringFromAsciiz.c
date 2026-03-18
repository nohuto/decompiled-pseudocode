/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x1407905D0
 * Callers:
 *     CmpSetSystemRegistryString @ 0x1403B5690 (CmpSetSystemRegistryString.c)
 *     IopInitializeBootLogging @ 0x14088E690 (IopInitializeBootLogging.c)
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 *     VhdiInitializeBootDisk @ 0x140A91EA0 (VhdiInitializeBootDisk.c)
 * Callees:
 *     RtlInitAnsiStringEx @ 0x1403B5740 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063D070 (RtlAnsiStringToUnicodeString.c)
 */

bool __fastcall RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, const char *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  return RtlInitAnsiStringEx(&DestinationStringa, a2) >= 0
      && RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u) >= 0;
}
