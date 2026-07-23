/*
 * XREFs of _purecall @ 0x1405B1C70
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 */

void __noreturn purecall()
{
  RtlRaiseStatus(-1073741822);
}
