/*
 * XREFs of PopBatteryAdd @ 0x140994860
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     PopBatteryQueueWork @ 0x14036972C (PopBatteryQueueWork.c)
 *     PopResetCurrentPolicies @ 0x1408193F4 (PopResetCurrentPolicies.c)
 *     PopBatteryWaitTag @ 0x140995414 (PopBatteryWaitTag.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

void __fastcall PopBatteryAdd(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // rcx

  KeInitializeEvent((PRKEVENT)(a1 + 80), SynchronizationEvent, 0);
  if ( ++dword_140C229B0 == 1 )
  {
    PopAcquirePolicyLock(v2);
    if ( byte_140C2341E != 1 )
    {
      byte_140C2341E = 1;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock(v4, v3);
    _m_prefetchw(&PopCadLoadReason);
    if ( !_InterlockedOr(&PopCadLoadReason, 1u) )
      ExQueueWorkItem(&PopCadTriggerDriverLoadWorkItem, DelayedWorkQueue);
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  byte_140C229B8 = 1;
  PopBatteryWaitTag(a1);
  PopBatteryQueueWork(8u);
  PopReleaseRwLock((ULONG_PTR)&PopCB);
}
