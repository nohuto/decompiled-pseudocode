/*
 * XREFs of CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x14087A724
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x14090CE80 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ExRundownCompleted @ 0x14027BE20 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402FA0C0 (ExWaitForRundownProtectionRelease.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall CmFcManagerUnregisterFeatureConfigurationChangeNotification(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 Count; // rdx
  struct _EX_RUNDOWN_REF **v5; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C48170, 0LL);
  Count = a2->Count;
  if ( *(struct _EX_RUNDOWN_REF **)(a2->Count + 8) != a2 || (v5 = (struct _EX_RUNDOWN_REF **)a2[1].Count, *v5 != a2) )
    __fastfail(3u);
  *v5 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v5;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C48170, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C48170);
  KeAbPostRelease((ULONG_PTR)&stru_140C48170);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExWaitForRundownProtectionRelease(a2 + 6);
  ExRundownCompleted(a2 + 6);
  if ( a2 < (struct _EX_RUNDOWN_REF *)&unk_140C48188
    || a2 >= (struct _EX_RUNDOWN_REF *)&CmFcFeatureConfigSecurityDescriptor )
  {
    ExFreePoolWithTag(a2, 0);
  }
}
