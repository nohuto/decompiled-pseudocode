/*
 * XREFs of HalpBlkApicEndOfInterrupt @ 0x140A1AF90
 * Callers:
 *     HalpBlkStubInterrupt @ 0x140A19F80 (HalpBlkStubInterrupt.c)
 *     HalpBlkIpiInterrupt @ 0x140A1A100 (HalpBlkIpiInterrupt.c)
 *     HalpBlkLocalErrorInterrupt @ 0x140A1A1C0 (HalpBlkLocalErrorInterrupt.c)
 *     HalpBlkUnexpectedInterruptCommon @ 0x140A1AD00 (HalpBlkUnexpectedInterruptCommon.c)
 * Callees:
 *     HalpBlkApicWrite @ 0x140A1B148 (HalpBlkApicWrite.c)
 */

__int64 HalpBlkApicEndOfInterrupt()
{
  return HalpBlkApicWrite(176LL, 0LL);
}
