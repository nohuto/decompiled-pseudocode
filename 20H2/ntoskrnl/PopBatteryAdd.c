/*
 * XREFs of PopBatteryAdd @ 0x1408EF5F0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x14039A64C (PopBatteryQueueWork.c)
 *     PopResetCurrentPolicies @ 0x140793178 (PopResetCurrentPolicies.c)
 *     PopBatteryWaitTag @ 0x1408F01F4 (PopBatteryWaitTag.c)
 *     PopCadTriggerDriverLoad @ 0x1408F8018 (PopCadTriggerDriverLoad.c)
 *     PopReleasePolicyLock @ 0x140993044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140993084 (PopAcquirePolicyLock.c)
 */

void __fastcall PopBatteryAdd(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // rcx

  KeInitializeEvent((PRKEVENT)(a1 + 80), SynchronizationEvent, 0);
  if ( ++dword_140C235D0 == 1 )
  {
    PopAcquirePolicyLock(v2);
    if ( byte_140C23EFE != 1 )
    {
      byte_140C23EFE = 1;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock(v4, v3);
    PopCadTriggerDriverLoad(1LL);
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  byte_140C235D8 = 1;
  PopBatteryWaitTag(a1);
  PopBatteryQueueWork(8u);
  PopReleaseRwLock((ULONG_PTR)&PopCB);
}
