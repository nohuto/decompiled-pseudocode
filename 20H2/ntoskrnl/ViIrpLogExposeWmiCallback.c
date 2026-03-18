/*
 * XREFs of ViIrpLogExposeWmiCallback @ 0x1409E6F40
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x14079A9E0 (IoCreateDriver.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall ViIrpLogExposeWmiCallback(PVOID P)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&ViDdiWmiMofKey, &word_1409C5CF0);
  RtlInitUnicodeString(&ViDdiWmiMofResourceName, &word_1409C5CF0);
  RtlInitUnicodeString(&DestinationString, L"\\DRIVER\\VERIFIER_DDI");
  IoCreateDriver(&DestinationString, (_DMA_OPERATIONS *)ViDdiDriverEntry);
  ViIrpLogDdiLock = 2;
  ExFreePoolWithTag(P, 0);
}
