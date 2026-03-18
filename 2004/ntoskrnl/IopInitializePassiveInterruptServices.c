/*
 * XREFs of IopInitializePassiveInterruptServices @ 0x140A69BD4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeInitializeQueue @ 0x1402DE500 (KeInitializeQueue.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1407B6B84 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     IopQueryPassiveInterruptRegistryOptions @ 0x1407B6CA4 (IopQueryPassiveInterruptRegistryOptions.c)
 */

__int64 IopInitializePassiveInterruptServices()
{
  void *v0; // rcx

  IopQueryPassiveInterruptRegistryOptions();
  PassiveInterruptListLock = 0LL;
  qword_140C45308 = (__int64)&PassiveInterruptList;
  PassiveInterruptList = (__int64)&PassiveInterruptList;
  KeInitializeQueue(&PassiveInterruptRealtimeWorkQueue, (unsigned __int8)PassiveInterruptRealtimeWorkerCount);
  return IopCreatePassiveInterruptRealtimeThreads(v0);
}
