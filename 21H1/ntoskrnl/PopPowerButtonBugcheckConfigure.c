/*
 * XREFs of PopPowerButtonBugcheckConfigure @ 0x14077F958
 * Callers:
 *     PopPowerButtonBugcheckWatchCallback @ 0x1408EDAE0 (PopPowerButtonBugcheckWatchCallback.c)
 *     PopInitializePowerButtonHold @ 0x140A3CC24 (PopInitializePowerButtonHold.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     PopQueryPowerButtonBugcheckConfiguration @ 0x1403AA1A0 (PopQueryPowerButtonBugcheckConfiguration.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1403F4650 (ZwNotifyChangeKey.c)
 */

NTSTATUS __fastcall PopPowerButtonBugcheckConfigure(HANDLE KeyHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v3; // si
  char v4; // bl
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF
  int v10; // [rsp+88h] [rbp+10h] BYREF

  v10 = 0;
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
  if ( PopQueryPowerButtonBugcheckConfiguration(KeyHandle, &v10) >= 0 )
    PopPowerButtonBugcheckConfig = (v10 != 0) + 1;
  else
    PopPowerButtonBugcheckConfig = 0;
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopPowerButtonBugcheckLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock(&PopPowerButtonBugcheckLock);
  KeAbPostRelease((ULONG_PTR)&PopPowerButtonBugcheckLock);
  result = (unsigned int)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
  if ( v3 )
    return ZwClose(KeyHandle);
  return result;
}
