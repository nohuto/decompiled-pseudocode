/*
 * XREFs of PspCompleteServerSiloShutdown @ 0x140901CE0
 * Callers:
 *     PspTerminateProcessesJobCallback @ 0x1406751B0 (PspTerminateProcessesJobCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x1402D70B4 (PsGetServerSiloGlobals.c)
 *     PsGetServerSiloState @ 0x14030D90C (PsGetServerSiloState.c)
 */

void __fastcall PspCompleteServerSiloShutdown(__int64 a1)
{
  void *v2; // rcx
  char *ServerSiloGlobals; // rax

  if ( (unsigned int)PsGetServerSiloState(a1) != 3 )
    NT_ASSERT("PsGetServerSiloState(ServerSilo) == SERVERSILO_TERMINATING");
  ObfReferenceObject(v2);
  ServerSiloGlobals = (char *)PsGetServerSiloGlobals(a1);
  *((_QWORD *)ServerSiloGlobals + 141) = 0LL;
  *((_QWORD *)ServerSiloGlobals + 143) = PspCompleteServerSiloShutdownDeferred;
  *((_QWORD *)ServerSiloGlobals + 144) = a1;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(ServerSiloGlobals + 1128), DelayedWorkQueue);
}
