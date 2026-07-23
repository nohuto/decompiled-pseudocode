/*
 * XREFs of ExpSingleStringCheck @ 0x140A6A464
 * Callers:
 *     ExpStringCheck @ 0x140A6A180 (ExpStringCheck.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x14021FAD0 (RtlComputeCrc32.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 */

ULONG32 __fastcall ExpSingleStringCheck(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return RtlComputeCrc32(0, DestinationString.Buffer, DestinationString.Length);
}
