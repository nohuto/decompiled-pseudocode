/*
 * XREFs of HalpBlkIdleHalt @ 0x140AD3060
 * Callers:
 *     HalpBlkIdleLoop @ 0x140AD5530 (HalpBlkIdleLoop.c)
 * Callees:
 *     <none>
 */

void __noreturn HalpBlkIdleHalt()
{
  _enable();
  __halt();
}
