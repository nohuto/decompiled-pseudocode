/*
 * XREFs of IopCreateUnicodeFromAnsiBuffer @ 0x1403C5578
 * Callers:
 *     IopCreateArcName @ 0x14080F068 (IopCreateArcName.c)
 *     IopMarkBootPartition @ 0x140B0E670 (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall IopCreateUnicodeFromAnsiBuffer(PUNICODE_STRING DestinationString, const char *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  RtlInitAnsiString(&DestinationStringa, a2);
  return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u);
}
