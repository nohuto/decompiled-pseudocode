/*
 * XREFs of CmFcManagerUpdateFeatureUsageSubscriptions @ 0x14092317C
 * Callers:
 *     CmUpdateFeatureUsageSubscription @ 0x140911544 (CmUpdateFeatureUsageSubscription.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     MiRemoveFromSystemSpace @ 0x14026D048 (MiRemoveFromSystemSpace.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlpFcWriteHighLowHigh @ 0x1403C77D4 (RtlpFcWriteHighLowHigh.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403C78DC (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403C7984 (RtlpFcBufferManagerReferenceBuffers.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmFcpMapSection @ 0x140832C70 (CmFcpMapSection.c)
 *     CmFcpManagerCreateSection @ 0x140832CF4 (CmFcpManagerCreateSection.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140833110 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140923614 (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcUpdateUsageTriggers @ 0x1409BF948 (RtlpFcUpdateUsageTriggers.c)
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x1409BFC00 (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 */

__int64 __fastcall CmFcManagerUpdateFeatureUsageSubscriptions(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r15
  int updated; // eax
  __int64 v12; // r14
  int v13; // edi
  __int64 v14; // rdx
  void *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  ULONG_PTR *v18; // rbx
  __int64 v20; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v21; // [rsp+38h] [rbp-A1h] BYREF
  PVOID Object; // [rsp+40h] [rbp-99h]
  __int64 v23; // [rsp+48h] [rbp-91h]
  __int64 v24; // [rsp+50h] [rbp-89h] BYREF
  LARGE_INTEGER v25; // [rsp+58h] [rbp-81h] BYREF
  __int64 v26; // [rsp+60h] [rbp-79h]
  __int64 v27; // [rsp+68h] [rbp-71h] BYREF
  _QWORD v28[10]; // [rsp+70h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+C0h] [rbp-19h] BYREF
  __int64 *v30; // [rsp+E0h] [rbp+7h]
  int v31; // [rsp+E8h] [rbp+Fh]
  int v32; // [rsp+ECh] [rbp+13h]

  v3 = a3;
  v24 = 0LL;
  v20 = 0LL;
  Object = 0LL;
  v23 = 0LL;
  memset(v28, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C49450, 0LL);
  RtlpFcBufferManagerReferenceBuffers((__int64)qword_140C494B0, (__int64)&v24, &v20);
  v7 = v20;
  v8 = v24 + 1;
  v25.QuadPart = 0LL;
  if ( v24 == -1 )
    v8 = 1LL;
  v26 = v3;
  v9 = *(_QWORD *)(v20 + 56);
  v10 = v8;
  v21 = v8;
  v28[6] = v8;
  updated = RtlpFcUpdateUsageTriggers(v9, v6, a2, (unsigned int)v3, 0LL, &v25);
  v12 = 3LL;
  v13 = updated;
  if ( updated < 0 )
  {
    if ( updated != -2147483643
      || (v13 = CmFcpManagerCreateSection(v25, v8, (void *)CmFcSystemManager[0], &v21), v13 < 0)
      || (v13 = CmFcpMapSection(&v21, &v28[6]), v13 < 0)
      || (v13 = RtlpFcUpdateUsageTriggers(*(_QWORD *)(v7 + 56), v14, a2, v26, v28[7], &v28[8]), v13 < 0) )
    {
LABEL_13:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C49450, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&stru_140C49450);
      KeAbPostRelease((ULONG_PTR)&stru_140C49450);
      if ( v20 )
        RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C494B0, v20);
      goto LABEL_23;
    }
    if ( (int)RtlpFcValidateFeatureUsageSubscriptionBuffer(v28[7], v28[8]) < 0 )
    {
      if ( (unsigned int)dword_140C063C0 > 5 && tlgKeywordOn((__int64)&dword_140C063C0, 0x400000000001LL) )
      {
        v32 = 0;
        v30 = &v27;
        v27 = 0x1000000LL;
        v31 = 8;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C063C0,
          (unsigned __int8 *)&word_14002A16E,
          0LL,
          0LL,
          3u,
          &v29);
      }
      v13 = -1073741595;
      goto LABEL_13;
    }
    v10 = v21;
  }
  RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C494B0, v7);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&RunOnce, 0LL);
  v15 = (void *)qword_140C494A0;
  qword_140C494A0 = (__int64)Object;
  Object = v15;
  qword_140C494A8 = v23;
  qword_140C49498 = v10;
  RtlpFcBufferManagerUpdateBuffers(qword_140C494B0, v8, (__int64)v28);
  RtlpFcWriteHighLowHigh((__int64)&qword_140C49458, v8);
  RtlpFcWriteHighLowHigh(0xFFFFF78000000720uLL, v16);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&RunOnce, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&RunOnce);
  KeAbPostRelease((ULONG_PTR)&RunOnce);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C49450, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&stru_140C49450);
  KeAbPostRelease((ULONG_PTR)&stru_140C49450);
  CmFcpManagerPublishChangeNotifications(v17, v8);
  v13 = 0;
LABEL_23:
  v18 = &v28[1];
  do
  {
    if ( *v18 )
      MiRemoveFromSystemSpace(*v18, 1);
    v18 += 3;
    --v12;
  }
  while ( v12 );
  if ( Object )
    ObfDereferenceObject(Object);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v13;
}
