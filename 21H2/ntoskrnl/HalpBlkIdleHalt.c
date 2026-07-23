/*
 * XREFs of HalpBlkIdleHalt @ 0x140A19060
 * Callers:
 *     HalpBlkIdleLoop @ 0x140A1B530 (HalpBlkIdleLoop.c)
 * Callees:
 *     <none>
 */

void __noreturn HalpBlkIdleHalt()
{
  _enable();
  __halt();
}
