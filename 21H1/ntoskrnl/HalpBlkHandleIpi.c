/*
 * XREFs of HalpBlkHandleIpi @ 0x140A17190
 * Callers:
 *     HalpBlkIpiInterrupt @ 0x140A16100 (HalpBlkIpiInterrupt.c)
 * Callees:
 *     HalpBlkPoPerformPpmOperation @ 0x140A16DC4 (HalpBlkPoPerformPpmOperation.c)
 */

char HalpBlkHandleIpi()
{
  return HalpBlkPoPerformPpmOperation();
}
