/*
 * XREFs of PiSwFreeMem @ 0x1408AB954
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1407377F8 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwFreeMem(void *a1)
{
  ExFreePoolWithTag(a1, 0x57706E50u);
}
