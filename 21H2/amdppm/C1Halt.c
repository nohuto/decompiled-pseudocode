/*
 * XREFs of C1Halt @ 0x1C000EBF0
 * Callers:
 *     C1Idle @ 0x1C0003E20 (C1Idle.c)
 *     IoHaltC1Idle @ 0x1C00043E0 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
