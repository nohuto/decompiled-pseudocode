/*
 * XREFs of HalpBlkHandleIpi @ 0x140A1A190
 * Callers:
 *     HalpBlkIpiInterrupt @ 0x140A19100 (HalpBlkIpiInterrupt.c)
 * Callees:
 *     HalpBlkPoPerformPpmOperation @ 0x140A19DC4 (HalpBlkPoPerformPpmOperation.c)
 */

char HalpBlkHandleIpi()
{
  return HalpBlkPoPerformPpmOperation();
}
