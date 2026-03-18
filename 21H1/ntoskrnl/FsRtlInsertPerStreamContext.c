/*
 * XREFs of FsRtlInsertPerStreamContext @ 0x1402F6E60
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 */

NTSTATUS __stdcall FsRtlInsertPerStreamContext(
        PFSRTL_ADVANCED_FCB_HEADER PerStreamContext,
        PFSRTL_PER_STREAM_CONTEXT Ptr)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *p_FilterContexts; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  if ( !PerStreamContext || (PerStreamContext->Flags2 & 2) == 0 )
    return -1073741808;
  if ( (*((_BYTE *)PerStreamContext + 7) & 0xF0u) < 0x10 )
  {
    ExAcquireFastMutex(PerStreamContext->FastMutex);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PerStreamContext->PushLock, 0LL);
  }
  p_FilterContexts = &PerStreamContext->FilterContexts;
  Flink = PerStreamContext->FilterContexts.Flink;
  if ( Flink->Blink != &PerStreamContext->FilterContexts )
    __fastfail(3u);
  Ptr->Links.Blink = p_FilterContexts;
  Ptr->Links.Flink = Flink;
  Flink->Blink = &Ptr->Links;
  p_FilterContexts->Flink = &Ptr->Links;
  if ( (*((_BYTE *)PerStreamContext + 7) & 0xF0u) < 0x10 )
  {
    KeReleaseGuardedMutex(PerStreamContext->FastMutex);
  }
  else
  {
    ExReleasePushLockEx((ULONG_PTR)&PerStreamContext->PushLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
  }
  return 0;
}
