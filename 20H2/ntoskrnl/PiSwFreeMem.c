/*
 * XREFs of PiSwFreeMem @ 0x1408B1484
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x140746C88 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwFreeMem(void *a1)
{
  ExFreePoolWithTag(a1, 0x57706E50u);
}
