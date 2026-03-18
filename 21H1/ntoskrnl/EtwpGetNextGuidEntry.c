/*
 * XREFs of EtwpGetNextGuidEntry @ 0x1405F35EC
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1405F3508 (EtwpDisableTraceProviders.c)
 *     EtwpEnumerateTraceGuids @ 0x140716BBC (EtwpEnumerateTraceGuids.c)
 *     EtwpTracingProvEnableCallback @ 0x1407BF520 (EtwpTracingProvEnableCallback.c)
 *     EtwpGetTraceGroupList @ 0x140930118 (EtwpGetTraceGroupList.c)
 *     EtwpGetTraceGuidList @ 0x1409301B8 (EtwpGetTraceGuidList.c)
 *     EtwpSetProviderBinaryTracking @ 0x14093C634 (EtwpSetProviderBinaryTracking.c)
 *     EtwpEventTracingCounterSetCallback @ 0x14097E330 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     EtwpReferenceGuidEntry @ 0x1405F6224 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405F7508 (EtwpUnreferenceGuidEntry.c)
 */

signed __int64 *__fastcall EtwpGetNextGuidEntry(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v3; // rbp
  ULONG_PTR v4; // rdi
  char v5; // r12
  signed __int64 *v6; // r15
  __int64 v7; // rbx
  signed __int64 *v8; // rsi
  signed __int64 *v9; // rbx
  __int64 i; // r13
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 **v12; // rax
  signed __int64 *j; // r14

  v3 = a1 + 464;
  v4 = (ULONG_PTR)a2;
  v5 = 0;
  v6 = 0LL;
  if ( a2 )
    v7 = v3 + 56LL * (((unsigned __int8)a2[10] ^ (unsigned __int8)(a2[11] ^ a2[12] ^ a2[13])) & 0x3F);
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
    if ( v4 )
      v12 = (signed __int64 **)v4;
    for ( j = *v12; j != v8; j = (signed __int64 *)*j )
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
