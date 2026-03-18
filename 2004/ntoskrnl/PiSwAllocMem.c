/*
 * XREFs of PiSwAllocMem @ 0x1408AB7E8
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1407377F8 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PiSwAllocMem(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x57706E50u);
}
