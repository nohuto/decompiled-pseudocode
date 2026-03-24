/*
 * XREFs of CmFcManagerUpdateFeatureUsageSubscriptions @ 0x14087E060
 * Callers:
 *     CmUpdateFeatureUsageSubscription @ 0x14086B4C8 (CmUpdateFeatureUsageSubscription.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025FAE0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402605BC (_tlgKeywordOn.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403A6968 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403A6D4C (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcWriteHighLowHigh @ 0x1403CE464 (RtlpFcWriteHighLowHigh.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x1405CFCFC (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 *     MmUnmapViewInSystemSpace @ 0x1406AC5B0 (MmUnmapViewInSystemSpace.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x1407CAA94 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpMapSection @ 0x1407D24AC (CmFcpMapSection.c)
 *     CmFcpManagerCreateSection @ 0x14087E570 (CmFcpManagerCreateSection.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x14087E7C4 (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcUpdateUsageTriggers @ 0x14091A6E8 (RtlpFcUpdateUsageTriggers.c)
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
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C480F0, 0LL);
  RtlpFcBufferManagerReferenceBuffers((__int64)qword_140C48150, (__int64)&v24, &v20);
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
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C480F0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&stru_140C480F0);
      KeAbPostRelease((ULONG_PTR)&stru_140C480F0);
      if ( v20 )
        RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C48150, v20);
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
          (unsigned __int8 *)byte_140023C2D,
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
  RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C48150, v7);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&RunOnce, 0LL);
  v15 = (struct _DMA_ADAPTER *)qword_140C48140;
  qword_140C48140 = (__int64)DmaAdapter;
  DmaAdapter = v15;
  qword_140C48148 = v23;
  qword_140C48138 = v10;
  RtlpFcBufferManagerUpdateBuffers(qword_140C48150, v8, (__int64)v28);
  RtlpFcWriteHighLowHigh((__int64)&qword_140C480F8, v8);
  RtlpFcWriteHighLowHigh(0xFFFFF78000000710uLL, v16);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&RunOnce, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&RunOnce);
  KeAbPostRelease((ULONG_PTR)&RunOnce);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C480F0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&stru_140C480F0);
  KeAbPostRelease((ULONG_PTR)&stru_140C480F0);
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
