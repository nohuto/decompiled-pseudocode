/*
 * XREFs of CmFcManagerUpdateFeatureUsageSubscriptions @ 0x14087AB50
 * Callers:
 *     CmUpdateFeatureUsageSubscription @ 0x140867E70 (CmUpdateFeatureUsageSubscription.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403A3CD8 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403A4060 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcWriteHighLowHigh @ 0x1403CAE68 (RtlpFcWriteHighLowHigh.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x1405C8610 (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 *     MmUnmapViewInSystemSpace @ 0x140605CC0 (MmUnmapViewInSystemSpace.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x1407B7FA4 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpMapSection @ 0x1407BF96C (CmFcpMapSection.c)
 *     CmFcpManagerCreateSection @ 0x14087B060 (CmFcpManagerCreateSection.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x14087B2B4 (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcUpdateUsageTriggers @ 0x1409172D8 (RtlpFcUpdateUsageTriggers.c)
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
  NTSTATUS v13; // edi
  __int64 v14; // rdx
  struct _DMA_ADAPTER *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  PVOID *v18; // rbx
  __int64 v20; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v21; // [rsp+38h] [rbp-A1h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-99h]
  __int64 v23; // [rsp+48h] [rbp-91h]
  __int64 v24; // [rsp+50h] [rbp-89h] BYREF
  __int64 v25; // [rsp+58h] [rbp-81h] BYREF
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
  DmaAdapter = 0LL;
  v23 = 0LL;
  memset(v28, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C47F50, 0LL);
  RtlpFcBufferManagerReferenceBuffers((__int64)qword_140C47FB0, (__int64)&v24, &v20);
  v7 = v20;
  v8 = v24 + 1;
  v25 = 0LL;
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
      || (v13 = CmFcpManagerCreateSection(v25, v8, CmFcSystemManager[0], &v21), v13 < 0)
      || (v13 = CmFcpMapSection(&v21, &v28[6]), v13 < 0)
      || (v13 = RtlpFcUpdateUsageTriggers(*(_QWORD *)(v7 + 56), v14, a2, v26, v28[7], &v28[8]), v13 < 0) )
    {
LABEL_13:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C47F50, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C47F50);
      KeAbPostRelease((ULONG_PTR)&stru_140C47F50);
      if ( v20 )
        RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C47FB0, v20);
      goto LABEL_23;
    }
    if ( (int)RtlpFcValidateFeatureUsageSubscriptionBuffer((unsigned int *)v28[7], v28[8]) < 0 )
    {
      if ( (unsigned int)dword_140C01988 > 5 && tlgKeywordOn((__int64)&dword_140C01988, 0x400000000001LL) )
      {
        v32 = 0;
        v30 = &v27;
        v27 = 0x1000000LL;
        v31 = 8;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C01988,
          (unsigned __int8 *)&unk_140022CD8,
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
  RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C47FB0, v7);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&RunOnce, 0LL);
  v15 = (struct _DMA_ADAPTER *)qword_140C47FA0;
  qword_140C47FA0 = (__int64)DmaAdapter;
  DmaAdapter = v15;
  qword_140C47FA8 = v23;
  qword_140C47F98 = v10;
  RtlpFcBufferManagerUpdateBuffers(qword_140C47FB0, v8, (__int64)v28);
  RtlpFcWriteHighLowHigh((__int64)&qword_140C47F58, v8);
  RtlpFcWriteHighLowHigh(0xFFFFF78000000710uLL, v16);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&RunOnce, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&RunOnce);
  KeAbPostRelease((ULONG_PTR)&RunOnce);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C47F50, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C47F50);
  KeAbPostRelease((ULONG_PTR)&stru_140C47F50);
  CmFcpManagerPublishChangeNotifications(v17, v8);
  v13 = 0;
LABEL_23:
  v18 = (PVOID *)&v28[1];
  do
  {
    if ( *v18 )
      MmUnmapViewInSystemSpace(*v18);
    v18 += 3;
    --v12;
  }
  while ( v12 );
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v13;
}
