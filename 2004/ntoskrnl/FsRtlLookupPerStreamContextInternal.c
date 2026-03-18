/*
 * XREFs of FsRtlLookupPerStreamContextInternal @ 0x1402070D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 */

PFSRTL_PER_STREAM_CONTEXT __stdcall FsRtlLookupPerStreamContextInternal(
        PFSRTL_ADVANCED_FCB_HEADER StreamContext,
        PVOID OwnerId,
        PVOID InstanceId)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *p_FilterContexts; // rcx
  struct _FSRTL_PER_STREAM_CONTEXT *v9; // rdi
  struct _KTHREAD *v10; // rdx
  bool v11; // zf

  if ( (*((_BYTE *)StreamContext + 7) & 0xF0u) < 0x10 )
  {
    ExAcquireFastMutex(StreamContext->FastMutex);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&StreamContext->PushLock, 0LL);
  }
  Flink = StreamContext->FilterContexts.Flink;
  p_FilterContexts = &StreamContext->FilterContexts;
  v9 = 0LL;
  if ( InstanceId )
  {
    if ( Flink != p_FilterContexts )
    {
      while ( Flink[1].Flink != OwnerId || Flink[1].Blink != InstanceId )
      {
        Flink = Flink->Flink;
        if ( Flink == p_FilterContexts )
          goto LABEL_8;
      }
LABEL_7:
      v9 = (struct _FSRTL_PER_STREAM_CONTEXT *)Flink;
    }
  }
  else
  {
    if ( OwnerId )
    {
      if ( Flink == p_FilterContexts )
        goto LABEL_8;
      while ( Flink[1].Flink != OwnerId )
      {
        Flink = Flink->Flink;
        if ( Flink == p_FilterContexts )
          goto LABEL_8;
      }
      goto LABEL_7;
    }
    if ( Flink != p_FilterContexts )
      v9 = (struct _FSRTL_PER_STREAM_CONTEXT *)StreamContext->FilterContexts.Flink;
  }
LABEL_8:
  if ( (*((_BYTE *)StreamContext + 7) & 0xF0u) < 0x10 )
  {
    KeReleaseGuardedMutex(StreamContext->FastMutex);
  }
  else
  {
    ExReleasePushLockEx((ULONG_PTR)&StreamContext->PushLock, 0LL);
    v10 = KeGetCurrentThread();
    v11 = v10->KernelApcDisable++ == -1;
    if ( v11
      && ($C774EFD68449142D8271B1EC1EB7FB26 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
      && !v10->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v9;
}
