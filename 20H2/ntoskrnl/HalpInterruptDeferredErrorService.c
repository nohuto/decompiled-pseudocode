/*
 * XREFs of HalpInterruptDeferredErrorService @ 0x1404D0C40
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmciHandler @ 0x1404BB0E8 (HalpCmciHandler.c)
 */

char HalpInterruptDeferredErrorService()
{
  HalpCmciHandler();
  return 1;
}
