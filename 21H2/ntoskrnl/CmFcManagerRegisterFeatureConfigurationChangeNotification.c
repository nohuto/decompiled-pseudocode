/*
 * XREFs of CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14087DB3C
 * Callers:
 *     CmFcRegisterFeatureConfigurationChangeNotification @ 0x14086B160 (CmFcRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     MiGetPfnLink @ 0x1402D2F30 (MiGetPfnLink.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     CmFcpWorkItemQueueWork @ 0x1404ED9CC (CmFcpWorkItemQueueWork.c)
 *     CmFcpManagerAllocateChangeSubscription @ 0x14087E4E0 (CmFcpManagerAllocateChangeSubscription.c)
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
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C48310, 0LL);
    v9 = (__int64 *)qword_140C48320;
    if ( *(__int64 **)qword_140C48320 != &qword_140C48318 )
      __fastfail(3u);
    *(_QWORD *)v7 = &qword_140C48318;
    *(_QWORD *)(v7 + 8) = v9;
    *v9 = v7;
    qword_140C48320 = v7;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C48310, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&stru_140C48310);
    KeAbPostRelease((ULONG_PTR)&stru_140C48310);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( a4 && MiGetPfnLink((__int64)&qword_140C480F8) != *a4 )
      CmFcpWorkItemQueueWork((PWORK_QUEUE_ITEM)(v7 + 16));
    *a5 = v7;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
