/*
 * XREFs of ?ndisIfInitializePhase1@@YAJXZ @ 0x1C0145038
 * Callers:
 *     DriverEntry @ 0x1C01438B0 (DriverEntry.c)
 * Callees:
 *     ?ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ @ 0x1C01085A8 (-ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfStackTableSubsystemInitialize@@YAXXZ @ 0x1C0108644 (-ndisIfStackTableSubsystemInitialize@@YAXXZ.c)
 *     ?ndisIfExternalProvidedInterfaceSubsystemInitialize@@YAXXZ @ 0x1C010867C (-ndisIfExternalProvidedInterfaceSubsystemInitialize@@YAXXZ.c)
 *     ?ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ @ 0x1C01437E8 (-ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x1C0145124 (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfCompartmentStateSubsystemInitialize@@YAJXZ @ 0x1C0145348 (-ndisIfCompartmentStateSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfThreadObjectSubsystemInitialize@@YAJXZ @ 0x1C0145404 (-ndisIfThreadObjectSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1C014573C (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 */

__int64 ndisIfInitializePhase1(void)
{
  struct _DRIVER_OBJECT *v0; // rcx

  RtlRunOnceInitialize(&RunOnce);
  ndisIfInterfaceSubsystemInitialize();
  qword_1C00E49E0 = (__int64)&qword_1C00E49D8;
  qword_1C00E49D8 = (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00E49D8;
  qword_1C00E49F0 = (__int64)&qword_1C00E49E8;
  qword_1C00E49E8 = (__int64)&qword_1C00E49E8;
  ndisIfExternalProvidedInterfaceSubsystemInitialize();
  ndisIfStackTableSubsystemInitialize();
  KeInitializeSpinLock(&qword_1C00E49C8);
  KeInitializeTimer(&Timer);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)ndisCmCleanupDpcRoutine, 0LL);
  stru_1C00E5DD0.Parameter = 0LL;
  stru_1C00E5DD0.List.Flink = 0LL;
  stru_1C00E5DD0.WorkerRoutine = (void (__fastcall *)(void *))ndisCmCleanupWorkRoutine;
  KeInitializeSpinLock(&SpinLock);
  ndisIfThreadObjectSubsystemInitialize();
  ndisIfCompartmentStateSubsystemInitialize();
  ndisIfIndexAllocatorSubsystemInitialize(v0);
  ndisIfLuidAllocatorSubsystemInitialize();
  ndisIfNdisProvidedInterfaceSubsystemInitialize();
  return 0LL;
}
