/*
 * XREFs of HalpBlkHandleIpi @ 0x140A1B190
 * Callers:
 *     HalpBlkIpiInterrupt @ 0x140A1A100 (HalpBlkIpiInterrupt.c)
 * Callees:
 *     HalpBlkPoPerformPpmOperation @ 0x140A1ADC4 (HalpBlkPoPerformPpmOperation.c)
 */

char HalpBlkHandleIpi()
{
  return HalpBlkPoPerformPpmOperation();
}
