/*
 * XREFs of PiSwFreeMem @ 0x1408AA634
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x140753958 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwFreeMem(void *a1)
{
  ExFreePoolWithTag(a1, 0x57706E50u);
}
