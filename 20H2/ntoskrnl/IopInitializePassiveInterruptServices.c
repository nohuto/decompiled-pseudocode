/*
 * XREFs of IopInitializePassiveInterruptServices @ 0x140A704E0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeInitializeQueue @ 0x140315F10 (KeInitializeQueue.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1407C53B4 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     IopQueryPassiveInterruptRegistryOptions @ 0x1407C54D4 (IopQueryPassiveInterruptRegistryOptions.c)
 */

__int64 IopInitializePassiveInterruptServices()
{
  void *v0; // rcx

  IopQueryPassiveInterruptRegistryOptions();
  PassiveInterruptListLock = 0LL;
  qword_140C45338 = (__int64)&PassiveInterruptList;
  PassiveInterruptList = (__int64)&PassiveInterruptList;
  KeInitializeQueue(&PassiveInterruptRealtimeWorkQueue, (unsigned __int8)PassiveInterruptRealtimeWorkerCount);
  return IopCreatePassiveInterruptRealtimeThreads(v0);
}
