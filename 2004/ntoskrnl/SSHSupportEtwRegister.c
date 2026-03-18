/*
 * XREFs of SSHSupportEtwRegister @ 0x14077F08C
 * Callers:
 *     SshInitialize @ 0x140A3C77C (SshInitialize.c)
 * Callees:
 *     EtwRegister @ 0x14074F8E0 (EtwRegister.c)
 */

NTSTATUS SSHSupportEtwRegister()
{
  return EtwRegister(&SLEEPSTUDY_ETW_PROVIDER, 0LL, 0LL, &SshpTraceHandle);
}
