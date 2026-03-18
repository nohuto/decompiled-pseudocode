/*
 * XREFs of SeImpersonateClientEx @ 0x140717A40
 * Callers:
 *     NtAlpcImpersonateClientOfPort @ 0x1405F1050 (NtAlpcImpersonateClientOfPort.c)
 *     EtwpCreateLogFile @ 0x140716188 (EtwpCreateLogFile.c)
 *     NtImpersonateThread @ 0x1407178D0 (NtImpersonateThread.c)
 *     SeImpersonateClient @ 0x140924E80 (SeImpersonateClient.c)
 * Callees:
 *     PsImpersonateClient @ 0x140607260 (PsImpersonateClient.c)
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
