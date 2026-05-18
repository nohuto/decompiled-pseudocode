/*
 * XREFs of __crt_debugger_hook @ 0x180005604
 * Callers:
 *     __raise_securityfailure @ 0x1800052A4 (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x180005614 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
