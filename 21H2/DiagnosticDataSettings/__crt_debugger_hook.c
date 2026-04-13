/*
 * XREFs of __crt_debugger_hook @ 0x1000477E
 * Callers:
 *     ___scrt_fastfail @ 0x10004661 (___scrt_fastfail.c)
 *     ___raise_securityfailure @ 0x10004893 (___raise_securityfailure.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  __scrt_debugger_hook_flag = 0;
}
