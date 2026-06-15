/*
 * XREFs of __crt_debugger_hook @ 0x14001D510
 * Callers:
 *     __raise_securityfailure @ 0x14001CC9C (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x14001D520 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
