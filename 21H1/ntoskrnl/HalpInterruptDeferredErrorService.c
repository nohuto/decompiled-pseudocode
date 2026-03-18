/*
 * XREFs of HalpInterruptDeferredErrorService @ 0x1404CD1F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmciHandler @ 0x1404B74E8 (HalpCmciHandler.c)
 */

char HalpInterruptDeferredErrorService()
{
  HalpCmciHandler();
  return 1;
}
