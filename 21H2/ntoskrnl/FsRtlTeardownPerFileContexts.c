/*
 * XREFs of FsRtlTeardownPerFileContexts @ 0x1405F66C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlTeardownPerFileContexts(PVOID *PerFileContextPointer)
{
  __int64 **v1; // rbx
  __int64 **v2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  v1 = (__int64 **)_InterlockedExchange64((volatile __int64 *)PerFileContextPointer, 0LL);
  if ( v1 )
  {
    v2 = v1 + 1;
    if ( *v2 != (__int64 *)v2 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
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
        ExReleasePushLockEx((ULONG_PTR)v1, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
        ((void (__fastcall *)(__int64 *))v4[4])(v4);
        v9 = KeGetCurrentThread();
        --v9->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
      }
      ExReleasePushLockEx((ULONG_PTR)v1, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
    }
    ExFreePoolWithTag(v1, 0x63665346u);
  }
}
