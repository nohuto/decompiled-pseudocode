/*
 * XREFs of PiSwFreeMem @ 0x1408AEBB4
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x14074DD78 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwFreeMem(void *a1)
{
  ExFreePoolWithTag(a1, 0x57706E50u);
}
