/*
 * XREFs of PopThermalTelemetryWorker @ 0x140569E70
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140386BA4 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x140386D34 (PopTraceThermalZoneActiveActivity.c)
 *     PopCoolingTelemetryWorker @ 0x140562BE0 (PopCoolingTelemetryWorker.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140763C78 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140779730 (PopThermalUpdateActiveTimeTracking.c)
 */

void PopThermalTelemetryWorker()
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rbx
  __int64 v2; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  for ( i = (PVOID *)PopThermal; i != &PopThermal; i = (PVOID *)*i )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)(i + 54));
    if ( *((_BYTE *)i + 145) )
    {
      LOBYTE(v2) = *((_BYTE *)i + 80);
      PopThermalUpdatePassiveTimeTracking(i + 63, v2);
      PopTraceThermalZonePassiveHistogram((__int64)i);
    }
    if ( *((_BYTE *)i + 505) )
    {
      LOBYTE(v2) = *((_BYTE *)i + 69);
      PopThermalUpdateActiveTimeTracking(i + 63, v2);
      PopTraceThermalZoneActiveActivity((__int64)i);
    }
    PopReleaseRwLock((ULONG_PTR)(i + 54));
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  PopCoolingTelemetryWorker();
  _InterlockedExchange(&dword_140C22EC8, 0);
}
