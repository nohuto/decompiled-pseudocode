/*
 * XREFs of PopThermalSxEntry @ 0x1403869D8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140386BA4 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x140386D34 (PopTraceThermalZoneActiveActivity.c)
 *     PopCoolingSxTransition @ 0x140386F04 (PopCoolingSxTransition.c)
 *     PopThermalStandbyEndTracking @ 0x1403875F0 (PopThermalStandbyEndTracking.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140763C78 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140779730 (PopThermalUpdateActiveTimeTracking.c)
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
