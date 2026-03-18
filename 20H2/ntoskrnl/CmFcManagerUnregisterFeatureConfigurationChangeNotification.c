/*
 * XREFs of CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x140880294
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x14091B8B0 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExRundownCompleted @ 0x14023D900 (ExRundownCompleted.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402D5F70 (ExWaitForRundownProtectionRelease.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall CmFcManagerUnregisterFeatureConfigurationChangeNotification(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 Count; // rdx
  struct _EX_RUNDOWN_REF **v5; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C481D0, 0LL);
  Count = a2->Count;
  if ( *(struct _EX_RUNDOWN_REF **)(a2->Count + 8) != a2 || (v5 = (struct _EX_RUNDOWN_REF **)a2[1].Count, *v5 != a2) )
    __fastfail(3u);
  *v5 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v5;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C481D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C481D0);
  KeAbPostRelease((ULONG_PTR)&stru_140C481D0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExWaitForRundownProtectionRelease(a2 + 6);
  ExRundownCompleted(a2 + 6);
  if ( a2 < (struct _EX_RUNDOWN_REF *)&unk_140C481E8
    || a2 >= (struct _EX_RUNDOWN_REF *)&CmFcFeatureConfigSecurityDescriptor )
  {
    ExFreePoolWithTag(a2, 0);
  }
}
