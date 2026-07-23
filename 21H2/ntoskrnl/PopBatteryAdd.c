/*
 * XREFs of PopBatteryAdd @ 0x1408ECF50
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     PopBatteryQueueWork @ 0x14039AC0C (PopBatteryQueueWork.c)
 *     PopResetCurrentPolicies @ 0x140793E98 (PopResetCurrentPolicies.c)
 *     PopBatteryWaitTag @ 0x1408EDB54 (PopBatteryWaitTag.c)
 *     PopCadTriggerDriverLoad @ 0x1408F5958 (PopCadTriggerDriverLoad.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

void __fastcall PopBatteryAdd(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // rcx

  KeInitializeEvent((PRKEVENT)(a1 + 80), SynchronizationEvent, 0);
  if ( ++dword_140C23C50 == 1 )
  {
    PopAcquirePolicyLock(v2);
    if ( byte_140C2343E != 1 )
    {
      byte_140C2343E = 1;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock(v4, v3);
    PopCadTriggerDriverLoad(1LL);
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  byte_140C23C58 = 1;
  PopBatteryWaitTag(a1);
  PopBatteryQueueWork(8u);
  PopReleaseRwLock((ULONG_PTR)&PopCB);
}
