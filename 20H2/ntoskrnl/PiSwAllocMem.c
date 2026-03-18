/*
 * XREFs of PiSwAllocMem @ 0x1408B1318
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x140746C88 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PiSwAllocMem(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x57706E50u);
}
