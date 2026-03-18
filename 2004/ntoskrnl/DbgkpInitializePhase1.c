/*
 * XREFs of DbgkpInitializePhase1 @ 0x140A69D9C
 * Callers:
 *     DbgkInitialize @ 0x140A69C20 (DbgkInitialize.c)
 * Callees:
 *     DbgkpInitializePhase1SiloState @ 0x1407B79E4 (DbgkpInitializePhase1SiloState.c)
 *     DbgkpGetServerSiloState @ 0x1407B7CFC (DbgkpGetServerSiloState.c)
 */

__int64 DbgkpInitializePhase1()
{
  char *ServerSiloState; // rax
  __int64 result; // rax

  ServerSiloState = DbgkpGetServerSiloState(0LL);
  result = DbgkpInitializePhase1SiloState((__int64)ServerSiloState);
  if ( (int)result >= 0 && !DbgkpWerInitialized )
  {
    DbgkpBusy = 0;
    DbgkpWerDefaultPolicy = 2;
    DbgkpWerDeferredWriteTimeoutSeconds = 600;
    DbgkpWerInitialized = 1;
  }
  return result;
}
