/*
 * XREFs of IopCreateUnicodeFromAnsiBuffer @ 0x1403B6C1C
 * Callers:
 *     IopCreateArcName @ 0x14077C538 (IopCreateArcName.c)
 *     IopMarkBootPartition @ 0x140A5A330 (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14023DB90 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405DFB00 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall IopCreateUnicodeFromAnsiBuffer(PUNICODE_STRING DestinationString, const CHAR *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  RtlInitAnsiString(&DestinationStringa, a2);
  return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u);
}
