/*
 * XREFs of HalpInterruptDeferredErrorService @ 0x1404D2610
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmciHandler @ 0x1404BCAA8 (HalpCmciHandler.c)
 */

char HalpInterruptDeferredErrorService()
{
  HalpCmciHandler();
  return 1;
}
