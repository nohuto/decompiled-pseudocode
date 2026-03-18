/*
 * XREFs of SSHSupportEtwRegister @ 0x14078C5D0
 * Callers:
 *     SshInitialize @ 0x140A42A1C (SshInitialize.c)
 * Callees:
 *     EtwRegister @ 0x14075E4C0 (EtwRegister.c)
 */

NTSTATUS SSHSupportEtwRegister()
{
  return EtwRegister(&SLEEPSTUDY_ETW_PROVIDER, 0LL, 0LL, &SshpTraceHandle);
}
