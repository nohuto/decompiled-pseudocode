/*
 * XREFs of ?ndisIfInitializePhase1@@YAJXZ @ 0x1C0145088
 * Callers:
 *     DriverEntry @ 0x1C01438F0 (DriverEntry.c)
 * Callees:
 *     ?ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ @ 0x1C0108578 (-ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfStackTableSubsystemInitialize@@YAXXZ @ 0x1C0108614 (-ndisIfStackTableSubsystemInitialize@@YAXXZ.c)
 *     ?ndisIfExternalProvidedInterfaceSubsystemInitialize@@YAXXZ @ 0x1C010864C (-ndisIfExternalProvidedInterfaceSubsystemInitialize@@YAXXZ.c)
 *     ?ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ @ 0x1C0143828 (-ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x1C0145174 (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfCompartmentStateSubsystemInitialize@@YAJXZ @ 0x1C0145398 (-ndisIfCompartmentStateSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfThreadObjectSubsystemInitialize@@YAJXZ @ 0x1C0145454 (-ndisIfThreadObjectSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1C014578C (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 */

__int64 ndisIfInitializePhase1(void)
{
  struct _DRIVER_OBJECT *v0; // rcx

  RtlRunOnceInitialize(&RunOnce);
  ndisIfInterfaceSubsystemInitialize();
  qword_1C00E4B08 = (__int64)&qword_1C00E4B00;
  qword_1C00E4B00 = (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00E4B00;
  qword_1C00E4B18 = (__int64)&qword_1C00E4B10;
  qword_1C00E4B10 = (__int64)&qword_1C00E4B10;
  ndisIfExternalProvidedInterfaceSubsystemInitialize();
  ndisIfStackTableSubsystemInitialize();
  KeInitializeSpinLock(&qword_1C00E4AF0);
  KeInitializeTimer(&Timer);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)ndisCmCleanupDpcRoutine, 0LL);
  stru_1C00E5EC0.Parameter = 0LL;
  stru_1C00E5EC0.List.Flink = 0LL;
  stru_1C00E5EC0.WorkerRoutine = (void (__fastcall *)(void *))ndisCmCleanupWorkRoutine;
  KeInitializeSpinLock(&SpinLock);
  ndisIfThreadObjectSubsystemInitialize();
  ndisIfCompartmentStateSubsystemInitialize();
  ndisIfIndexAllocatorSubsystemInitialize(v0);
  ndisIfLuidAllocatorSubsystemInitialize();
  ndisIfNdisProvidedInterfaceSubsystemInitialize();
  return 0LL;
}
