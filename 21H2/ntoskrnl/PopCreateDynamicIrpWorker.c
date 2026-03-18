/*
 * XREFs of PopCreateDynamicIrpWorker @ 0x14039653C
 * Callers:
 *     PopRunMaximumIrpWorkers @ 0x140396464 (PopRunMaximumIrpWorkers.c)
 *     PopIrpWorkerControl @ 0x1403DEE60 (PopIrpWorkerControl.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140202234 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x140203D88 (ExFreeToNPagedLookasideList.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     PopCreatePowerThread @ 0x1403B5088 (PopCreatePowerThread.c)
 */

__int64 __fastcall PopCreateDynamicIrpWorker(__int64 a1)
{
  _QWORD *v2; // rax
  unsigned int v3; // ebx
  void *v4; // rdi
  int PowerThread; // esi

  v2 = ExAllocateFromNPagedLookasideList(&PopDynamicIrpWorkerLookaside);
  v3 = 0;
  v4 = v2;
  if ( !v2 )
  {
    v3 = -1073741670;
LABEL_6:
    ExAcquireFastMutex(&PopIrpWorkerMutex);
    --PopIrpWorkerPendingCount;
    KeReleaseGuardedMutex(&PopIrpWorkerMutex);
    return v3;
  }
  *v2 = a1;
  PowerThread = PopCreatePowerThread(PopIrpWorker, v2);
  if ( PowerThread < 0 )
  {
    ExFreeToNPagedLookasideList(&PopDynamicIrpWorkerLookaside, v4);
    v3 = PowerThread;
    goto LABEL_6;
  }
  return v3;
}
