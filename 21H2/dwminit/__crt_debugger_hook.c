/*
 * XREFs of __crt_debugger_hook @ 0x18000CC98
 * Callers:
 *     __raise_securityfailure @ 0x18000C6B8 (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x18000CCA8 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
