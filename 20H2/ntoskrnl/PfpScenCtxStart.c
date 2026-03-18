/*
 * XREFs of PfpScenCtxStart @ 0x1407BB9CC
 * Callers:
 *     PfInitializeSuperfetch @ 0x140A6D32C (PfInitializeSuperfetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     PfpCreateEvent @ 0x1407BBA4C (PfpCreateEvent.c)
 */

__int64 __fastcall PfpScenCtxStart(__int64 a1)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchScenarioNotify");
  return PfpCreateEvent(&DestinationString, 0LL, a1 + 64);
}
