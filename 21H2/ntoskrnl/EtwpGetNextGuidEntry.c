/*
 * XREFs of EtwpGetNextGuidEntry @ 0x1406B82EC
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1406B8208 (EtwpDisableTraceProviders.c)
 *     EtwpEnumerateTraceGuids @ 0x14072AF38 (EtwpEnumerateTraceGuids.c)
 *     EtwpTracingProvEnableCallback @ 0x1407D5870 (EtwpTracingProvEnableCallback.c)
 *     EtwpGetTraceGroupList @ 0x140934B98 (EtwpGetTraceGroupList.c)
 *     EtwpGetTraceGuidList @ 0x140934C38 (EtwpGetTraceGuidList.c)
 *     EtwpSetProviderBinaryTracking @ 0x140941010 (EtwpSetProviderBinaryTracking.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140982DA0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     EtwpReferenceGuidEntry @ 0x1406DB204 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406ECBA8 (EtwpUnreferenceGuidEntry.c)
 */

signed __int64 *__fastcall EtwpGetNextGuidEntry(__int64 a1, signed __int64 *a2, int a3)
{
  __int64 v3; // rbp
  signed __int64 *v4; // rdi
  char v5; // r12
  signed __int64 *v6; // r15
  __int64 v7; // rbx
  signed __int64 *v8; // rsi
  signed __int64 *v9; // rbx
  __int64 i; // r13
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v12; // rax
  signed __int64 *j; // r14

  v3 = a1 + 464;
  v4 = a2;
  v5 = 0;
  v6 = 0LL;
  if ( a2 )
    v7 = v3
       + 56LL
       * (((unsigned __int8)*((_DWORD *)a2 + 10) ^ (unsigned __int8)(*((_DWORD *)a2 + 11) ^ *((_DWORD *)a2 + 12) ^ *((_DWORD *)a2 + 13))) & 0x3F);
  else
    v7 = a1 + 464;
  v8 = (signed __int64 *)(v7 + 16LL * a3);
  v9 = (signed __int64 *)(v7 + 48);
  for ( i = 2 * (a3 - 3LL); ; v8 = &v9[i] )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)v9, 0LL);
    v12 = v8;
    if ( v4 )
      v12 = v4;
    for ( j = (signed __int64 *)*v12; j != v8; j = (signed __int64 *)*j )
    {
      v6 = j;
      if ( (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)j) )
      {
        v5 = 1;
        break;
      }
    }
    if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegion();
    if ( v4 )
      EtwpUnreferenceGuidEntry(v4);
    if ( v5 )
      return v6;
    v9 += 7;
    if ( v9 == (signed __int64 *)(v3 + 3632) )
      break;
    v4 = 0LL;
  }
  return 0LL;
}
