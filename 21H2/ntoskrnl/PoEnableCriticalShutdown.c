/*
 * XREFs of PoEnableCriticalShutdown @ 0x14079194C
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14079167C (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PopExecutePowerAction @ 0x140775388 (PopExecutePowerAction.c)
 *     PopQueueBatteryStatusTimeout @ 0x14078EDDC (PopQueueBatteryStatusTimeout.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PoEnableCriticalShutdown(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+38h] [rbp-30h]
  _DWORD v6[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v7; // [rsp+48h] [rbp-20h]

  PopAcquirePolicyLock(a1);
  PopThermalCriticalShutdownEnabled = 1;
  if ( PopThermalCriticalShutdownInitiated )
  {
    v5 = 0;
    v4 = 0xC000000400000006uLL;
    v7 = 0LL;
    v6[0] = 1;
    v6[1] = 128;
    PopCriticalShutdownInProgress = 1;
    PopExecutePowerAction((__int64)v6, 0, &v4, 5, 1u);
  }
  PopReleasePolicyLock(v2, v1);
  return PopQueueBatteryStatusTimeout();
}
