/*
 * XREFs of HalRegisterDynamicProcessor @ 0x14050A770
 * Callers:
 *     KiStartDynamicProcessor @ 0x14096029C (KiStartDynamicProcessor.c)
 * Callees:
 *     HalpInterruptRegisterDynamicProcessor @ 0x140508E38 (HalpInterruptRegisterDynamicProcessor.c)
 */

__int64 HalRegisterDynamicProcessor()
{
  return HalpInterruptRegisterDynamicProcessor();
}
