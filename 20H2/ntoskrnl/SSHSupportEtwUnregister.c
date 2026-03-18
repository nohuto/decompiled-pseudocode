/*
 * XREFs of SSHSupportEtwUnregister @ 0x1408FE308
 * Callers:
 *     SshpUninitialize @ 0x140A96734 (SshpUninitialize.c)
 * Callees:
 *     EtwUnregister @ 0x14075BB40 (EtwUnregister.c)
 */

NTSTATUS SSHSupportEtwUnregister()
{
  return EtwUnregister(SshpTraceHandle);
}
