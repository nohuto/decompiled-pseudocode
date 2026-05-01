/*
 * XREFs of __crt_debugger_hook @ 0x18008CFAC
 * Callers:
 *     __raise_securityfailure @ 0x18008C868 (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x18008CFBC (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
