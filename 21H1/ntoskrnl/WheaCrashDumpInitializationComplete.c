/*
 * XREFs of WheaCrashDumpInitializationComplete @ 0x1407BE610
 * Callers:
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     WheapReportDeferredLiveDumps @ 0x1409597AC (WheapReportDeferredLiveDumps.c)
 */

__int64 WheaCrashDumpInitializationComplete()
{
  unsigned int v0; // edi
  bool v1; // bl

  v0 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&WheapDispatchPtr.DriverObject);
  WheapCrashDumpInitialized = 1;
  v1 = *(_QWORD *)&WheapDispatchPtr.DeviceType != (_QWORD)&WheapDispatchPtr.DeviceType;
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.DriverObject);
  if ( v1 )
    return (unsigned int)WheapReportDeferredLiveDumps();
  return v0;
}
