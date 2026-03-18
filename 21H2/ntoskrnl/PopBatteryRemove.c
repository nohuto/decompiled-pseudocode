/*
 * XREFs of PopBatteryRemove @ 0x140995040
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x14022D160 (IoCancelIrp.c)
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x14036972C (PopBatteryQueueWork.c)
 *     PopResetCurrentPolicies @ 0x1408193F4 (PopResetCurrentPolicies.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
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
    --dword_140C229B4;
    ++dword_140C22A18;
    byte_140C229B8 = 1;
    PopBatteryQueueWork(3u);
  }
  PopBatteryQueueWork(8u);
  PopReleaseRwLock((ULONG_PTR)&PopCB);
  if ( !--dword_140C229B0 )
  {
    PopAcquirePolicyLock(v5);
    if ( byte_140C2341E )
    {
      byte_140C2341E = 0;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock(v7, v6);
  }
}
