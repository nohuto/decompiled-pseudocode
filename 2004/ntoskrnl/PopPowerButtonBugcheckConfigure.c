/*
 * XREFs of PopPowerButtonBugcheckConfigure @ 0x14077F148
 * Callers:
 *     PopPowerButtonBugcheckWatchCallback @ 0x1408EEDD0 (PopPowerButtonBugcheckWatchCallback.c)
 *     PopInitializePowerButtonHold @ 0x140A3C87C (PopInitializePowerButtonHold.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     PopQueryPowerButtonBugcheckConfiguration @ 0x1403A64D0 (PopQueryPowerButtonBugcheckConfiguration.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1403F58E0 (ZwNotifyChangeKey.c)
 */

NTSTATUS __fastcall PopPowerButtonBugcheckConfigure(HANDLE KeyHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v3; // si
  char v4; // bl
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF
  int v7; // [rsp+88h] [rbp+10h] BYREF

  v7 = 0;
  IoStatusBlock = 0LL;
  v3 = ZwNotifyChangeKey(
         KeyHandle,
         0LL,
         PopPowerButtonBugcheckWatchWorkItem,
         (PVOID)1,
         &IoStatusBlock,
         4u,
         0,
         0LL,
         0,
         1u) < 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPowerButtonBugcheckLock, 0LL);
  if ( PopQueryPowerButtonBugcheckConfiguration(KeyHandle, &v7) >= 0 )
    PopPowerButtonBugcheckConfig = (v7 != 0) + 1;
  else
    PopPowerButtonBugcheckConfig = 0;
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopPowerButtonBugcheckLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopPowerButtonBugcheckLock);
  KeAbPostRelease((ULONG_PTR)&PopPowerButtonBugcheckLock);
  result = (unsigned int)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v3 )
    return ZwClose(KeyHandle);
  return result;
}
