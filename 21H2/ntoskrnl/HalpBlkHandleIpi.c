/*
 * XREFs of HalpBlkHandleIpi @ 0x140AD5190
 * Callers:
 *     HalpBlkIpiInterrupt @ 0x140AD4100 (HalpBlkIpiInterrupt.c)
 * Callees:
 *     HalpBlkPoPerformPpmOperation @ 0x140AD4DC4 (HalpBlkPoPerformPpmOperation.c)
 */

char HalpBlkHandleIpi()
{
  return HalpBlkPoPerformPpmOperation();
}
