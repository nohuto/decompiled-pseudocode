/*
 * XREFs of C1Halt @ 0x1C000EA50
 * Callers:
 *     C1Idle @ 0x1C00010F0 (C1Idle.c)
 *     IoHaltC1Idle @ 0x1C000C5B0 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
