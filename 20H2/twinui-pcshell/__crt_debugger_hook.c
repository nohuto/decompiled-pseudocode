/*
 * XREFs of __crt_debugger_hook @ 0x18008D3BC
 * Callers:
 *     __raise_securityfailure @ 0x18008CB48 (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x18008D3CC (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
