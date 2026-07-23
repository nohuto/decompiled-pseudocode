/*
 * XREFs of CmFcManagerUpdateFeatureUsageSubscriptions @ 0x14087E1C0
 * Callers:
 *     CmUpdateFeatureUsageSubscription @ 0x14086B628 (CmUpdateFeatureUsageSubscription.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403A6AB8 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403A6E9C (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcWriteHighLowHigh @ 0x1403CE5D4 (RtlpFcWriteHighLowHigh.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x1405CFCFC (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 *     MmUnmapViewInSystemSpace @ 0x14060ACA0 (MmUnmapViewInSystemSpace.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x1407CADB4 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpMapSection @ 0x1407D261C (CmFcpMapSection.c)
 *     CmFcpManagerCreateSection @ 0x14087E6D0 (CmFcpManagerCreateSection.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x14087E924 (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcUpdateUsageTriggers @ 0x14091A848 (RtlpFcUpdateUsageTriggers.c)
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
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  struct _DMA_ADAPTER *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  PVOID *v21; // rbx
  __int64 v23; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v24; // [rsp+38h] [rbp-A1h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-99h]
  __int64 v26; // [rsp+48h] [rbp-91h]
  __int64 v27; // [rsp+50h] [rbp-89h] BYREF
  __int64 v28; // [rsp+58h] [rbp-81h] BYREF
  __int64 v29; // [rsp+60h] [rbp-79h]
  __int64 v30; // [rsp+68h] [rbp-71h] BYREF
  _QWORD v31[10]; // [rsp+70h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+C0h] [rbp-19h] BYREF
  __int64 *v33; // [rsp+E0h] [rbp+7h]
  int v34; // [rsp+E8h] [rbp+Fh]
  int v35; // [rsp+ECh] [rbp+13h]

  v3 = a3;
  v27 = 0LL;
  v23 = 0LL;
  DmaAdapter = 0LL;
  v26 = 0LL;
  memset(v31, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C48150, 0LL);
  RtlpFcBufferManagerReferenceBuffers((__int64)qword_140C481B0, (__int64)&v27, &v23);
  v7 = v23;
  v8 = v27 + 1;
  v28 = 0LL;
  if ( v27 == -1 )
    v8 = 1LL;
  v29 = v3;
  v9 = *(_QWORD *)(v23 + 56);
  v10 = v8;
  v24 = v8;
  v31[6] = v8;
  updated = RtlpFcUpdateUsageTriggers(v9, v6, a2, (unsigned int)v3, 0LL, &v28);
  v12 = 3LL;
  v13 = updated;
  if ( updated < 0 )
  {
    if ( updated != -2147483643
      || (v13 = CmFcpManagerCreateSection(v28, v8, CmFcSystemManager[0], &v24), v13 < 0)
      || (v13 = CmFcpMapSection(&v24, &v31[6]), v13 < 0)
      || (v13 = RtlpFcUpdateUsageTriggers(*(_QWORD *)(v7 + 56), v14, a2, v29, v31[7], &v31[8]), v13 < 0) )
    {
LABEL_13:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C48150, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&stru_140C48150);
      KeAbPostRelease((ULONG_PTR)&stru_140C48150);
      v17 = v23;
      if ( v23 )
        RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C481B0, v23);
      goto LABEL_23;
    }
    if ( (int)RtlpFcValidateFeatureUsageSubscriptionBuffer((unsigned int *)v31[7], v31[8]) < 0 )
    {
      if ( (unsigned int)dword_140C01988 > 5 && tlgKeywordOn((__int64)&dword_140C01988, 0x400000000001LL) )
      {
        v35 = 0;
        v33 = &v30;
        v30 = 0x1000000LL;
        v34 = 8;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C01988,
          (unsigned __int8 *)byte_140023CED,
          0LL,
          0LL,
          3u,
          &v32);
      }
      v13 = -1073741595;
      goto LABEL_13;
    }
    v10 = v24;
  }
  RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C481B0, v7);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&RunOnce, 0LL);
  v18 = (struct _DMA_ADAPTER *)qword_140C481A0;
  qword_140C481A0 = (__int64)DmaAdapter;
  DmaAdapter = v18;
  qword_140C481A8 = v26;
  qword_140C48198 = v10;
  RtlpFcBufferManagerUpdateBuffers(qword_140C481B0, v8, (__int64)v31);
  RtlpFcWriteHighLowHigh((__int64)&qword_140C48158, v8);
  RtlpFcWriteHighLowHigh(0xFFFFF78000000710uLL, v19);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&RunOnce, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&RunOnce);
  KeAbPostRelease((ULONG_PTR)&RunOnce);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C48150, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&stru_140C48150);
  KeAbPostRelease((ULONG_PTR)&stru_140C48150);
  CmFcpManagerPublishChangeNotifications(v20, v8);
  v13 = 0;
LABEL_23:
  v21 = (PVOID *)&v31[1];
  do
  {
    if ( *v21 )
      MmUnmapViewInSystemSpace(*v21);
    v21 += 3;
    --v12;
  }
  while ( v12 );
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v17, v15, v16);
  return (unsigned int)v13;
}
