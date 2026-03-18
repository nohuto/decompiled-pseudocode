/*
 * XREFs of PiProcessNewDeviceNodeWorker @ 0x1409478F0
 * Callers:
 *     <none>
 * Callees:
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x1402DE734 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PiProcessNewDeviceNodeWorker(__int64 a1)
{
  void *v1; // rdi
  __int64 v3; // rcx

  v1 = *(void **)(a1 + 24);
  *(_DWORD *)(a1 + 40) = PiProcessNewDeviceNode(*(_QWORD *)(a1 + 16));
  PnpDeviceCompletionQueueDispatchedEntryCompleted(v3, (_QWORD *)a1);
  ExFreePoolWithTag(v1, 0);
}
