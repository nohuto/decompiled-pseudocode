/*
 * XREFs of IopInitializePassiveInterruptServices @ 0x140B27838
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeInitializeQueue @ 0x14023E540 (KeInitializeQueue.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x140859AD4 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     IopQueryPassiveInterruptRegistryOptions @ 0x140859BF8 (IopQueryPassiveInterruptRegistryOptions.c)
 */

__int64 IopInitializePassiveInterruptServices()
{
  void *v0; // rcx

  IopQueryPassiveInterruptRegistryOptions();
  PassiveInterruptListLock = 0LL;
  qword_140C468F8 = (__int64)&PassiveInterruptList;
  PassiveInterruptList = (__int64)&PassiveInterruptList;
  KeInitializeQueue(&PassiveInterruptRealtimeWorkQueue, (unsigned __int8)PassiveInterruptRealtimeWorkerCount);
  return IopCreatePassiveInterruptRealtimeThreads(v0);
}
