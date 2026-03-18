/*
 * XREFs of EtwpFreeLoggerContext @ 0x1407013FC
 * Callers:
 *     EtwpStopTrace @ 0x1406796F8 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406798DC (EtwpStartLogger.c)
 *     EtwpLogger @ 0x14067AF70 (EtwpLogger.c)
 * Callees:
 *     KeCancelTimer @ 0x1402364D0 (KeCancelTimer.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ExReleaseExtensionTable @ 0x1402D3FCC (ExReleaseExtensionTable.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402E5060 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeGenericCallDpc @ 0x140303170 (KeGenericCallDpc.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14033F6A0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     ExReInitializeRundownProtectionCacheAware @ 0x14033F760 (ExReInitializeRundownProtectionCacheAware.c)
 *     EtwpClearPartitionContext @ 0x14033FEF8 (EtwpClearPartitionContext.c)
 *     EtwpFreeCompression @ 0x14033FF7C (EtwpFreeCompression.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x14033FFE0 (EtwpCancelPendingStackwalkApcs.c)
 *     KeRemoveQueueDpc @ 0x140340030 (KeRemoveQueueDpc.c)
 *     ExDeleteTimer @ 0x14035B430 (ExDeleteTimer.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     ObDereferenceSecurityDescriptor @ 0x140613D20 (ObDereferenceSecurityDescriptor.c)
 *     EtwpFreeTraceBufferPool @ 0x14070423C (EtwpFreeTraceBufferPool.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x140704368 (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpFreeStackCache @ 0x14093D5D8 (EtwpFreeStackCache.c)
 *     EtwpCancelMemoryPreservation @ 0x140943D0C (EtwpCancelMemoryPreservation.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeLoggerContext(char *P)
{
  __int64 v1; // r14
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD *v6; // r9
  __int64 v7; // r15
  ULONG_PTR v8; // rcx
  void *v9; // rcx
  UNICODE_STRING *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _DMA_ADAPTER *v13; // rcx
  void *v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  _DWORD *v17; // rcx
  _QWORD *v18; // rbx
  void *v19; // rcx
  char *v20; // rbx
  char *v21; // rbx
  void *v22; // rcx
  char *v23; // rcx
  __int64 v24; // rbx
  void *v25; // rcx
  PVOID *v26; // rsi
  _QWORD *v27; // rbx
  __int64 v28; // rbp
  char *v29; // rcx
  _QWORD *v30; // rcx
  __int128 v31; // [rsp+20h] [rbp-38h] BYREF
  __int64 v32; // [rsp+30h] [rbp-28h]

  v1 = *((_QWORD *)P + 139);
  EtwpRealtimeDisconnectAllConsumers(P);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(P + 704), 0LL);
  *((_DWORD *)P + 208) |= 0x200u;
  if ( (*((_DWORD *)P + 209) & 0x20) != 0 )
  {
    v24 = *((_QWORD *)P + 46);
    *((_QWORD *)P + 46) = 0LL;
    *((_DWORD *)P + 14) = 0;
    _InterlockedAnd((volatile signed __int32 *)P + 209, 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)(P + 472), 0, 0);
    KeSetEvent(*(PRKEVENT *)(v24 + 48), 0, 0);
    HalPutDmaAdapter((PADAPTER_OBJECT)v24);
  }
  ExReleasePushLockEx((ULONG_PTR)(P + 704), 0LL);
  v3 = *(unsigned int *)P;
  EtwpCancelPendingStackwalkApcs((unsigned int *)P, v4, v5, v6);
  v7 = (unsigned int)v3;
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v3), 1u);
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v3));
  if ( *((_WORD *)P + 524) )
  {
    v25 = (void *)*((_QWORD *)P + 132);
    *((_WORD *)P + 524) = 0;
    ExFreePoolWithTag(v25, 0);
    *((_QWORD *)P + 132) = 0LL;
  }
  v8 = *((_QWORD *)P + 136);
  if ( v8 )
  {
    v32 = 0LL;
    v31 = 0LL;
    ExDeleteTimer(v8, 1, 1, (unsigned int *)&v31);
  }
  v9 = (void *)*((_QWORD *)P + 135);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( *((_DWORD *)P + 79) != 1 )
    KeGenericCallDpc((__int64)KeAbCrossThreadDeleteNopDpcRoutine, 0LL);
  EtwpFreeCompression((__int64)P);
  KeCancelTimer((PKTIMER)(P + 520));
  KeRemoveQueueDpc((PRKDPC)(P + 584));
  v10 = (UNICODE_STRING *)*((_QWORD *)P + 138);
  if ( v10 )
  {
    EtwpCancelMemoryPreservation(P);
    RtlFreeAnsiString(v10 + 1);
    ExFreePoolWithTag(v10, 0);
    *((_QWORD *)P + 138) = 0LL;
  }
  EtwpFreeTraceBufferPool(P);
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v11 = 0LL;
    v12 = (unsigned int)KeNumberProcessors_0;
    do
    {
      v11 += 64LL;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 139) + 4136LL) + v11 - 56) + 8 * v7) = 0LL;
      --v12;
    }
    while ( v12 );
  }
  RtlFreeAnsiString((PUNICODE_STRING)(P + 168));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 184));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 200));
  RtlFreeAnsiString((PUNICODE_STRING)P + 24);
  v13 = (struct _DMA_ADAPTER *)*((_QWORD *)P + 92);
  if ( v13 )
    HalPutDmaAdapter(v13);
  v14 = (void *)*((_QWORD *)P + 99);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  v15 = _InterlockedExchange64((volatile __int64 *)P + 100, 0LL);
  ObDereferenceSecurityDescriptor(v15 & 0xFFFFFFFFFFFFFFF0uLL, (v15 & 0xF) + 1);
  v16 = *((_DWORD *)P + 208);
  if ( (v16 & 0x80u) != 0 )
  {
    ExFreePoolWithTag(*((PVOID *)P + 123), 0);
    ExFreePoolWithTag(*((PVOID *)P + 118), 0);
    v16 = *((_DWORD *)P + 208);
  }
  if ( (v16 & 0x2000) != 0 )
  {
    _InterlockedDecrement(&dword_140C53C60);
    v16 = *((_DWORD *)P + 208);
  }
  if ( (v16 & 0x1000000) != 0 )
    EtwpFreeStackCache(*((PVOID *)P + 124));
  if ( (*((_DWORD *)P + 3) & 0x2000000) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(v1 + 4224), (unsigned __int8)P[834]);
  if ( *((_QWORD *)P + 125) )
  {
    v26 = (PVOID *)*((_QWORD *)P + 125);
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v27 = v26 + 3;
      v28 = (unsigned int)KeNumberProcessors_0;
      do
      {
        if ( *v27 )
          off_140C007E0[0]();
        ++v27;
        --v28;
      }
      while ( v28 );
    }
    if ( *v26 )
      ExFreePoolWithTag(*v26, 0);
    ExFreePoolWithTag(v26, 0);
  }
  v17 = (_DWORD *)*((_QWORD *)P + 126);
  if ( v17 )
  {
    if ( (*((_DWORD *)P + 208) & 0x8000) != 0 )
    {
      _InterlockedDecrement(&dword_140C53C80);
      v17 = (_DWORD *)*((_QWORD *)P + 126);
    }
    if ( v17 )
    {
      if ( *v17 )
      {
        ((void (__fastcall *)(_QWORD))off_140C009B8[0])((unsigned int)*v17);
        v17 = (_DWORD *)*((_QWORD *)P + 126);
      }
      ExFreePoolWithTag(v17, 0);
      *((_QWORD *)P + 126) = 0LL;
    }
  }
  v18 = (_QWORD *)*((_QWORD *)P + 127);
  if ( v18 )
  {
    if ( v18[2] )
    {
      if ( *v18 )
      {
        _interlockedbittestandreset(&KiCpuTracingFlags, 2u);
        (*(void (__fastcall **)(_QWORD))(v18[2] + 8LL))(*v18);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)EtwpHwTraceExtensionHost);
    }
    ExFreePoolWithTag(v18, 0);
    *((_QWORD *)P + 127) = 0LL;
  }
  v19 = (void *)*((_QWORD *)P + 163);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  v20 = (char *)*((_QWORD *)P + 14);
  while ( v20 != P + 112 )
  {
    v23 = v20;
    v20 = *(char **)v20;
    ExFreePoolWithTag(v23, 0);
  }
  v21 = (char *)*((_QWORD *)P + 128);
  while ( v21 != P + 1024 )
  {
    v29 = v21;
    v21 = *(char **)v21;
    ExFreePoolWithTag(v29, 0);
  }
  while ( *((_QWORD *)P + 16) )
  {
    v30 = (_QWORD *)*((_QWORD *)P + 16);
    *((_QWORD *)P + 16) = *v30;
    ExFreePoolWithTag(v30, 0);
  }
  EtwpClearPartitionContext((__int64 *)P + 167);
  v22 = (void *)*((_QWORD *)P + 168);
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  ExReInitializeRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v7));
  *(_QWORD *)(*(_QWORD *)(v1 + 456) + 8 * v7) = 1LL;
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement((volatile signed __int32 *)(v1 + 4124));
}
