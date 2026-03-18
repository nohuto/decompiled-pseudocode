/*
 * XREFs of CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14087933C
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1409149F0 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiGetPfnLink @ 0x140322740 (MiGetPfnLink.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     CmFcpWorkItemQueueWork @ 0x1404E822C (CmFcpWorkItemQueueWork.c)
 *     CmFcpManagerAllocateChangeSubscription @ 0x140879CE0 (CmFcpManagerAllocateChangeSubscription.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  v6 = 0;
  v7 = CmFcpManagerAllocateChangeSubscription();
  if ( v7 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C482F0, 0LL);
    v9 = (__int64 *)qword_140C48300;
    if ( *(__int64 **)qword_140C48300 != &qword_140C482F8 )
      __fastfail(3u);
    *(_QWORD *)v7 = &qword_140C482F8;
    *(_QWORD *)(v7 + 8) = v9;
    *v9 = v7;
    qword_140C48300 = v7;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C482F0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&stru_140C482F0);
    KeAbPostRelease((ULONG_PTR)&stru_140C482F0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
    if ( a4 && MiGetPfnLink((__int64)&qword_140C480D8) != *a4 )
      CmFcpWorkItemQueueWork((PWORK_QUEUE_ITEM)(v7 + 16));
    *a5 = v7;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
