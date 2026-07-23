/*
 * XREFs of _purecall @ 0x1405B57D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 */

void __noreturn purecall()
{
  RtlRaiseStatus(-1073741822);
}
