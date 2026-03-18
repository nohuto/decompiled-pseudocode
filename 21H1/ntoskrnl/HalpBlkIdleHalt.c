/*
 * XREFs of HalpBlkIdleHalt @ 0x140A15060
 * Callers:
 *     HalpBlkIdleLoop @ 0x140A17530 (HalpBlkIdleLoop.c)
 * Callees:
 *     <none>
 */

void __noreturn HalpBlkIdleHalt()
{
  _enable();
  __halt();
}
