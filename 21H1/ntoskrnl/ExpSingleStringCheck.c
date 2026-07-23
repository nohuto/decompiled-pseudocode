/*
 * XREFs of ExpSingleStringCheck @ 0x140A6537C
 * Callers:
 *     ExpStringCheck @ 0x140A65098 (ExpStringCheck.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     RtlComputeCrc32 @ 0x1402F5E90 (RtlComputeCrc32.c)
 */

ULONG32 __fastcall ExpSingleStringCheck(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return RtlComputeCrc32(0, DestinationString.Buffer, DestinationString.Length);
}
