/*
 * XREFs of IopCreateUnicodeFromAnsiBuffer @ 0x1403B8534
 * Callers:
 *     IopCreateArcName @ 0x140780318 (IopCreateArcName.c)
 *     IopMarkBootPartition @ 0x140A61890 (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402502B0 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14062C640 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall IopCreateUnicodeFromAnsiBuffer(PUNICODE_STRING DestinationString, const char *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  RtlInitAnsiString(&DestinationStringa, a2);
  return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u);
}
