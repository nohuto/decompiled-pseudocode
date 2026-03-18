/*
 * XREFs of HalpBlkHandleIpi @ 0x140A1D190
 * Callers:
 *     HalpBlkIpiInterrupt @ 0x140A1C100 (HalpBlkIpiInterrupt.c)
 * Callees:
 *     HalpBlkPoPerformPpmOperation @ 0x140A1CDC4 (HalpBlkPoPerformPpmOperation.c)
 */

char HalpBlkHandleIpi()
{
  return HalpBlkPoPerformPpmOperation();
}
