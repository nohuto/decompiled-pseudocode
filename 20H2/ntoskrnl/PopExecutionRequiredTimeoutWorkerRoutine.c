/*
 * XREFs of PopExecutionRequiredTimeoutWorkerRoutine @ 0x1408E40E0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x14071EC18 (PopAcquirePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x14076E304 (PopHandleExecutionRequiredEnablementUpdate.c)
 */

void PopExecutionRequiredTimeoutWorkerRoutine()
{
  unsigned __int64 v0; // rcx

  _InterlockedExchange(&PopExecutionRequiredWorkRequested, 0);
  PopAcquirePowerRequestPushLock(1);
  PopHandleExecutionRequiredEnablementUpdate(v0);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
