/*
 * XREFs of CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14087DC9C
 * Callers:
 *     CmFcRegisterFeatureConfigurationChangeNotification @ 0x14086B2C0 (CmFcRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     MiGetPfnLink @ 0x1402514D0 (MiGetPfnLink.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     CmFcpWorkItemQueueWork @ 0x1404EDC0C (CmFcpWorkItemQueueWork.c)
 *     CmFcpManagerAllocateChangeSubscription @ 0x14087E640 (CmFcpManagerAllocateChangeSubscription.c)
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
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C48370, 0LL);
    v9 = (__int64 *)qword_140C48380;
    if ( *(__int64 **)qword_140C48380 != &qword_140C48378 )
      __fastfail(3u);
    *(_QWORD *)v7 = &qword_140C48378;
    *(_QWORD *)(v7 + 8) = v9;
    *v9 = v7;
    qword_140C48380 = v7;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C48370, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&stru_140C48370);
    KeAbPostRelease((ULONG_PTR)&stru_140C48370);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
    if ( a4 && MiGetPfnLink((__int64)&qword_140C48158) != *a4 )
      CmFcpWorkItemQueueWork((PWORK_QUEUE_ITEM)(v7 + 16));
    *a5 = v7;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
