/*
 * XREFs of CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14087A62C
 * Callers:
 *     CmFcRegisterFeatureConfigurationChangeNotification @ 0x140867B10 (CmFcRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     MiGetPfnLink @ 0x140360050 (MiGetPfnLink.c)
 *     CmFcpWorkItemQueueWork @ 0x1404E885C (CmFcpWorkItemQueueWork.c)
 *     CmFcpManagerAllocateChangeSubscription @ 0x14087AFD0 (CmFcpManagerAllocateChangeSubscription.c)
 */

__int64 __fastcall CmFcManagerRegisterFeatureConfigurationChangeNotification(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 *a5)
{
  unsigned int v6; // esi
  __int64 v7; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v9; // rax

  v6 = 0;
  v7 = CmFcpManagerAllocateChangeSubscription();
  if ( v7 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C48170, 0LL);
    v9 = (__int64 *)qword_140C48180;
    if ( *(__int64 **)qword_140C48180 != &qword_140C48178 )
      __fastfail(3u);
    *(_QWORD *)v7 = &qword_140C48178;
    *(_QWORD *)(v7 + 8) = v9;
    *v9 = v7;
    qword_140C48180 = v7;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C48170, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C48170);
    KeAbPostRelease((ULONG_PTR)&stru_140C48170);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( a4 && MiGetPfnLink((__int64)&qword_140C47F58) != *a4 )
      CmFcpWorkItemQueueWork((PWORK_QUEUE_ITEM)(v7 + 16));
    *a5 = v7;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
