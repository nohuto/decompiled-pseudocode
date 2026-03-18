/*
 * XREFs of PopCreateDynamicIrpWorker @ 0x1403A4910
 * Callers:
 *     PopRunMaximumIrpWorkers @ 0x14038BC90 (PopRunMaximumIrpWorkers.c)
 *     PopIrpWorkerControl @ 0x1403CB5E0 (PopIrpWorkerControl.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140205EF4 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x14020B100 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     PopCreatePowerThread @ 0x1403A4978 (PopCreatePowerThread.c)
 */

__int64 __fastcall PopCreateDynamicIrpWorker(__int64 a1)
{
  _QWORD *v2; // rax
  void *v3; // rbx
  int PowerThread; // edi

  v2 = ExAllocateFromNPagedLookasideList(&PopDynamicIrpWorkerLookaside);
  v3 = v2;
  if ( !v2 )
  {
    PowerThread = -1073741670;
LABEL_7:
    if ( v3 )
      ExFreeToNPagedLookasideList(&PopDynamicIrpWorkerLookaside, v3);
    ExAcquireFastMutex(&PopIrpWorkerMutex);
    --PopIrpWorkerPendingCount;
    KeReleaseGuardedMutex(&PopIrpWorkerMutex);
    return (unsigned int)PowerThread;
  }
  *v2 = a1;
  PowerThread = PopCreatePowerThread(PopIrpWorker, v2);
  if ( PowerThread >= 0 )
    PowerThread = 0;
  if ( PowerThread < 0 )
    goto LABEL_7;
  return (unsigned int)PowerThread;
}
