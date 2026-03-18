/*
 * XREFs of HalpInterruptDeferredErrorService @ 0x1404CD6A0
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmciHandler @ 0x1404B7BC8 (HalpCmciHandler.c)
 */

char HalpInterruptDeferredErrorService()
{
  HalpCmciHandler();
  return 1;
}
