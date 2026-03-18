/*
 * XREFs of PopBatteryRemove @ 0x1408EA210
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x140347600 (IoCancelIrp.c)
 *     PopBatteryQueueWork @ 0x140396C68 (PopBatteryQueueWork.c)
 *     PopResetCurrentPolicies @ 0x140785428 (PopResetCurrentPolicies.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
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
    --dword_140C23114;
    ++dword_140C23178;
    byte_140C23118 = 1;
    PopBatteryQueueWork(3u);
  }
  PopBatteryQueueWork(8u);
  PopReleaseRwLock((ULONG_PTR)&PopCB);
  if ( !--dword_140C23110 )
  {
    PopAcquirePolicyLock(v5);
    if ( byte_140C23A7E )
    {
      byte_140C23A7E = 0;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock(v7, v6);
  }
}
