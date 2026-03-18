/*
 * XREFs of PopCreateDynamicIrpWorker @ 0x1403A2440
 * Callers:
 *     PopRunMaximumIrpWorkers @ 0x1403899F0 (PopRunMaximumIrpWorkers.c)
 *     PopIrpWorkerControl @ 0x1403C89A0 (PopIrpWorkerControl.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     ExFreeToNPagedLookasideList @ 0x140269FBC (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14026E044 (ExAllocateFromNPagedLookasideList.c)
 *     PopCreatePowerThread @ 0x1403A24A8 (PopCreatePowerThread.c)
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
