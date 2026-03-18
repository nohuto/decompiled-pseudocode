/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x14079CF80
 * Callers:
 *     CmpSetSystemRegistryString @ 0x1403B6754 (CmpSetSystemRegistryString.c)
 *     IopInitializeBootLogging @ 0x140894150 (IopInitializeBootLogging.c)
 *     InitBootProcessor @ 0x140A3CF64 (InitBootProcessor.c)
 *     VhdiInitializeBootDisk @ 0x140A97B00 (VhdiInitializeBootDisk.c)
 * Callees:
 *     RtlInitAnsiStringEx @ 0x1403B6800 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405DFB00 (RtlAnsiStringToUnicodeString.c)
 */

bool __fastcall RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, const char *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  return RtlInitAnsiStringEx(&DestinationStringa, a2) >= 0
      && RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u) >= 0;
}
