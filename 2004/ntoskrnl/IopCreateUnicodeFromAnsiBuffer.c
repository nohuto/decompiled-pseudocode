/*
 * XREFs of IopCreateUnicodeFromAnsiBuffer @ 0x1403C4CA4
 * Callers:
 *     IopCreateArcName @ 0x14076DB08 (IopCreateArcName.c)
 *     IopMarkBootPartition @ 0x140A66D60 (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402770E0 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063D070 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall IopCreateUnicodeFromAnsiBuffer(PUNICODE_STRING DestinationString, const CHAR *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  RtlInitAnsiString(&DestinationStringa, a2);
  return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u);
}
