/*
 * XREFs of PopExecutionRequiredTimeoutWorkerRoutine @ 0x1408DCF90
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x14070F888 (PopAcquirePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x14075D984 (PopHandleExecutionRequiredEnablementUpdate.c)
 */

void PopExecutionRequiredTimeoutWorkerRoutine()
{
  unsigned __int64 v0; // rcx

  _InterlockedExchange(&PopExecutionRequiredWorkRequested, 0);
  PopAcquirePowerRequestPushLock(1);
  PopHandleExecutionRequiredEnablementUpdate(v0);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
