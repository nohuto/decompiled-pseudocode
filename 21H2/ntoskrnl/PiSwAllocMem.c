/*
 * XREFs of PiSwAllocMem @ 0x140953348
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x140765DC0 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiSwAllocMem(__int64 a1)
{
  return ExAllocatePool2(256LL, a1, 1466986064LL);
}
