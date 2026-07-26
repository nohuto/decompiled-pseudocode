/*
 * XREFs of ?ndisIfInitializePhase1@@YAJXZ @ 0x1C0145064
 * Callers:
 *     DriverEntry @ 0x1C01438B0 (DriverEntry.c)
 * Callees:
 *     ?ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ @ 0x1C0108518 (-ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfStackTableSubsystemInitialize@@YAXXZ @ 0x1C01085B4 (-ndisIfStackTableSubsystemInitialize@@YAXXZ.c)
 *     ?ndisIfExternalProvidedInterfaceSubsystemInitialize@@YAXXZ @ 0x1C01085EC (-ndisIfExternalProvidedInterfaceSubsystemInitialize@@YAXXZ.c)
 *     ?ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ @ 0x1C01437E8 (-ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x1C0145150 (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfCompartmentStateSubsystemInitialize@@YAJXZ @ 0x1C0145374 (-ndisIfCompartmentStateSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfThreadObjectSubsystemInitialize@@YAJXZ @ 0x1C0145430 (-ndisIfThreadObjectSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1C0145768 (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 */

__int64 ndisIfInitializePhase1(void)
{
  struct _DRIVER_OBJECT *v0; // rcx

  RtlRunOnceInitialize(&RunOnce);
  ndisIfInterfaceSubsystemInitialize();
  qword_1C00E4B38 = (__int64)&qword_1C00E4B30;
  qword_1C00E4B30 = (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00E4B30;
  qword_1C00E4B48 = (__int64)&qword_1C00E4B40;
  qword_1C00E4B40 = (__int64)&qword_1C00E4B40;
  ndisIfExternalProvidedInterfaceSubsystemInitialize();
  ndisIfStackTableSubsystemInitialize();
  KeInitializeSpinLock(&qword_1C00E4B20);
  KeInitializeTimer(&Timer);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)ndisCmCleanupDpcRoutine, 0LL);
  stru_1C00E5F00.Parameter = 0LL;
  stru_1C00E5F00.List.Flink = 0LL;
  stru_1C00E5F00.WorkerRoutine = (void (__fastcall *)(void *))ndisCmCleanupWorkRoutine;
  KeInitializeSpinLock(&SpinLock);
  ndisIfThreadObjectSubsystemInitialize();
  ndisIfCompartmentStateSubsystemInitialize();
  ndisIfIndexAllocatorSubsystemInitialize(v0);
  ndisIfLuidAllocatorSubsystemInitialize();
  ndisIfNdisProvidedInterfaceSubsystemInitialize();
  return 0LL;
}
