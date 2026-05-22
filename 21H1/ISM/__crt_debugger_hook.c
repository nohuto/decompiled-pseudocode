/*
 * XREFs of __crt_debugger_hook @ 0x18003BF2C
 * Callers:
 *     __scrt_fastfail @ 0x18003BF3C (__scrt_fastfail.c)
 *     __raise_securityfailure @ 0x18003C4A8 (__raise_securityfailure.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
