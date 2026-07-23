/*
 * XREFs of PiSwAllocMem @ 0x1408AEA48
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x14074DD78 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PiSwAllocMem(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x57706E50u);
}
