/*
 * XREFs of MiQueueSyncModifiedWriterApc @ 0x1403231BC
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14034E9A0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiAttemptPageFileReduction @ 0x14053CDE8 (MiAttemptPageFileReduction.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KeInitializeApc @ 0x140355490 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1403575C0 (KeInsertQueueApc.c)
 */

NTSTATUS __fastcall MiQueueSyncModifiedWriterApc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PVOID Object)
{
  KeInitializeApc(a2, *(_QWORD *)(a1 + 944), 0, (unsigned int)xHalTimerWatchdogStop, 0LL, a3, 0, a4);
  KeInsertQueueApc(a2, 0LL, 0LL, 0LL);
  return KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
}
