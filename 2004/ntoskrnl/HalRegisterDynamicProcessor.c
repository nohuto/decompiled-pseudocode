/*
 * XREFs of HalRegisterDynamicProcessor @ 0x1404B8E20
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408B757C (KiStartDynamicProcessor.c)
 * Callees:
 *     HalpInterruptRegisterDynamicProcessor @ 0x1404B74D8 (HalpInterruptRegisterDynamicProcessor.c)
 */

__int64 HalRegisterDynamicProcessor()
{
  return HalpInterruptRegisterDynamicProcessor();
}
