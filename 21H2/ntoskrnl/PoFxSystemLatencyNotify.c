/*
 * XREFs of PoFxSystemLatencyNotify @ 0x140224D54
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x140224C34 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

bool __fastcall PoFxSystemLatencyNotify(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v3; // di
  ULONG_PTR i; // rbx
  unsigned __int8 (__fastcall *v6)(__int64, __int64 *); // rax
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxPluginLock, 0LL);
  for ( i = PopFxPluginList; (ULONG_PTR *)i != &PopFxPluginList; i = *(_QWORD *)i )
  {
    v6 = *(unsigned __int8 (__fastcall **)(__int64, __int64 *))(i + 96);
    if ( v6 )
    {
      v7 = a1;
      if ( v6(16LL, &v7) )
      {
        if ( !v3 )
          v3 = *(_DWORD *)(i + 24) >= 0;
      }
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&PopFxPluginLock);
  KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
  KeLeaveCriticalRegion();
  return v3;
}
