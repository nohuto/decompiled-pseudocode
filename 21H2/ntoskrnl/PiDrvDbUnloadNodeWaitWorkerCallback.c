/*
 * XREFs of PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1402D1E10
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1402D1EB4 (PnpDiagnosticTraceObjectWithStatus.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwWaitForSingleObject @ 0x14041B7E0 (ZwWaitForSingleObject.c)
 */

__int64 __fastcall PiDrvDbUnloadNodeWaitWorkerCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdx

  ZwWaitForSingleObject(*(HANDLE *)(a1 + 472), 0, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 88), 1u);
  if ( !*(_BYTE *)(a1 + 489) )
  {
    *(_BYTE *)(a1 + 489) = 1;
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseUnload_Stop);
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseLoaded_Stop);
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 88));
  return KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
}
