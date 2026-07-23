/*
 * XREFs of HalpInterruptDeferredErrorService @ 0x1404D2850
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmciHandler @ 0x1404BCCE8 (HalpCmciHandler.c)
 */

char HalpInterruptDeferredErrorService()
{
  HalpCmciHandler();
  return 1;
}
