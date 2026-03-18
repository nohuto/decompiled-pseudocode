/*
 * XREFs of HalpBlkApicEndOfInterrupt @ 0x140A1CF90
 * Callers:
 *     HalpBlkStubInterrupt @ 0x140A1BF80 (HalpBlkStubInterrupt.c)
 *     HalpBlkIpiInterrupt @ 0x140A1C100 (HalpBlkIpiInterrupt.c)
 *     HalpBlkLocalErrorInterrupt @ 0x140A1C1C0 (HalpBlkLocalErrorInterrupt.c)
 *     HalpBlkUnexpectedInterruptCommon @ 0x140A1CD00 (HalpBlkUnexpectedInterruptCommon.c)
 * Callees:
 *     HalpBlkApicWrite @ 0x140A1D148 (HalpBlkApicWrite.c)
 */

__int64 HalpBlkApicEndOfInterrupt()
{
  return HalpBlkApicWrite(176LL, 0LL);
}
