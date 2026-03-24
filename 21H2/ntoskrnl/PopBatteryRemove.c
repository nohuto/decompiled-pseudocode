/*
 * XREFs of PopBatteryRemove @ 0x1408ED620
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x1402BB2C0 (IoCancelIrp.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     PopBatteryQueueWork @ 0x14039AABC (PopBatteryQueueWork.c)
 *     PopResetCurrentPolicies @ 0x1407928E8 (PopResetCurrentPolicies.c)
 *     PopReleasePolicyLock @ 0x14098F590 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098F5D0 (PopAcquirePolicyLock.c)
 */

void __fastcall PopBatteryRemove(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rcx
  __int64 **v4; // rax
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx

  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 80), Executive, 0, 0, 0LL);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  v2 = (__int64 *)(a1 + 64);
  v3 = *v2;
  if ( *v2 )
  {
    if ( *(__int64 **)(v3 + 8) != v2 || (v4 = (__int64 **)v2[1], *v4 != v2) )
      __fastfail(3u);
    *v4 = (__int64 *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v2 = 0LL;
    --dword_140C23634;
    ++dword_140C23698;
    byte_140C23638 = 1;
    PopBatteryQueueWork(3u);
  }
  PopBatteryQueueWork(8u);
  PopReleaseRwLock((ULONG_PTR)&PopCB);
  if ( !--dword_140C23630 )
  {
    PopAcquirePolicyLock(v5);
    if ( byte_140C2407E )
    {
      byte_140C2407E = 0;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock(v7, v6);
  }
}
