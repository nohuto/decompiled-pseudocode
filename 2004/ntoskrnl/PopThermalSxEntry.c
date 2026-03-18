/*
 * XREFs of PopThermalSxEntry @ 0x140387948
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140387B14 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x140387CA4 (PopTraceThermalZoneActiveActivity.c)
 *     PopCoolingSxTransition @ 0x140387E74 (PopCoolingSxTransition.c)
 *     PopThermalStandbyEndTracking @ 0x140388560 (PopThermalStandbyEndTracking.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140765698 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x14077BB40 (PopThermalUpdateActiveTimeTracking.c)
 */

__int64 PopThermalSxEntry()
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  PopThermalStandbyEndTracking(4LL);
  PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
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
      PopTraceThermalZonePassiveHistogram(i);
    }
    if ( *((_BYTE *)i + 505) )
    {
      LOBYTE(v2) = *((_BYTE *)i + 69);
      PopThermalUpdateActiveTimeTracking(i + 63, v2);
      PopTraceThermalZoneActiveActivity(i);
    }
    *((_BYTE *)i + 504) = 1;
    PopReleaseRwLock((ULONG_PTR)(i + 54));
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  LOBYTE(v3) = 1;
  return PopCoolingSxTransition(v3);
}
