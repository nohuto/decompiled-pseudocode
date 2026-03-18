/*
 * XREFs of EtwpGetNextGuidEntry @ 0x1407969D0
 * Callers:
 *     EtwpEnumerateTraceGuids @ 0x1407949D4 (EtwpEnumerateTraceGuids.c)
 *     EtwpDisableTraceProviders @ 0x140795400 (EtwpDisableTraceProviders.c)
 *     EtwpTracingProvEnableCallback @ 0x140865450 (EtwpTracingProvEnableCallback.c)
 *     EtwpGetGuidList @ 0x140883086 (EtwpGetGuidList.c)
 *     EtwpSetProviderBinaryTracking @ 0x1409F5378 (EtwpSetProviderBinaryTracking.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140A36BE0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     EtwpUnreferenceGuidEntry @ 0x140796B04 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReferenceGuidEntry @ 0x140796BF4 (EtwpReferenceGuidEntry.c)
 */

signed __int64 *__fastcall EtwpGetNextGuidEntry(__int64 a1, signed __int64 **a2, int a3)
{
  __int64 v3; // r13
  char v4; // bp
  signed __int64 **v5; // rbx
  signed __int64 *v6; // rsi
  __int64 v7; // r14
  signed __int64 *v8; // rdi
  signed __int64 *v9; // r14
  __int64 i; // r12
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 **v12; // rax
  signed __int64 *v13; // r15

  v3 = a1 + 464;
  v4 = 0;
  v5 = a2;
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
    v12 = (signed __int64 **)v8;
    if ( v5 )
      v12 = v5;
    v13 = *v12;
    if ( *v12 != v8 )
    {
      while ( 1 )
      {
        v6 = v13;
        if ( (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)v13) )
          break;
        v13 = (signed __int64 *)*v13;
        if ( v13 == v8 )
          goto LABEL_9;
      }
      v4 = 1;
    }
LABEL_9:
    if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegion();
    if ( v5 )
      EtwpUnreferenceGuidEntry(v5);
    if ( v4 )
      return v6;
    v9 += 7;
    if ( v9 == (signed __int64 *)(v3 + 3632) )
      break;
    v5 = 0LL;
  }
  return 0LL;
}
