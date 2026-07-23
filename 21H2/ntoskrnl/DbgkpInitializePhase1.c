/*
 * XREFs of DbgkpInitializePhase1 @ 0x140A6E628
 * Callers:
 *     DbgkInitialize @ 0x140A6E4AC (DbgkInitialize.c)
 * Callees:
 *     DbgkpInitializePhase1SiloState @ 0x1407CA7F4 (DbgkpInitializePhase1SiloState.c)
 *     DbgkpGetServerSiloState @ 0x1407CAB0C (DbgkpGetServerSiloState.c)
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
