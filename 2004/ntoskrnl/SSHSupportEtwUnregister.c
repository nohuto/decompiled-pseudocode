/*
 * XREFs of SSHSupportEtwUnregister @ 0x1408F86F8
 * Callers:
 *     SshpUninitialize @ 0x140A90AD0 (SshpUninitialize.c)
 * Callees:
 *     EtwUnregister @ 0x14074CF60 (EtwUnregister.c)
 */

NTSTATUS SSHSupportEtwUnregister()
{
  return EtwUnregister(SshpTraceHandle);
}
