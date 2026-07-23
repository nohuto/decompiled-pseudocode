/*
 * XREFs of _purecall @ 0x1405B1550
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 */

void __noreturn purecall()
{
  RtlRaiseStatus(-1073741822);
}
