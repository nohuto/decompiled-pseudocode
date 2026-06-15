/*
 * XREFs of __crt_debugger_hook @ 0x18006A840
 * Callers:
 *     __raise_securityfailure @ 0x180069C48 (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x18006A850 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
