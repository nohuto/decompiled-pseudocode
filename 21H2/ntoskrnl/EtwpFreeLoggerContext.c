/*
 * XREFs of EtwpFreeLoggerContext @ 0x1406D1830
 * Callers:
 *     EtwpStopTrace @ 0x1406EDFEC (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406EE2AC (EtwpStartLogger.c)
 *     EtwpLogger @ 0x140799440 (EtwpLogger.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 *     EtwpClearPartitionContext @ 0x14024DFC0 (EtwpClearPartitionContext.c)
 *     EtwpFreeStackWalkApcs @ 0x14024DFE4 (EtwpFreeStackWalkApcs.c)
 *     EtwpCancelPendingStackWalkApcs @ 0x14024E07C (EtwpCancelPendingStackWalkApcs.c)
 *     EtwpFreeCompression @ 0x14024E0F0 (EtwpFreeCompression.c)
 *     KeRemoveQueueDpc @ 0x14024E180 (KeRemoveQueueDpc.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1402D3100 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     ExReInitializeRundownProtectionCacheAware @ 0x1402D31C0 (ExReInitializeRundownProtectionCacheAware.c)
 *     ExDeleteTimer @ 0x1402D3D40 (ExDeleteTimer.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     ExReleaseExtensionTable @ 0x1403614E0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     EtwpFreeTraceBufferPool @ 0x1406D1CF4 (EtwpFreeTraceBufferPool.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1406D1E4C (EtwpRealtimeDisconnectAllConsumers.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     ObDereferenceSecurityDescriptor @ 0x140725730 (ObDereferenceSecurityDescriptor.c)
 *     SeDeleteClientSecurity @ 0x1407A8070 (SeDeleteClientSecurity.c)
 *     EtwpFreeStackCache @ 0x140883876 (EtwpFreeStackCache.c)
 *     EtwpCancelMemoryPreservation @ 0x1409EC988 (EtwpCancelMemoryPreservation.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeLoggerContext(char *P)
{
  __int64 v1; // r14
  PRKEVENT *v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // r15
  void *v6; // rcx
  __int64 v7; // rcx
  ULONG_PTR v8; // rax
  UNICODE_STRING *v9; // rbx
  unsigned int v10; // esi
  unsigned int i; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  void *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
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

  v1 = *((_QWORD *)P + 137);
  EtwpRealtimeDisconnectAllConsumers();
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(P + 688), 0LL);
  *((_DWORD *)P + 204) |= 0x200u;
  if ( (*((_DWORD *)P + 206) & 0x20) != 0 )
  {
    v3 = (PRKEVENT *)*((_QWORD *)P + 44);
    *((_QWORD *)P + 44) = 0LL;
    *((_DWORD *)P + 10) = 0;
    _InterlockedAnd((volatile signed __int32 *)P + 206, 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)P + 19, 0, 0);
    KeSetEvent(v3[6], 0, 0);
    ObfDereferenceObject(v3);
  }
  ExReleasePushLockEx((ULONG_PTR)(P + 688), 0LL);
  v4 = *(unsigned int *)P;
  EtwpCancelPendingStackWalkApcs((unsigned int *)P);
  v5 = (unsigned int)v4;
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v4), 1u);
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v4));
  if ( *((_WORD *)P + 532) )
  {
    v6 = (void *)*((_QWORD *)P + 134);
    *((_WORD *)P + 532) = 0;
    ExFreePoolWithTag(v6, 0);
    *((_QWORD *)P + 134) = 0LL;
  }
  v7 = *((_QWORD *)P + 135);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 8);
    if ( v8 )
    {
      v32 = 0LL;
      v31 = 0LL;
      ExDeleteTimer(v8, 1, 1, (unsigned int *)&v31);
      v7 = *((_QWORD *)P + 135);
    }
    if ( *(_QWORD *)(v7 + 24) )
    {
      ExFreePoolWithTag(*(PVOID *)(v7 + 24), 0);
      v7 = *((_QWORD *)P + 135);
    }
    ExFreePoolWithTag((PVOID)v7, 0);
    *((_QWORD *)P + 135) = 0LL;
  }
  if ( *((_DWORD *)P + 75) != 1 )
    KeGenericCallDpc((__int64)KeAbCrossThreadDeleteNopDpcRoutine, 0LL);
  EtwpFreeCompression((__int64)P);
  KeCancelTimer((PKTIMER)(P + 504));
  KeRemoveQueueDpc((PRKDPC)(P + 568));
  v9 = (UNICODE_STRING *)*((_QWORD *)P + 136);
  if ( v9 )
  {
    EtwpCancelMemoryPreservation(P);
    RtlFreeUnicodeString(v9 + 1);
    ExFreePoolWithTag(v9, 0);
    *((_QWORD *)P + 136) = 0LL;
  }
  EtwpFreeTraceBufferPool(P);
  v10 = KeNumberProcessors_0;
  for ( i = 0; i < v10; *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8 * v5) = 0LL )
  {
    v12 = *((_QWORD *)P + 137);
    if ( v12 == EtwpHostSiloState )
      v13 = *(_QWORD *)(KeGetPrcb(i) + 34472) + 320LL;
    else
      v13 = *(_QWORD *)(v12 + 4144) + ((unsigned __int64)i << 6);
    ++i;
  }
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 152));
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 168));
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 184));
  RtlFreeUnicodeString((PUNICODE_STRING)P + 23);
  if ( *((_QWORD *)P + 90) )
    SeDeleteClientSecurity(P + 704);
  v14 = (void *)*((_QWORD *)P + 97);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  v15 = _InterlockedExchange64((volatile __int64 *)P + 98, 0LL);
  ObDereferenceSecurityDescriptor(v15 & 0xFFFFFFFFFFFFFFF0uLL, (unsigned int)(v15 & 0xF) + 1);
  EtwpFreeStackWalkApcs((__int64)P);
  v18 = *((_DWORD *)P + 204);
  if ( (v18 & 0x80u) != 0 )
  {
    ExFreePoolWithTag(*((PVOID *)P + 125), 0);
    v18 = *((_DWORD *)P + 204);
  }
  if ( (v18 & 0x2000) != 0 )
  {
    _InterlockedDecrement(&dword_140C5A6C0);
    v18 = *((_DWORD *)P + 204);
  }
  if ( (v18 & 0x1000000) != 0 )
    EtwpFreeStackCache(*((PVOID *)P + 126));
  if ( (*((_DWORD *)P + 3) & 0x2000000) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(v1 + 4248), (unsigned __int8)P[818]);
  if ( *((_QWORD *)P + 127) )
  {
    v19 = (PVOID *)*((_QWORD *)P + 127);
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v20 = v19 + 3;
      v21 = (unsigned int)KeNumberProcessors_0;
      do
      {
        if ( *v20 )
          off_140C01E30[0]();
        ++v20;
        --v21;
      }
      while ( v21 );
    }
    if ( *v19 )
      ExFreePoolWithTag(*v19, 0);
    ExFreePoolWithTag(v19, 0);
  }
  v22 = (_DWORD *)*((_QWORD *)P + 128);
  if ( v22 )
  {
    if ( (*((_DWORD *)P + 204) & 0x8000) == 0
      || (_InterlockedDecrement(&dword_140C5A6A0), (v22 = (_DWORD *)*((_QWORD *)P + 128)) != 0LL) )
    {
      if ( *v22 )
      {
        ((void (__fastcall *)(_QWORD))off_140C02008[0])((unsigned int)*v22);
        v22 = (_DWORD *)*((_QWORD *)P + 128);
      }
      ExFreePoolWithTag(v22, 0);
      *((_QWORD *)P + 128) = 0LL;
    }
  }
  v23 = (_QWORD *)*((_QWORD *)P + 129);
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
    *((_QWORD *)P + 129) = 0LL;
  }
  v24 = (void *)*((_QWORD *)P + 161);
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
  v25 = (char *)*((_QWORD *)P + 12);
  while ( v25 != P + 96 )
  {
    v26 = v25;
    v25 = *(char **)v25;
    ExFreePoolWithTag(v26, 0);
  }
  v27 = (char *)*((_QWORD *)P + 130);
  while ( v27 != P + 1040 )
  {
    v28 = v27;
    v27 = *(char **)v27;
    ExFreePoolWithTag(v28, 0);
  }
  while ( *((_QWORD *)P + 14) )
  {
    v29 = (_QWORD *)*((_QWORD *)P + 14);
    *((_QWORD *)P + 14) = *v29;
    ExFreePoolWithTag(v29, 0);
  }
  EtwpClearPartitionContext((__int64 *)P + 165, v16, v17);
  v30 = (void *)*((_QWORD *)P + 166);
  if ( v30 )
    ExFreePoolWithTag(v30, 0);
  ExReInitializeRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v5));
  *(_QWORD *)(*(_QWORD *)(v1 + 456) + 8 * v5) = 1LL;
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement((volatile signed __int32 *)(v1 + 4132));
}
