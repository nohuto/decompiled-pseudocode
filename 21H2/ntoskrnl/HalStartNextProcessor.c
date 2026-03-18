/*
 * XREFs of HalStartNextProcessor @ 0x1403B2F30
 * Callers:
 *     HalpInterruptReinitialize @ 0x140A505D4 (HalpInterruptReinitialize.c)
 *     KeStartAllProcessors @ 0x140B03C68 (KeStartAllProcessors.c)
 * Callees:
 *     HalpInterruptModel @ 0x14036FA84 (HalpInterruptModel.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403B3BA0 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpInterruptStartBlockedProcessors @ 0x14051E084 (HalpInterruptStartBlockedProcessors.c)
 *     HalpInterruptStartProcessor @ 0x140A53F54 (HalpInterruptStartProcessor.c)
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
