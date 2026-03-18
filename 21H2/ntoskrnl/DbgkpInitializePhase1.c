/*
 * XREFs of DbgkpInitializePhase1 @ 0x140B23548
 * Callers:
 *     DbgkInitialize @ 0x140B233CC (DbgkInitialize.c)
 * Callees:
 *     DbgkpInitializePhase1SiloState @ 0x14084ED2C (DbgkpInitializePhase1SiloState.c)
 *     DbgkpGetServerSiloState @ 0x14084F044 (DbgkpGetServerSiloState.c)
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
