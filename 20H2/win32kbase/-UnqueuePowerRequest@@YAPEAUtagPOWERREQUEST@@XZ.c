/*
 * XREFs of ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C0070330
 * Callers:
 *     CleanupPowerRequestList @ 0x1C006FF30 (CleanupPowerRequestList.c)
 *     xxxUserPowerCalloutWorker @ 0x1C0070190 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0128C00 (McTemplateK0pq_EtwWriteTransfer.c)
 */

struct tagPOWERREQUEST *UnqueuePowerRequest(void)
{
  __int64 v0; // rbx
  __int64 v1; // r8
  _QWORD *v3; // rax

  v0 = 0LL;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
  if ( gPowerRequestList.Flink != &gPowerRequestList )
  {
    v0 = qword_1C024D678;
    v3 = *(_QWORD **)(qword_1C024D678 + 8);
    if ( *(struct _LIST_ENTRY **)qword_1C024D678 != &gPowerRequestList || *v3 != qword_1C024D678 )
      __fastfail(3u);
    qword_1C024D678 = *(_QWORD *)(qword_1C024D678 + 8);
    *v3 = &gPowerRequestList;
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      McTemplateK0pq_EtwWriteTransfer(&gPowerRequestList, &RemovePowerRequestFromQueue, v1, v0, -1);
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
  return (struct tagPOWERREQUEST *)v0;
}
