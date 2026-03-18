/*
 * XREFs of ViIrpLogExposeWmiCallback @ 0x1409E0F20
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x14078E2A0 (IoCreateDriver.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall ViIrpLogExposeWmiCallback(PVOID P)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&ViDdiWmiMofKey, &word_1409BFCE0);
  RtlInitUnicodeString(&ViDdiWmiMofResourceName, &word_1409BFCE0);
  RtlInitUnicodeString(&DestinationString, L"\\DRIVER\\VERIFIER_DDI");
  IoCreateDriver(&DestinationString, (_DMA_OPERATIONS *)ViDdiDriverEntry);
  ViIrpLogDdiLock = 2;
  ExFreePoolWithTag(P, 0);
}
