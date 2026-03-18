/*
 * XREFs of PoQueueShutdownWorkItem @ 0x1408E3050
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 */

NTSTATUS __stdcall PoQueueShutdownWorkItem(PWORK_QUEUE_ITEM WorkItem)
{
  NTSTATUS v2; // ebx
  struct _LIST_ENTRY *v3; // rax

  ExAcquireFastMutex(&PopShutdownListMutex);
  v2 = 0;
  if ( PopShutdownListAvailable )
  {
    v3 = (struct _LIST_ENTRY *)qword_140C242D8;
    if ( *(__int64 **)qword_140C242D8 != &PopShutdownQueue )
      __fastfail(3u);
    WorkItem->List.Flink = (struct _LIST_ENTRY *)&PopShutdownQueue;
    WorkItem->List.Blink = v3;
    v3->Flink = &WorkItem->List;
    qword_140C242D8 = (__int64)WorkItem;
  }
  else
  {
    v2 = -1073741077;
  }
  KeReleaseGuardedMutex(&PopShutdownListMutex);
  return v2;
}
