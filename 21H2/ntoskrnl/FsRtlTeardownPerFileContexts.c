/*
 * XREFs of FsRtlTeardownPerFileContexts @ 0x1406B41F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A3C30 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExCleanupAutoExpandPushLock @ 0x1402A3D50 (ExCleanupAutoExpandPushLock.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402AC890 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlTeardownPerFileContexts(PVOID *PerFileContextPointer)
{
  __int64 **v1; // rbx
  __int64 **v2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // rsi
  __int64 v5; // rax
  struct _KTHREAD *v6; // rax

  v1 = (__int64 **)_InterlockedExchange64((volatile __int64 *)PerFileContextPointer, 0LL);
  if ( v1 )
  {
    v2 = v1 + 2;
    if ( *v2 != (__int64 *)v2 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)v1, 0LL);
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 == (__int64 *)v2 )
          break;
        v5 = *v4;
        if ( (__int64 **)v4[1] != v2 || *(__int64 **)(v5 + 8) != v4 )
          __fastfail(3u);
        *v2 = (__int64 *)v5;
        *(_QWORD *)(v5 + 8) = v2;
        ExReleaseAutoExpandPushLockExclusive((ULONG_PTR)v1, 0LL);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ((void (__fastcall *)(__int64 *))v4[4])(v4);
        v6 = KeGetCurrentThread();
        --v6->KernelApcDisable;
        ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)v1, 0LL);
      }
      ExReleaseAutoExpandPushLockExclusive((ULONG_PTR)v1, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    ExCleanupAutoExpandPushLock((__int64)v1);
    ExFreePoolWithTag(v1, 0x63665346u);
  }
}
