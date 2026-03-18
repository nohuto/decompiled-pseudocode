/*
 * XREFs of EmonPreOverflowHandler @ 0x140521260
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptEnablePerformanceEvents @ 0x1403B0670 (HalpInterruptEnablePerformanceEvents.c)
 */

__int64 EmonPreOverflowHandler()
{
  return HalpInterruptEnablePerformanceEvents(1LL);
}
