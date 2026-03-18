/*
 * XREFs of ExpSingleStringCheck @ 0x140B0B5F8
 * Callers:
 *     ExpStringCheck @ 0x140B0B314 (ExpStringCheck.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     RtlComputeCrc32 @ 0x140369820 (RtlComputeCrc32.c)
 */

__int64 __fastcall ExpSingleStringCheck(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return RtlComputeCrc32(0, (char *)DestinationString.Buffer, DestinationString.Length);
}
