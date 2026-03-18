/*
 * XREFs of PopAcquireAdaptiveLock @ 0x1407EF098
 * Callers:
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 *     PopSessionConnectionChange @ 0x1407ED88C (PopSessionConnectionChange.c)
 *     PopSetDisplayStatus @ 0x140809408 (PopSetDisplayStatus.c)
 *     PopIsLockConsoleTimeoutActive @ 0x14080A454 (PopIsLockConsoleTimeoutActive.c)
 *     PopSystemIdleEventHandler @ 0x14080C220 (PopSystemIdleEventHandler.c)
 *     PopUpdateSystemIdleContext @ 0x140819D40 (PopUpdateSystemIdleContext.c)
 *     PopAdaptivePowerSettingCallback @ 0x140828BC0 (PopAdaptivePowerSettingCallback.c)
 *     PopActiveLockScreenPowerRequest @ 0x14099C730 (PopActiveLockScreenPowerRequest.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x14099C8F8 (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x14099CAD0 (PopAdaptiveSetSystemInitiatedRebootTargetStateOverride.c)
 *     PopAdaptiveWnfCallback @ 0x14099CB50 (PopAdaptiveWnfCallback.c)
 *     PopSessionWinlogonNotification @ 0x14099CBC8 (PopSessionWinlogonNotification.c)
 *     PopUserPresentOverride @ 0x14099CCC4 (PopUserPresentOverride.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x1407FE7DC (PoBlockConsoleSwitch.c)
 */

struct _KTHREAD *__fastcall PopAcquireAdaptiveLock(char a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax
  int v4; // edi
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h]

  v7 = 0LL;
  v6 = 0LL;
  if ( !a1 )
  {
    v4 = PoBlockConsoleSwitch(&v6);
    Interval.QuadPart = -100000LL;
    while ( v4 != dword_140C1F3B8 )
      KeDelayExecutionThread(0, 0, &Interval);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  result = KeGetCurrentThread();
  PopAdpmLockThread = (__int64)result;
  PopAdaptiveContext = a1 == 0;
  return result;
}
