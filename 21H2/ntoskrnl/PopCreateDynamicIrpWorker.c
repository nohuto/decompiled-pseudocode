/*
 * XREFs of PopCreateDynamicIrpWorker @ 0x1403A51D0
 * Callers:
 *     PopRunMaximumIrpWorkers @ 0x14038C3E0 (PopRunMaximumIrpWorkers.c)
 *     PopIrpWorkerControl @ 0x1403CBFB0 (PopIrpWorkerControl.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140202CB4 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x140252DE4 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 *     PopCreatePowerThread @ 0x1403A5238 (PopCreatePowerThread.c)
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
