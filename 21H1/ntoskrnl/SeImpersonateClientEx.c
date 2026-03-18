/*
 * XREFs of SeImpersonateClientEx @ 0x14067D1E0
 * Callers:
 *     NtAlpcImpersonateClientOfPort @ 0x14060FE70 (NtAlpcImpersonateClientOfPort.c)
 *     EtwpCreateLogFile @ 0x14067BDA8 (EtwpCreateLogFile.c)
 *     NtImpersonateThread @ 0x14067D070 (NtImpersonateThread.c)
 *     SeImpersonateClient @ 0x14091DF50 (SeImpersonateClient.c)
 * Callees:
 *     PsImpersonateClient @ 0x140609080 (PsImpersonateClient.c)
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
