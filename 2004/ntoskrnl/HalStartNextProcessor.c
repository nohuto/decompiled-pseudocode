/*
 * XREFs of HalStartNextProcessor @ 0x14039E710
 * Callers:
 *     HalpInterruptReinitialize @ 0x140992518 (HalpInterruptReinitialize.c)
 *     KeStartAllProcessors @ 0x140A45D28 (KeStartAllProcessors.c)
 * Callees:
 *     HalpInterruptModel @ 0x1403793D4 (HalpInterruptModel.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14039F5E4 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpInterruptStartBlockedProcessors @ 0x1404CCB4C (HalpInterruptStartBlockedProcessors.c)
 *     HalpInterruptStartProcessor @ 0x1409969B4 (HalpInterruptStartProcessor.c)
 */

__int64 __fastcall HalStartNextProcessor(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int started; // edi

  if ( (unsigned int)HalpInterruptModel() - 1 > 3 || a2 >= (unsigned int)HalpQueryMaximumRegisteredProcessorCount() )
    return 2LL;
  started = HalpInterruptStartProcessor(a2, a3, 0LL, a1);
  if ( HalpInterruptBlockedProcessors )
  {
    if ( started == 4 )
      HalpInterruptStartBlockedProcessors(a2);
  }
  return started;
}
