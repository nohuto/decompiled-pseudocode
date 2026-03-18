/*
 * XREFs of PspCompleteServerSiloShutdown @ 0x140908750
 * Callers:
 *     PspTerminateProcessesJobCallback @ 0x14062C030 (PspTerminateProcessesJobCallback.c)
 * Callees:
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x140245E34 (PsGetServerSiloGlobals.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     PsGetServerSiloState @ 0x14031BDAC (PsGetServerSiloState.c)
 */

void __fastcall PspCompleteServerSiloShutdown(__int64 a1)
{
  void *v2; // rcx
  char *ServerSiloGlobals; // rax

  if ( (unsigned int)PsGetServerSiloState(a1) != 3 )
    NT_ASSERT("PsGetServerSiloState(ServerSilo) == SERVERSILO_TERMINATING");
  ObfReferenceObject(v2);
  ServerSiloGlobals = (char *)PsGetServerSiloGlobals(a1);
  *((_QWORD *)ServerSiloGlobals + 143) = 0LL;
  *((_QWORD *)ServerSiloGlobals + 145) = PspCompleteServerSiloShutdownDeferred;
  *((_QWORD *)ServerSiloGlobals + 146) = a1;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(ServerSiloGlobals + 1144), DelayedWorkQueue);
}
