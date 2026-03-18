/*
 * XREFs of HalpBlkApicEndOfInterrupt @ 0x140AD4F90
 * Callers:
 *     HalpBlkStubInterrupt @ 0x140AD3F80 (HalpBlkStubInterrupt.c)
 *     HalpBlkIpiInterrupt @ 0x140AD4100 (HalpBlkIpiInterrupt.c)
 *     HalpBlkLocalErrorInterrupt @ 0x140AD41C0 (HalpBlkLocalErrorInterrupt.c)
 *     HalpBlkUnexpectedInterruptCommon @ 0x140AD4D00 (HalpBlkUnexpectedInterruptCommon.c)
 * Callees:
 *     HalpBlkApicWrite @ 0x140AD5148 (HalpBlkApicWrite.c)
 */

__int64 HalpBlkApicEndOfInterrupt()
{
  return HalpBlkApicWrite(176LL, 0LL);
}
