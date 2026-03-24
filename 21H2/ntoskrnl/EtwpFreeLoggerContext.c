/*
 * XREFs of EtwpFreeLoggerContext @ 0x1406B51BC
 * Callers:
 *     EtwpLogger @ 0x1406456F0 (EtwpLogger.c)
 *     EtwpStopTrace @ 0x1406DDFBC (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406DE1A0 (EtwpStartLogger.c)
 * Callees:
 *     KeCancelTimer @ 0x140260240 (KeCancelTimer.c)
 *     ExDeleteTimer @ 0x14027F910 (ExDeleteTimer.c)
 *     ExReleaseExtensionTable @ 0x14029F2DC (ExReleaseExtensionTable.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     EtwpClearPartitionContext @ 0x1402C7EA0 (EtwpClearPartitionContext.c)
 *     EtwpFreeCompression @ 0x1402C7F24 (EtwpFreeCompression.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x1402C7F88 (EtwpCancelPendingStackwalkApcs.c)
 *     KeRemoveQueueDpc @ 0x1402C7FE0 (KeRemoveQueueDpc.c)
 *     KeGenericCallDpc @ 0x1402ECF00 (KeGenericCallDpc.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140360770 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1403613A0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     ExReInitializeRundownProtectionCacheAware @ 0x140361460 (ExReInitializeRundownProtectionCacheAware.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     ObDereferenceSecurityDescriptor @ 0x14065F6A0 (ObDereferenceSecurityDescriptor.c)
 *     EtwpFreeTraceBufferPool @ 0x1406B566C (EtwpFreeTraceBufferPool.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1406B5824 (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpFreeStackCache @ 0x140941DE8 (EtwpFreeStackCache.c)
 *     EtwpCancelMemoryPreservation @ 0x140948510 (EtwpCancelMemoryPreservation.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeLoggerContext(char *P)
{
  __int64 v1; // r14
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *v7; // r9
  __int64 v8; // r15
  void *v9; // rcx
  __int64 v10; // rcx
  ULONG_PTR v11; // rax
  UNICODE_STRING *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _DMA_ADAPTER *v15; // rcx
  void *v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  PVOID *v19; // rsi
  _QWORD *v20; // rbx
  __int64 v21; // rbp
  _DWORD *v22; // rcx
  _QWORD *v23; // rbx
  void *v24; // rcx
  char *v25; // rbx
  char *v26; // rcx
  char *v27; // rbx
  char *v28; // rcx
  _QWORD *v29; // rcx
  void *v30; // rcx
  __int128 v31; // [rsp+20h] [rbp-38h] BYREF
  __int64 v32; // [rsp+30h] [rbp-28h]

  v1 = *((_QWORD *)P + 135);
  EtwpRealtimeDisconnectAllConsumers(P);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(P + 704), 0LL);
  *((_DWORD *)P + 208) |= 0x200u;
  if ( (*((_DWORD *)P + 209) & 0x20) != 0 )
  {
    v3 = *((_QWORD *)P + 46);
    *((_QWORD *)P + 46) = 0LL;
    *((_DWORD *)P + 14) = 0;
    _InterlockedAnd((volatile signed __int32 *)P + 209, 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)(P + 472), 0, 0);
    KeSetEvent(*(PRKEVENT *)(v3 + 48), 0, 0);
    HalPutDmaAdapter((PADAPTER_OBJECT)v3);
  }
  ExReleasePushLockEx((ULONG_PTR)(P + 704), 0LL);
  v4 = *(unsigned int *)P;
  EtwpCancelPendingStackwalkApcs((unsigned int *)P, v5, v6, v7);
  v8 = (unsigned int)v4;
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v4), 1u);
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v4));
  if ( *((_WORD *)P + 524) )
  {
    v9 = (void *)*((_QWORD *)P + 132);
    *((_WORD *)P + 524) = 0;
    ExFreePoolWithTag(v9, 0);
    *((_QWORD *)P + 132) = 0LL;
  }
  v10 = *((_QWORD *)P + 133);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 8);
    if ( v11 )
    {
      v32 = 0LL;
      v31 = 0LL;
      ExDeleteTimer(v11, 1, 1, (unsigned int *)&v31);
      v10 = *((_QWORD *)P + 133);
    }
    if ( *(_QWORD *)(v10 + 24) )
    {
      ExFreePoolWithTag(*(PVOID *)(v10 + 24), 0);
      v10 = *((_QWORD *)P + 133);
    }
    ExFreePoolWithTag((PVOID)v10, 0);
    *((_QWORD *)P + 133) = 0LL;
  }
  if ( *((_DWORD *)P + 79) != 1 )
    KeGenericCallDpc((__int64)KeAbCrossThreadDeleteNopDpcRoutine, 0LL);
  EtwpFreeCompression((__int64)P);
  KeCancelTimer((PKTIMER)(P + 520));
  KeRemoveQueueDpc((PRKDPC)(P + 584));
  v12 = (UNICODE_STRING *)*((_QWORD *)P + 134);
  if ( v12 )
  {
    EtwpCancelMemoryPreservation(P);
    RtlFreeAnsiString(v12 + 1);
    ExFreePoolWithTag(v12, 0);
    *((_QWORD *)P + 134) = 0LL;
  }
  EtwpFreeTraceBufferPool(P);
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v13 = 0LL;
    v14 = (unsigned int)KeNumberProcessors_0;
    do
    {
      v13 += 64LL;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 135) + 4136LL) + v13 - 56) + 8 * v8) = 0LL;
      --v14;
    }
    while ( v14 );
  }
  RtlFreeAnsiString((PUNICODE_STRING)(P + 168));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 184));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 200));
  RtlFreeAnsiString((PUNICODE_STRING)P + 24);
  v15 = (struct _DMA_ADAPTER *)*((_QWORD *)P + 92);
  if ( v15 )
    HalPutDmaAdapter(v15);
  v16 = (void *)*((_QWORD *)P + 99);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  v17 = _InterlockedExchange64((volatile __int64 *)P + 100, 0LL);
  ObDereferenceSecurityDescriptor(v17 & 0xFFFFFFFFFFFFFFF0uLL, (v17 & 0xF) + 1);
  v18 = *((_DWORD *)P + 208);
  if ( (v18 & 0x80u) != 0 )
  {
    ExFreePoolWithTag(*((PVOID *)P + 123), 0);
    ExFreePoolWithTag(*((PVOID *)P + 118), 0);
    v18 = *((_DWORD *)P + 208);
  }
  if ( (v18 & 0x2000) != 0 )
  {
    _InterlockedDecrement(&dword_140C53D80);
    v18 = *((_DWORD *)P + 208);
  }
  if ( (v18 & 0x1000000) != 0 )
    EtwpFreeStackCache(*((PVOID *)P + 124));
  if ( (*((_DWORD *)P + 3) & 0x2000000) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(v1 + 4224), (unsigned __int8)P[834]);
  if ( *((_QWORD *)P + 125) )
  {
    v19 = (PVOID *)*((_QWORD *)P + 125);
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v20 = v19 + 3;
      v21 = (unsigned int)KeNumberProcessors_0;
      do
      {
        if ( *v20 )
          off_140C007E0[0]();
        ++v20;
        --v21;
      }
      while ( v21 );
    }
    if ( *v19 )
      ExFreePoolWithTag(*v19, 0);
    ExFreePoolWithTag(v19, 0);
  }
  v22 = (_DWORD *)*((_QWORD *)P + 126);
  if ( v22 )
  {
    if ( (*((_DWORD *)P + 208) & 0x8000) != 0 )
    {
      _InterlockedDecrement(&dword_140C53D60);
      v22 = (_DWORD *)*((_QWORD *)P + 126);
    }
    if ( v22 )
    {
      if ( *v22 )
      {
        ((void (__fastcall *)(_QWORD))off_140C009B8[0])((unsigned int)*v22);
        v22 = (_DWORD *)*((_QWORD *)P + 126);
      }
      ExFreePoolWithTag(v22, 0);
      *((_QWORD *)P + 126) = 0LL;
    }
  }
  v23 = (_QWORD *)*((_QWORD *)P + 127);
  if ( v23 )
  {
    if ( v23[2] )
    {
      if ( *v23 )
      {
        _interlockedbittestandreset(&KiCpuTracingFlags, 2u);
        (*(void (__fastcall **)(_QWORD))(v23[2] + 8LL))(*v23);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)EtwpHwTraceExtensionHost);
    }
    ExFreePoolWithTag(v23, 0);
    *((_QWORD *)P + 127) = 0LL;
  }
  v24 = (void *)*((_QWORD *)P + 159);
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
  v25 = (char *)*((_QWORD *)P + 14);
  while ( v25 != P + 112 )
  {
    v26 = v25;
    v25 = *(char **)v25;
    ExFreePoolWithTag(v26, 0);
  }
  v27 = (char *)*((_QWORD *)P + 128);
  while ( v27 != P + 1024 )
  {
    v28 = v27;
    v27 = *(char **)v27;
    ExFreePoolWithTag(v28, 0);
  }
  while ( *((_QWORD *)P + 16) )
  {
    v29 = (_QWORD *)*((_QWORD *)P + 16);
    *((_QWORD *)P + 16) = *v29;
    ExFreePoolWithTag(v29, 0);
  }
  EtwpClearPartitionContext((__int64 *)P + 163);
  v30 = (void *)*((_QWORD *)P + 164);
  if ( v30 )
    ExFreePoolWithTag(v30, 0);
  ExReInitializeRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v8));
  *(_QWORD *)(*(_QWORD *)(v1 + 456) + 8 * v8) = 1LL;
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement((volatile signed __int32 *)(v1 + 4124));
}
