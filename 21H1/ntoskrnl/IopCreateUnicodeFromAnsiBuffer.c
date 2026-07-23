/*
 * XREFs of IopCreateUnicodeFromAnsiBuffer @ 0x1403B345C
 * Callers:
 *     IopCreateArcName @ 0x14076B368 (IopCreateArcName.c)
 *     IopMarkBootPartition @ 0x140A53F30 (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140203280 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14068A690 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall IopCreateUnicodeFromAnsiBuffer(PUNICODE_STRING DestinationString, const CHAR *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  RtlInitAnsiString(&DestinationStringa, a2);
  return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u);
}
