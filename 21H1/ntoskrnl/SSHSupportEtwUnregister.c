/*
 * XREFs of SSHSupportEtwUnregister @ 0x1408F7408
 * Callers:
 *     SshpUninitialize @ 0x140A91444 (SshpUninitialize.c)
 * Callees:
 *     EtwUnregister @ 0x140748B40 (EtwUnregister.c)
 */

NTSTATUS SSHSupportEtwUnregister()
{
  return EtwUnregister(SshpTraceHandle);
}
