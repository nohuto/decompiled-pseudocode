/*
 * XREFs of CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14088019C
 * Callers:
 *     CmFcRegisterFeatureConfigurationChangeNotification @ 0x14086D530 (CmFcRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiGetPfnLink @ 0x140330EE0 (MiGetPfnLink.c)
 *     CmFcpWorkItemQueueWork @ 0x1404EC0EC (CmFcpWorkItemQueueWork.c)
 *     CmFcpManagerAllocateChangeSubscription @ 0x140880B40 (CmFcpManagerAllocateChangeSubscription.c)
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
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C481D0, 0LL);
    v9 = (__int64 *)qword_140C481E0;
    if ( *(__int64 **)qword_140C481E0 != &qword_140C481D8 )
      __fastfail(3u);
    *(_QWORD *)v7 = &qword_140C481D8;
    *(_QWORD *)(v7 + 8) = v9;
    *v9 = v7;
    qword_140C481E0 = v7;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C481D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C481D0);
    KeAbPostRelease((ULONG_PTR)&stru_140C481D0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( a4 && MiGetPfnLink((__int64)&qword_140C47FB8) != *a4 )
      CmFcpWorkItemQueueWork((PWORK_QUEUE_ITEM)(v7 + 16));
    *a5 = v7;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
