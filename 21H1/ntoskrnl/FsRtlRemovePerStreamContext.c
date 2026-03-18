/*
 * XREFs of FsRtlRemovePerStreamContext @ 0x1404EBAA0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 */

PFSRTL_PER_STREAM_CONTEXT __stdcall FsRtlRemovePerStreamContext(
        PFSRTL_ADVANCED_FCB_HEADER StreamContext,
        PVOID OwnerId,
        PVOID InstanceId)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _FSRTL_PER_STREAM_CONTEXT *v7; // rbx
  _LIST_ENTRY *p_FilterContexts; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v10; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  if ( !StreamContext || (StreamContext->Flags2 & 2) == 0 )
    return 0LL;
  if ( (*((_BYTE *)StreamContext + 7) & 0xF0u) < 0x10 )
  {
    ExAcquireFastMutex(StreamContext->FastMutex);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&StreamContext->PushLock, 0LL);
  }
  v7 = 0LL;
  p_FilterContexts = &StreamContext->FilterContexts;
  Flink = StreamContext->FilterContexts.Flink;
  if ( InstanceId )
  {
    while ( Flink != p_FilterContexts )
    {
      if ( Flink[1].Flink == OwnerId && Flink[1].Blink == InstanceId )
        goto LABEL_9;
      Flink = Flink->Flink;
    }
  }
  else if ( OwnerId )
  {
    while ( Flink != p_FilterContexts )
    {
      if ( Flink[1].Flink == OwnerId )
        goto LABEL_9;
      Flink = Flink->Flink;
    }
  }
  else if ( Flink != p_FilterContexts )
  {
LABEL_9:
    v7 = (struct _FSRTL_PER_STREAM_CONTEXT *)Flink;
    if ( Flink )
    {
      v10 = Flink->Flink;
      if ( (struct _FSRTL_PER_STREAM_CONTEXT *)v10->Blink != v7
        || (Blink = v7->Links.Blink, (struct _FSRTL_PER_STREAM_CONTEXT *)Blink->Flink != v7) )
      {
        __fastfail(3u);
      }
      Blink->Flink = v10;
      v10->Blink = Blink;
    }
  }
  if ( (*((_BYTE *)StreamContext + 7) & 0xF0u) < 0x10 )
  {
    KeReleaseGuardedMutex(StreamContext->FastMutex);
  }
  else
  {
    ExReleasePushLockEx((ULONG_PTR)&StreamContext->PushLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
  }
  return v7;
}
