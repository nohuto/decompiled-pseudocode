/*
 * XREFs of PopFxPlatformStateAvailable @ 0x140565FFC
 * Callers:
 *     PopPepUpdateIdleStateRefCount @ 0x14039D344 (PopPepUpdateIdleStateRefCount.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x14035CE78 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x14035CF00 (PopDeepSleepClearDisengageReason.c)
 *     PpmIdleCsVetoAccountingDeviceUpdate @ 0x140560CA4 (PpmIdleCsVetoAccountingDeviceUpdate.c)
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x14056713C (PopFxSetDripsBlockedByDeviceActivity.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x140570DC8 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x140575BE8 (PopIdleWakeNotifyDevicesActive.c)
 */

__int64 __fastcall PopFxPlatformStateAvailable(unsigned int a1, char a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  PpmIdleCsVetoAccountingDeviceUpdate(a1, a2);
  result = PpmPlatformStates;
  if ( a1 == *(_DWORD *)PpmPlatformStates - 1 )
  {
    if ( a2 )
    {
      PopFxSetDripsBlockedByDeviceActivity(0LL);
      PopIdleWakeNotifyDevicesActive(0LL);
      PopUpdateNonAttributedCpuTimeReference(0LL);
      return PopDeepSleepClearDisengageReason(6u);
    }
    else
    {
      LOBYTE(v4) = 1;
      PopFxSetDripsBlockedByDeviceActivity(v4);
      LOBYTE(v6) = 1;
      PopIdleWakeNotifyDevicesActive(v6);
      LOBYTE(v7) = 1;
      PopUpdateNonAttributedCpuTimeReference(v7);
      return PopDeepSleepSetDisengageReason(6u);
    }
  }
  return result;
}
