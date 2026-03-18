/*
 * XREFs of EtwpFreeLoggerContext @ 0x1406CB650
 * Callers:
 *     EtwpStopTrace @ 0x1406C75AC (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406C7A14 (EtwpStartLogger.c)
 *     EtwpLogger @ 0x1406C9F80 (EtwpLogger.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14026FD10 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     ExReInitializeRundownProtectionCacheAware @ 0x14026FDD0 (ExReInitializeRundownProtectionCacheAware.c)
 *     ExDeleteTimer @ 0x140275280 (ExDeleteTimer.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeCancelTimer @ 0x1402C9300 (KeCancelTimer.c)
 *     EtwpClearPartitionContext @ 0x1402FFAC8 (EtwpClearPartitionContext.c)
 *     EtwpFreeCompression @ 0x1402FFB4C (EtwpFreeCompression.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x1402FFBB0 (EtwpCancelPendingStackwalkApcs.c)
 *     KeRemoveQueueDpc @ 0x1402FFC00 (KeRemoveQueueDpc.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140311DB0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExReleaseExtensionTable @ 0x14032FE4C (ExReleaseExtensionTable.c)
 *     KeGenericCallDpc @ 0x14033FF70 (KeGenericCallDpc.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     ObDereferenceSecurityDescriptor @ 0x140669000 (ObDereferenceSecurityDescriptor.c)
 *     EtwpFreeTraceBufferPool @ 0x1406CB93C (EtwpFreeTraceBufferPool.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1406CBA68 (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpFreeStackCache @ 0x14093E858 (EtwpFreeStackCache.c)
 *     EtwpCancelMemoryPreservation @ 0x140944F80 (EtwpCancelMemoryPreservation.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeLoggerContext(char *P)
{
  __int64 v1; // r14
  __int64 v3; // rbx
  __int64 v4; // r15
  ULONG_PTR v5; // rcx
  void *v6; // rcx
  UNICODE_STRING *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _DMA_ADAPTER *v10; // rcx
  void *v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  _DWORD *v14; // rcx
  _QWORD *v15; // rbx
  void *v16; // rcx
  char *v17; // rbx
  char *v18; // rbx
  void *v19; // rcx
  char *v20; // rcx
  __int64 v21; // rbx
  void *v22; // rcx
  PVOID *v23; // rsi
  _QWORD *v24; // rbx
  __int64 v25; // rbp
  char *v26; // rcx
  _QWORD *v27; // rcx
  __int128 v28; // [rsp+20h] [rbp-38h] BYREF
  __int64 v29; // [rsp+30h] [rbp-28h]

  v1 = *((_QWORD *)P + 139);
  EtwpRealtimeDisconnectAllConsumers(P);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(P + 704), 0LL);
  *((_DWORD *)P + 208) |= 0x200u;
  if ( (*((_DWORD *)P + 209) & 0x20) != 0 )
  {
    v21 = *((_QWORD *)P + 46);
    *((_QWORD *)P + 46) = 0LL;
    *((_DWORD *)P + 14) = 0;
    _InterlockedAnd((volatile signed __int32 *)P + 209, 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)(P + 472), 0, 0);
    KeSetEvent(*(PRKEVENT *)(v21 + 48), 0, 0);
    HalPutDmaAdapter((PADAPTER_OBJECT)v21);
  }
  ExReleasePushLockEx((ULONG_PTR)(P + 704), 0LL);
  v3 = *(unsigned int *)P;
  EtwpCancelPendingStackwalkApcs((unsigned int *)P);
  v4 = (unsigned int)v3;
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v3), 1u);
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v3));
  if ( *((_WORD *)P + 524) )
  {
    v22 = (void *)*((_QWORD *)P + 132);
    *((_WORD *)P + 524) = 0;
    ExFreePoolWithTag(v22, 0);
    *((_QWORD *)P + 132) = 0LL;
  }
  v5 = *((_QWORD *)P + 136);
  if ( v5 )
  {
    v29 = 0LL;
    v28 = 0LL;
    ExDeleteTimer(v5, 1, 1, (unsigned int *)&v28);
  }
  v6 = (void *)*((_QWORD *)P + 135);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( *((_DWORD *)P + 79) != 1 )
    KeGenericCallDpc((__int64)KeAbCrossThreadDeleteNopDpcRoutine, 0LL);
  EtwpFreeCompression((__int64)P);
  KeCancelTimer((PKTIMER)(P + 520));
  KeRemoveQueueDpc((PRKDPC)(P + 584));
  v7 = (UNICODE_STRING *)*((_QWORD *)P + 138);
  if ( v7 )
  {
    EtwpCancelMemoryPreservation(P);
    RtlFreeAnsiString(v7 + 1);
    ExFreePoolWithTag(v7, 0);
    *((_QWORD *)P + 138) = 0LL;
  }
  EtwpFreeTraceBufferPool(P);
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v8 = 0LL;
    v9 = (unsigned int)KeNumberProcessors_0;
    do
    {
      v8 += 64LL;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 139) + 4136LL) + v8 - 56) + 8 * v4) = 0LL;
      --v9;
    }
    while ( v9 );
  }
  RtlFreeAnsiString((PUNICODE_STRING)(P + 168));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 184));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 200));
  RtlFreeAnsiString((PUNICODE_STRING)P + 24);
  v10 = (struct _DMA_ADAPTER *)*((_QWORD *)P + 92);
  if ( v10 )
    HalPutDmaAdapter(v10);
  v11 = (void *)*((_QWORD *)P + 99);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  v12 = _InterlockedExchange64((volatile __int64 *)P + 100, 0LL);
  ObDereferenceSecurityDescriptor(v12 & 0xFFFFFFFFFFFFFFF0uLL, (v12 & 0xF) + 1);
  v13 = *((_DWORD *)P + 208);
  if ( (v13 & 0x80u) != 0 )
  {
    ExFreePoolWithTag(*((PVOID *)P + 123), 0);
    ExFreePoolWithTag(*((PVOID *)P + 118), 0);
    v13 = *((_DWORD *)P + 208);
  }
  if ( (v13 & 0x2000) != 0 )
  {
    _InterlockedDecrement(&dword_140C53B60);
    v13 = *((_DWORD *)P + 208);
  }
  if ( (v13 & 0x1000000) != 0 )
    EtwpFreeStackCache(*((PVOID *)P + 124));
  if ( (*((_DWORD *)P + 3) & 0x2000000) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(v1 + 4224), (unsigned __int8)P[834]);
  if ( *((_QWORD *)P + 125) )
  {
    v23 = (PVOID *)*((_QWORD *)P + 125);
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v24 = v23 + 3;
      v25 = (unsigned int)KeNumberProcessors_0;
      do
      {
        if ( *v24 )
          off_140C007E0[0]();
        ++v24;
        --v25;
      }
      while ( v25 );
    }
    if ( *v23 )
      ExFreePoolWithTag(*v23, 0);
    ExFreePoolWithTag(v23, 0);
  }
  v14 = (_DWORD *)*((_QWORD *)P + 126);
  if ( v14 )
  {
    if ( (*((_DWORD *)P + 208) & 0x8000) != 0 )
    {
      _InterlockedDecrement(&dword_140C53B80);
      v14 = (_DWORD *)*((_QWORD *)P + 126);
    }
    if ( v14 )
    {
      if ( *v14 )
      {
        ((void (__fastcall *)(_QWORD))off_140C009B8[0])((unsigned int)*v14);
        v14 = (_DWORD *)*((_QWORD *)P + 126);
      }
      ExFreePoolWithTag(v14, 0);
      *((_QWORD *)P + 126) = 0LL;
    }
  }
  v15 = (_QWORD *)*((_QWORD *)P + 127);
  if ( v15 )
  {
    if ( v15[2] )
    {
      if ( *v15 )
      {
        _interlockedbittestandreset(&KiCpuTracingFlags, 2u);
        (*(void (__fastcall **)(_QWORD))(v15[2] + 8LL))(*v15);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)EtwpHwTraceExtensionHost);
    }
    ExFreePoolWithTag(v15, 0);
    *((_QWORD *)P + 127) = 0LL;
  }
  v16 = (void *)*((_QWORD *)P + 163);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  v17 = (char *)*((_QWORD *)P + 14);
  while ( v17 != P + 112 )
  {
    v20 = v17;
    v17 = *(char **)v17;
    ExFreePoolWithTag(v20, 0);
  }
  v18 = (char *)*((_QWORD *)P + 128);
  while ( v18 != P + 1024 )
  {
    v26 = v18;
    v18 = *(char **)v18;
    ExFreePoolWithTag(v26, 0);
  }
  while ( *((_QWORD *)P + 16) )
  {
    v27 = (_QWORD *)*((_QWORD *)P + 16);
    *((_QWORD *)P + 16) = *v27;
    ExFreePoolWithTag(v27, 0);
  }
  EtwpClearPartitionContext((__int64 *)P + 167);
  v19 = (void *)*((_QWORD *)P + 168);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  ExReInitializeRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v4));
  *(_QWORD *)(*(_QWORD *)(v1 + 456) + 8 * v4) = 1LL;
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement((volatile signed __int32 *)(v1 + 4124));
}
