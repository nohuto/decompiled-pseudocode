/*
 * XREFs of __crt_debugger_hook @ 0x18008D85C
 * Callers:
 *     __raise_securityfailure @ 0x18008CFE8 (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x18008D86C (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
