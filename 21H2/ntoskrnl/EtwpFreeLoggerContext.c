/*
 * XREFs of EtwpFreeLoggerContext @ 0x1406146D4
 * Callers:
 *     EtwpLogger @ 0x14063A500 (EtwpLogger.c)
 *     EtwpStopTrace @ 0x1406B529C (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406B5480 (EtwpStartLogger.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14021C83C (ExReleaseExtensionTable.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     EtwpClearPartitionContext @ 0x140246700 (EtwpClearPartitionContext.c)
 *     EtwpFreeCompression @ 0x140246784 (EtwpFreeCompression.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x1402467E8 (EtwpCancelPendingStackwalkApcs.c)
 *     KeRemoveQueueDpc @ 0x140246840 (KeRemoveQueueDpc.c)
 *     ExDeleteTimer @ 0x14026DB50 (ExDeleteTimer.c)
 *     KeCancelTimer @ 0x1402819B0 (KeCancelTimer.c)
 *     KeGenericCallDpc @ 0x14029E250 (KeGenericCallDpc.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402A5670 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1402A5C00 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     ExReInitializeRundownProtectionCacheAware @ 0x1402A5CC0 (ExReInitializeRundownProtectionCacheAware.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     EtwpFreeTraceBufferPool @ 0x140614B84 (EtwpFreeTraceBufferPool.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x140614D3C (EtwpRealtimeDisconnectAllConsumers.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     ObDereferenceSecurityDescriptor @ 0x1406544C0 (ObDereferenceSecurityDescriptor.c)
 *     EtwpFreeStackCache @ 0x140941FB8 (EtwpFreeStackCache.c)
 *     EtwpCancelMemoryPreservation @ 0x1409486E0 (EtwpCancelMemoryPreservation.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeLoggerContext(char *P)
{
  __int64 v1; // r14
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // r15
  void *v6; // rcx
  __int64 v7; // rcx
  ULONG_PTR v8; // rax
  UNICODE_STRING *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _DMA_ADAPTER *v12; // rcx
  void *v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  PVOID *v16; // rsi
  _QWORD *v17; // rbx
  __int64 v18; // rbp
  _DWORD *v19; // rcx
  _QWORD *v20; // rbx
  void *v21; // rcx
  char *v22; // rbx
  char *v23; // rcx
  char *v24; // rbx
  char *v25; // rcx
  _QWORD *v26; // rcx
  void *v27; // rcx
  __int128 v28; // [rsp+20h] [rbp-38h] BYREF
  __int64 v29; // [rsp+30h] [rbp-28h]

  v1 = *((_QWORD *)P + 135);
  EtwpRealtimeDisconnectAllConsumers();
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
  EtwpCancelPendingStackwalkApcs((unsigned int *)P);
  v5 = (unsigned int)v4;
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v4), 1u);
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v4));
  if ( *((_WORD *)P + 524) )
  {
    v6 = (void *)*((_QWORD *)P + 132);
    *((_WORD *)P + 524) = 0;
    ExFreePoolWithTag(v6, 0);
    *((_QWORD *)P + 132) = 0LL;
  }
  v7 = *((_QWORD *)P + 133);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 8);
    if ( v8 )
    {
      v29 = 0LL;
      v28 = 0LL;
      ExDeleteTimer(v8, 1, 1, (unsigned int *)&v28);
      v7 = *((_QWORD *)P + 133);
    }
    if ( *(_QWORD *)(v7 + 24) )
    {
      ExFreePoolWithTag(*(PVOID *)(v7 + 24), 0);
      v7 = *((_QWORD *)P + 133);
    }
    ExFreePoolWithTag((PVOID)v7, 0);
    *((_QWORD *)P + 133) = 0LL;
  }
  if ( *((_DWORD *)P + 79) != 1 )
    KeGenericCallDpc((__int64)KeAbCrossThreadDeleteNopDpcRoutine, 0LL);
  EtwpFreeCompression((__int64)P);
  KeCancelTimer((PKTIMER)(P + 520));
  KeRemoveQueueDpc((PRKDPC)(P + 584));
  v9 = (UNICODE_STRING *)*((_QWORD *)P + 134);
  if ( v9 )
  {
    EtwpCancelMemoryPreservation(P);
    RtlFreeAnsiString(v9 + 1);
    ExFreePoolWithTag(v9, 0);
    *((_QWORD *)P + 134) = 0LL;
  }
  EtwpFreeTraceBufferPool(P);
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v10 = 0LL;
    v11 = (unsigned int)KeNumberProcessors_0;
    do
    {
      v10 += 64LL;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 135) + 4136LL) + v10 - 56) + 8 * v5) = 0LL;
      --v11;
    }
    while ( v11 );
  }
  RtlFreeAnsiString((PUNICODE_STRING)(P + 168));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 184));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 200));
  RtlFreeAnsiString((PUNICODE_STRING)P + 24);
  v12 = (struct _DMA_ADAPTER *)*((_QWORD *)P + 92);
  if ( v12 )
    HalPutDmaAdapter(v12);
  v13 = (void *)*((_QWORD *)P + 99);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  v14 = _InterlockedExchange64((volatile __int64 *)P + 100, 0LL);
  ObDereferenceSecurityDescriptor(v14 & 0xFFFFFFFFFFFFFFF0uLL, (unsigned int)(v14 & 0xF) + 1);
  v15 = *((_DWORD *)P + 208);
  if ( (v15 & 0x80u) != 0 )
  {
    ExFreePoolWithTag(*((PVOID *)P + 123), 0);
    ExFreePoolWithTag(*((PVOID *)P + 118), 0);
    v15 = *((_DWORD *)P + 208);
  }
  if ( (v15 & 0x2000) != 0 )
  {
    _InterlockedDecrement(&dword_140C53DC0);
    v15 = *((_DWORD *)P + 208);
  }
  if ( (v15 & 0x1000000) != 0 )
    EtwpFreeStackCache(*((PVOID *)P + 124));
  if ( (*((_DWORD *)P + 3) & 0x2000000) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(v1 + 4224), (unsigned __int8)P[834]);
  if ( *((_QWORD *)P + 125) )
  {
    v16 = (PVOID *)*((_QWORD *)P + 125);
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v17 = v16 + 3;
      v18 = (unsigned int)KeNumberProcessors_0;
      do
      {
        if ( *v17 )
          off_140C007E0[0]();
        ++v17;
        --v18;
      }
      while ( v18 );
    }
    if ( *v16 )
      ExFreePoolWithTag(*v16, 0);
    ExFreePoolWithTag(v16, 0);
  }
  v19 = (_DWORD *)*((_QWORD *)P + 126);
  if ( v19 )
  {
    if ( (*((_DWORD *)P + 208) & 0x8000) != 0 )
    {
      _InterlockedDecrement(&dword_140C53DA0);
      v19 = (_DWORD *)*((_QWORD *)P + 126);
    }
    if ( v19 )
    {
      if ( *v19 )
      {
        ((void (__fastcall *)(_QWORD))off_140C009B8[0])((unsigned int)*v19);
        v19 = (_DWORD *)*((_QWORD *)P + 126);
      }
      ExFreePoolWithTag(v19, 0);
      *((_QWORD *)P + 126) = 0LL;
    }
  }
  v20 = (_QWORD *)*((_QWORD *)P + 127);
  if ( v20 )
  {
    if ( v20[2] )
    {
      if ( *v20 )
      {
        _interlockedbittestandreset(&KiCpuTracingFlags, 2u);
        (*(void (__fastcall **)(_QWORD))(v20[2] + 8LL))(*v20);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)EtwpHwTraceExtensionHost);
    }
    ExFreePoolWithTag(v20, 0);
    *((_QWORD *)P + 127) = 0LL;
  }
  v21 = (void *)*((_QWORD *)P + 159);
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  v22 = (char *)*((_QWORD *)P + 14);
  while ( v22 != P + 112 )
  {
    v23 = v22;
    v22 = *(char **)v22;
    ExFreePoolWithTag(v23, 0);
  }
  v24 = (char *)*((_QWORD *)P + 128);
  while ( v24 != P + 1024 )
  {
    v25 = v24;
    v24 = *(char **)v24;
    ExFreePoolWithTag(v25, 0);
  }
  while ( *((_QWORD *)P + 16) )
  {
    v26 = (_QWORD *)*((_QWORD *)P + 16);
    *((_QWORD *)P + 16) = *v26;
    ExFreePoolWithTag(v26, 0);
  }
  EtwpClearPartitionContext((__int64 *)P + 163);
  v27 = (void *)*((_QWORD *)P + 164);
  if ( v27 )
    ExFreePoolWithTag(v27, 0);
  ExReInitializeRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v5));
  *(_QWORD *)(*(_QWORD *)(v1 + 456) + 8 * v5) = 1LL;
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement((volatile signed __int32 *)(v1 + 4124));
}
