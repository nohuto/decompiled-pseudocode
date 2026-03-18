/*
 * XREFs of __crt_debugger_hook @ 0x140003AF0
 * Callers:
 *     __raise_securityfailure @ 0x1400031C4 (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x140003B00 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
