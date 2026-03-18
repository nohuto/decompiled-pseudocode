/*
 * XREFs of HalpInterruptDeferredErrorService @ 0x14051F570
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmciHandler @ 0x140509620 (HalpCmciHandler.c)
 */

char HalpInterruptDeferredErrorService()
{
  HalpCmciHandler();
  return 1;
}
