/*
 * XREFs of FsRtlTeardownPerStreamContexts @ 0x1405D8390
 * Callers:
 *     RawCleanupVcb @ 0x1405D8310 (RawCleanupVcb.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

void __stdcall FsRtlTeardownPerStreamContexts(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  _LIST_ENTRY *p_FilterContexts; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *v5; // rax
  struct _KTHREAD *v6; // rax

  p_FilterContexts = &AdvancedHeader->FilterContexts;
  if ( p_FilterContexts->Flink != p_FilterContexts )
  {
    if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
    {
      ExAcquireFastMutex(AdvancedHeader->FastMutex);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&AdvancedHeader->PushLock, 0LL);
    }
    while ( 1 )
    {
      Flink = p_FilterContexts->Flink;
      if ( p_FilterContexts->Flink == p_FilterContexts )
        break;
      v5 = Flink->Flink;
      if ( Flink->Blink != p_FilterContexts || v5->Blink != Flink )
        __fastfail(3u);
      p_FilterContexts->Flink = v5;
      v5->Blink = p_FilterContexts;
      if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
      {
        KeReleaseGuardedMutex(AdvancedHeader->FastMutex);
      }
      else
      {
        ExReleasePushLockEx((ULONG_PTR)&AdvancedHeader->PushLock, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      ((void (__fastcall *)(struct _LIST_ENTRY *))Flink[2].Flink)(Flink);
      if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
      {
        ExAcquireFastMutex(AdvancedHeader->FastMutex);
      }
      else
      {
        v6 = KeGetCurrentThread();
        --v6->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&AdvancedHeader->PushLock, 0LL);
      }
    }
    if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
    {
      KeReleaseGuardedMutex(AdvancedHeader->FastMutex);
    }
    else
    {
      ExReleasePushLockEx((ULONG_PTR)&AdvancedHeader->PushLock, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
}
