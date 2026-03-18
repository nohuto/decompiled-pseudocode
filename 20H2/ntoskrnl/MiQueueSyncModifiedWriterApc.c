/*
 * XREFs of MiQueueSyncModifiedWriterApc @ 0x140331A5C
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140345720 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiAttemptPageFileReduction @ 0x140540E08 (MiAttemptPageFileReduction.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeInitializeApc @ 0x1402D69A0 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1402EBBB0 (KeInsertQueueApc.c)
 */

NTSTATUS __fastcall MiQueueSyncModifiedWriterApc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PVOID Object)
{
  KeInitializeApc(a2, *(_QWORD *)(a1 + 944), 0, (__int64)xHalTimerWatchdogStop, 0LL, a3, 0, a4);
  KeInsertQueueApc(a2, 0LL, 0LL, 0);
  return KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
}
