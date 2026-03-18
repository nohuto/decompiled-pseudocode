/*
 * XREFs of PopBatteryAdd @ 0x1408E99E0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x140396C68 (PopBatteryQueueWork.c)
 *     PopResetCurrentPolicies @ 0x140785428 (PopResetCurrentPolicies.c)
 *     PopBatteryWaitTag @ 0x1408EA5E4 (PopBatteryWaitTag.c)
 *     PopCadTriggerDriverLoad @ 0x1408F2408 (PopCadTriggerDriverLoad.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 */

void __fastcall PopBatteryAdd(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // rcx

  KeInitializeEvent((PRKEVENT)(a1 + 80), SynchronizationEvent, 0);
  if ( ++dword_140C23110 == 1 )
  {
    PopAcquirePolicyLock(v2);
    if ( byte_140C23A7E != 1 )
    {
      byte_140C23A7E = 1;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock(v4, v3);
    PopCadTriggerDriverLoad(1LL);
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  byte_140C23118 = 1;
  PopBatteryWaitTag(a1);
  PopBatteryQueueWork(8u);
  PopReleaseRwLock((ULONG_PTR)&PopCB);
}
