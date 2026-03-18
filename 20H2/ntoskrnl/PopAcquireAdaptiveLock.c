/*
 * XREFs of PopAcquireAdaptiveLock @ 0x1407210F0
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1405D5E24 (PopSessionWinlogonNotification.c)
 *     PopSessionInputChange @ 0x140720ED0 (PopSessionInputChange.c)
 *     PopSetDisplayStatus @ 0x1407768CC (PopSetDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x140789B4C (PopSessionConnectionChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x1407917F0 (PopAdaptivePowerSettingCallback.c)
 *     PopActiveLockScreenPowerRequest @ 0x1408F7750 (PopActiveLockScreenPowerRequest.c)
 *     PopIsLockConsoleTimeoutActive @ 0x1408F79AC (PopIsLockConsoleTimeoutActive.c)
 *     PopUserPresentOverride @ 0x1408F7BA0 (PopUserPresentOverride.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x1407211BC (PoBlockConsoleSwitch.c)
 */

struct _KTHREAD *__fastcall PopAcquireAdaptiveLock(char a1)
{
  int v1; // ebx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h]

  v1 = -1;
  v7 = 0LL;
  v6 = 0LL;
  if ( !a1 )
  {
    v1 = PoBlockConsoleSwitch(&v6);
    Interval.QuadPart = -100000LL;
    while ( v1 != (_DWORD)PopConsoleContext )
      KeDelayExecutionThread(0, 0, &Interval);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  result = KeGetCurrentThread();
  PopAdpmLockThread = (__int64)result;
  if ( !a1 )
  {
    result = 0LL;
    PopLazyContext = 0LL;
    LOBYTE(PopLazyContext) = 1;
    DWORD1(PopLazyContext) = v1;
    qword_140C20410 = 0LL;
  }
  return result;
}
