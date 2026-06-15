/*
 * XREFs of __crt_debugger_hook @ 0x14001D870
 * Callers:
 *     __raise_securityfailure @ 0x14001CFFC (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x14001D880 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
