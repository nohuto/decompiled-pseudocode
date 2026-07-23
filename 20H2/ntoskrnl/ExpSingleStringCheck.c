/*
 * XREFs of ExpSingleStringCheck @ 0x140A6C02C
 * Callers:
 *     ExpStringCheck @ 0x140A6BD48 (ExpStringCheck.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     RtlComputeCrc32 @ 0x140305E80 (RtlComputeCrc32.c)
 */

ULONG32 __fastcall ExpSingleStringCheck(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return RtlComputeCrc32(0, DestinationString.Buffer, DestinationString.Length);
}
