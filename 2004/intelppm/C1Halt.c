/*
 * XREFs of C1Halt @ 0x1C00044A0
 * Callers:
 *     C1Idle @ 0x1C000DC90 (C1Idle.c)
 *     IoHaltC1Idle @ 0x1C000DF00 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
