/*
 * XREFs of FsRtlLookupPerStreamContextInternal @ 0x1402AE630
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockSharedEx @ 0x14021C64C (ExfReleasePushLockSharedEx.c)
 *     ExpAcquireFannedOutPushLockShared @ 0x14023642C (ExpAcquireFannedOutPushLockShared.c)
 *     ExpTryExpandAutoExpandPushLock @ 0x140259E60 (ExpTryExpandAutoExpandPushLock.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029F350 (ExfAcquirePushLockSharedEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

PFSRTL_PER_STREAM_CONTEXT __stdcall FsRtlLookupPerStreamContextInternal(
        PFSRTL_ADVANCED_FCB_HEADER StreamContext,
        PVOID OwnerId,
        PVOID InstanceId)
{
  unsigned __int8 v4; // al
  __int64 AePushLock; // rdi
  struct _KTHREAD *v8; // rax
  struct _KTHREAD *v9; // r14
  __int64 v10; // rsi
  unsigned int AbEntrySummary; // eax
  __int64 v12; // rdx
  int SessionId; // eax
  int v14; // eax
  __int64 v15; // rdi
  struct _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *p_FilterContexts; // rcx
  struct _FSRTL_PER_STREAM_CONTEXT *v18; // rsi
  unsigned __int8 v19; // al
  unsigned __int64 v20; // rbx
  unsigned int v21; // edi
  struct _KTHREAD *v22; // rdx
  bool v23; // zf
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v26; // eax
  unsigned int v27; // edi
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // [rsp+88h] [rbp+20h] BYREF

  v4 = *((_BYTE *)StreamContext + 7) >> 4;
  if ( v4 < 3u )
  {
    if ( !v4 )
    {
      ExAcquireFastMutex(StreamContext->FastMutex);
      goto LABEL_32;
    }
LABEL_31:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&StreamContext->PushLock, 0LL);
LABEL_32:
    v15 = 0LL;
    goto LABEL_13;
  }
  AePushLock = (__int64)StreamContext->AePushLock;
  if ( !AePushLock )
    goto LABEL_31;
  v8 = KeGetCurrentThread();
  --v8->KernelApcDisable;
  v9 = KeGetCurrentThread();
  v10 = 0LL;
  _disable();
  AbEntrySummary = v9->AbEntrySummary;
  if ( v9->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(AePushLock, (__int64)v9)) != 0 )
  {
    _BitScanForward((unsigned int *)&v12, AbEntrySummary);
    v9->AbEntrySummary = AbEntrySummary & ~(1 << v12);
    _enable();
    v10 = (__int64)(&v9[1].Process + 12 * v12);
    if ( (unsigned __int64)(AePushLock - qword_140C50630) < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v9->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v10 + 8) = SessionId;
    *(_QWORD *)v10 = AePushLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  v14 = *(_DWORD *)(AePushLock + 8);
  if ( (v14 & 1) != 0 )
  {
    v15 = (__int64)ExpAcquireFannedOutPushLockShared(v14 & 0xFFFFFFF8, 0, v10, AePushLock);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)AePushLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)AePushLock, 0, v10, AePushLock);
    v15 = AePushLock | 1;
  }
  if ( v10 )
    *(_BYTE *)(v10 + 18) = 1;
LABEL_13:
  Flink = StreamContext->FilterContexts.Flink;
  p_FilterContexts = &StreamContext->FilterContexts;
  v18 = 0LL;
  if ( InstanceId )
  {
    if ( Flink != p_FilterContexts )
    {
      while ( Flink[1].Flink != OwnerId || Flink[1].Blink != InstanceId )
      {
        Flink = Flink->Flink;
        if ( Flink == p_FilterContexts )
          goto LABEL_18;
      }
LABEL_17:
      v18 = (struct _FSRTL_PER_STREAM_CONTEXT *)Flink;
    }
  }
  else
  {
    if ( OwnerId )
    {
      if ( Flink == p_FilterContexts )
        goto LABEL_18;
      while ( Flink[1].Flink != OwnerId )
      {
        Flink = Flink->Flink;
        if ( Flink == p_FilterContexts )
          goto LABEL_18;
      }
      goto LABEL_17;
    }
    if ( Flink != p_FilterContexts )
      v18 = (struct _FSRTL_PER_STREAM_CONTEXT *)StreamContext->FilterContexts.Flink;
  }
LABEL_18:
  v19 = *((_BYTE *)StreamContext + 7) >> 4;
  if ( v19 < 3u )
  {
    if ( !v19 )
    {
      KeReleaseGuardedMutex(StreamContext->FastMutex);
      return v18;
    }
  }
  else if ( StreamContext->AePushLock )
  {
    v29 = 0LL;
    v20 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v15 & 1) != 0 )
    {
      _m_prefetchw((const void *)(v20 + 12));
      v21 = *(_DWORD *)(v20 + 12);
      if ( v21 >= 0x80000000 && (*(_DWORD *)(v20 + 8) & 3) == 0 )
      {
        if ( (unsigned __int16)v21 < (unsigned int)ExpAeCycleCountThreshold
          || (v21 & 0xF0000) >= 0xF0000
          || KeGetCurrentIrql() >= 2u )
        {
          v21 = (v21 >> 2) & 0x3FF33FFF;
          *(_DWORD *)(v20 + 12) = v21;
        }
        else
        {
          ExpTryExpandAutoExpandPushLock(v20);
        }
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20, 0LL, 17LL) == 17 )
      {
LABEL_23:
        if ( v21 < 0x80000000 )
          *(_DWORD *)(v20 + 12) = v21 + 0x100000;
        goto LABEL_25;
      }
      if ( (v21 & ExpAeSamplingPeriodMask) == 0 )
      {
        ExfReleasePushLockSharedEx((signed __int64 *)v20, &v29);
        if ( !v29 )
          goto LABEL_25;
        v27 = *(_DWORD *)(v20 + 12);
        if ( v27 >= 0x80000000 )
          goto LABEL_25;
        v28 = v29 >> ExpAeCycleCountScaler;
        if ( v29 >> ExpAeCycleCountScaler > 0x1FF )
          LODWORD(v28) = 511;
        v21 = v28 + v27;
        goto LABEL_23;
      }
      ExfReleasePushLockSharedEx((signed __int64 *)v20, 0LL);
      v26 = *(_DWORD *)(v20 + 12);
      if ( v26 < 0x80000000 )
        *(_DWORD *)(v20 + 12) = v26 + 0x100000;
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v15 & 0xFFFFFFFFFFFFFFFCuLL);
      v20 = *(_QWORD *)(v20 + 8);
    }
LABEL_25:
    KeAbPostRelease(v20);
    v22 = KeGetCurrentThread();
    v23 = v22->KernelApcDisable++ == -1;
    if ( v23
      && ($CEA84C04E3712D858E5667A507841A2A *)v22->ApcState.ApcListHead[0].Flink != &v22->152
      && !v22->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
      return v18;
    }
    return v18;
  }
  ExReleasePushLockEx((ULONG_PTR)&StreamContext->PushLock, 0LL);
  KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
  return v18;
}
