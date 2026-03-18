/*
 * XREFs of PiDqObjectManagerInit @ 0x14078C514
 * Callers:
 *     PiDqInit @ 0x140A50318 (PiDqInit.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140213470 (ExInitializeResourceLite.c)
 *     KeInitializeGuardedMutex @ 0x140273520 (KeInitializeGuardedMutex.c)
 *     memset @ 0x14040A280 (memset.c)
 */

_QWORD *(__fastcall *__fastcall PiDqObjectManagerInit(PERESOURCE Resource, int a2))(PERESOURCE Resource)
{
  _QWORD *(__fastcall *result)(PERESOURCE); // rax

  memset(Resource, 0, 0xF0uLL);
  *(_DWORD *)&Resource[2].ActiveCount = a2;
  ExInitializeResourceLite(Resource);
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)&Resource[1]);
  Resource[1].SpinLock = (KSPIN_LOCK)&Resource[1].CreatorBackTraceIndex;
  Resource[1].CreatorBackTraceIndex = (ULONG_PTR)&Resource[1].CreatorBackTraceIndex;
  Resource[2].SystemResourcesList.Blink = &Resource[2].SystemResourcesList;
  Resource[2].SystemResourcesList.Flink = &Resource[2].SystemResourcesList;
  result = PiDqObjectManagerServiceActionQueue;
  *(_QWORD *)&Resource[1].OwnerEntry.0 = 0LL;
  *(_QWORD *)&Resource[1].NumberOfSharedWaiters = PiDqObjectManagerServiceActionQueue;
  Resource[1].Reserved2 = Resource;
  return result;
}
