/*
 * XREFs of ExpSingleStringCheck @ 0x140A69464
 * Callers:
 *     ExpStringCheck @ 0x140A69180 (ExpStringCheck.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     RtlComputeCrc32 @ 0x1402A2690 (RtlComputeCrc32.c)
 */

__int64 __fastcall ExpSingleStringCheck(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return RtlComputeCrc32(0, (char *)DestinationString.Buffer, DestinationString.Length);
}
