/*
 * XREFs of SSHSupportEtwRegister @ 0x14077F89C
 * Callers:
 *     SshInitialize @ 0x140A3CB24 (SshInitialize.c)
 * Callees:
 *     EtwRegister @ 0x14074B4C0 (EtwRegister.c)
 */

NTSTATUS SSHSupportEtwRegister()
{
  return EtwRegister(&SLEEPSTUDY_ETW_PROVIDER, 0LL, 0LL, &SshpTraceHandle);
}
