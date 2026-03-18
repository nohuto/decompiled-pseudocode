/*
 * XREFs of FsRtlTeardownPerStreamContexts @ 0x1406B95D0
 * Callers:
 *     RawCleanupVcb @ 0x1406B954C (RawCleanupVcb.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

void __stdcall FsRtlTeardownPerStreamContexts(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  _LIST_ENTRY *p_FilterContexts; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

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
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
      }
      ((void (__fastcall *)(struct _LIST_ENTRY *))Flink[2].Flink)(Flink);
      if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
      {
        ExAcquireFastMutex(AdvancedHeader->FastMutex);
      }
      else
      {
        v9 = KeGetCurrentThread();
        --v9->KernelApcDisable;
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
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
    }
  }
}
