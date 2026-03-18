/*
 * XREFs of PopBatteryAdd @ 0x1408E8760
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x140397AC8 (PopBatteryQueueWork.c)
 *     PopResetCurrentPolicies @ 0x14077CA28 (PopResetCurrentPolicies.c)
 *     PopBatteryWaitTag @ 0x1408E9364 (PopBatteryWaitTag.c)
 *     PopCadTriggerDriverLoad @ 0x1408F1118 (PopCadTriggerDriverLoad.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 */

void __fastcall PopBatteryAdd(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // rcx

  KeInitializeEvent((PRKEVENT)(a1 + 80), SynchronizationEvent, 0);
  if ( ++dword_140C236D0 == 1 )
  {
    PopAcquirePolicyLock(v2);
    if ( byte_140C2401E != 1 )
    {
      byte_140C2401E = 1;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock(v4, v3);
    PopCadTriggerDriverLoad(1LL);
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  byte_140C236D8 = 1;
  PopBatteryWaitTag(a1);
  PopBatteryQueueWork(8u);
  PopReleaseRwLock((ULONG_PTR)&PopCB);
}
