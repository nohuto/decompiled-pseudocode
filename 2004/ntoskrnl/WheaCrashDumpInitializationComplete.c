/*
 * XREFs of WheaCrashDumpInitializationComplete @ 0x1407C1894
 * Callers:
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     WheapReportDeferredLiveDumps @ 0x14095AB4C (WheapReportDeferredLiveDumps.c)
 */

__int64 WheaCrashDumpInitializationComplete()
{
  unsigned int v0; // edi
  bool v1; // bl

  v0 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&WheapDispatchPtr.Timer);
  WheapCrashDumpInitialized = 1;
  v1 = WheapDispatchPtr.DriverObject != (struct _DRIVER_OBJECT *)&WheapDispatchPtr.DriverObject;
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Timer);
  if ( v1 )
    return (unsigned int)WheapReportDeferredLiveDumps();
  return v0;
}
