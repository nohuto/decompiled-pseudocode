/*
 * XREFs of FsRtlInsertPerStreamContext @ 0x1402F8CF0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExpAeUpdateStatsForExclusiveRelease @ 0x1402F95EC (ExpAeUpdateStatsForExclusiveRelease.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14039F0DC (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14039F294 (ExpAcquireFannedOutPushLockExclusive.c)
 */

NTSTATUS __stdcall FsRtlInsertPerStreamContext(
        PFSRTL_ADVANCED_FCB_HEADER PerStreamContext,
        PFSRTL_PER_STREAM_CONTEXT Ptr)
{
  unsigned __int8 v4; // al
  __int64 AePushLock; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v7; // rbp
  __int64 v8; // rsi
  unsigned int AbEntrySummary; // eax
  __int64 v10; // rcx
  int SessionId; // eax
  int v12; // eax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *p_FilterContexts; // rax
  unsigned __int8 v15; // al
  _DWORD *v16; // rdi
  int v17; // eax
  struct _KTHREAD *v19; // rax
  int v20; // [rsp+50h] [rbp+8h] BYREF
  int v21; // [rsp+60h] [rbp+18h]

  if ( PerStreamContext && (PerStreamContext->Flags2 & 2) != 0 )
  {
    v4 = *((_BYTE *)PerStreamContext + 7) >> 4;
    if ( v4 < 3u )
    {
      if ( !v4 )
      {
        ExAcquireFastMutex(PerStreamContext->FastMutex);
        goto LABEL_15;
      }
    }
    else
    {
      AePushLock = (__int64)PerStreamContext->AePushLock;
      if ( AePushLock )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v7 = KeGetCurrentThread();
        v8 = 0LL;
        v21 = 0;
        _disable();
        AbEntrySummary = v7->AbEntrySummary;
        if ( v7->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(AePushLock, (__int64)v7)) != 0 )
        {
          _BitScanForward((unsigned int *)&v10, AbEntrySummary);
          v21 = v10;
          v7->AbEntrySummary = AbEntrySummary & ~(1 << v10);
          _enable();
          v8 = (__int64)(&v7[1].Process + 12 * v10);
          if ( (unsigned __int64)(AePushLock - qword_140C50630) < 0x8000000000LL )
            SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
          else
            SessionId = -1;
          *(_DWORD *)(v8 + 8) = SessionId;
          *(_QWORD *)v8 = AePushLock & 0x7FFFFFFFFFFFFFFCLL;
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)AePushLock, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)AePushLock, v8, AePushLock);
        v12 = *(_DWORD *)(AePushLock + 8);
        if ( (v12 & 1) != 0 )
          ExpAcquireFannedOutPushLockExclusive(v12 & 0xFFFFFFF8, v8, AePushLock);
        if ( v8 )
          *(_BYTE *)(v8 + 18) = 1;
LABEL_15:
        Flink = PerStreamContext->FilterContexts.Flink;
        p_FilterContexts = &PerStreamContext->FilterContexts;
        if ( Flink->Blink != &PerStreamContext->FilterContexts )
          __fastfail(3u);
        Ptr->Links.Blink = p_FilterContexts;
        Ptr->Links.Flink = Flink;
        Flink->Blink = &Ptr->Links;
        p_FilterContexts->Flink = &Ptr->Links;
        v15 = *((_BYTE *)PerStreamContext + 7) >> 4;
        if ( v15 < 3u )
        {
          if ( !v15 )
          {
            KeReleaseGuardedMutex(PerStreamContext->FastMutex);
            return 0;
          }
        }
        else
        {
          v16 = PerStreamContext->AePushLock;
          if ( v16 )
          {
            v17 = v16[2];
            if ( (v17 & 1) != 0 )
            {
              ExpReleaseFannedOutPushLockExclusive(v17 & 0xFFFFFFF8);
            }
            else
            {
              v20 = v16[3];
              if ( (unsigned __int8)ExpAeUpdateStatsForExclusiveRelease(&v20) )
                v16[3] = v20;
            }
            ExReleasePushLockEx((ULONG_PTR)v16, 2uLL);
            KeAbPostRelease((ULONG_PTR)v16);
            KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
            return 0;
          }
        }
        ExReleasePushLockEx((ULONG_PTR)&PerStreamContext->PushLock, 0LL);
        KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
        return 0;
      }
    }
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PerStreamContext->PushLock, 0LL);
    goto LABEL_15;
  }
  return -1073741808;
}
