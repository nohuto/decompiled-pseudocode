/*
 * XREFs of SeImpersonateClientEx @ 0x1406CAD40
 * Callers:
 *     NtAlpcImpersonateClientOfPort @ 0x140687FF0 (NtAlpcImpersonateClientOfPort.c)
 *     EtwpCreateLogFile @ 0x1406C8D98 (EtwpCreateLogFile.c)
 *     NtImpersonateThread @ 0x1406CABD0 (NtImpersonateThread.c)
 *     SeImpersonateClient @ 0x14091F200 (SeImpersonateClient.c)
 * Callees:
 *     PsImpersonateClient @ 0x140681160 (PsImpersonateClient.c)
 */

NTSTATUS __stdcall SeImpersonateClientEx(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  struct _KTHREAD *CurrentThread; // r10
  BOOLEAN DirectAccessEffectiveOnly; // r9

  CurrentThread = ServerThread;
  if ( ClientContext->DirectlyAccessClientToken )
    DirectAccessEffectiveOnly = ClientContext->DirectAccessEffectiveOnly;
  else
    DirectAccessEffectiveOnly = ClientContext->SecurityQos.EffectiveOnly;
  if ( !ServerThread )
    CurrentThread = KeGetCurrentThread();
  return PsImpersonateClient(
           CurrentThread,
           ClientContext->ClientToken,
           1u,
           DirectAccessEffectiveOnly,
           ClientContext->SecurityQos.ImpersonationLevel);
}
