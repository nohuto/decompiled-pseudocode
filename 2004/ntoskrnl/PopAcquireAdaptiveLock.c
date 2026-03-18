/*
 * XREFs of PopAcquireAdaptiveLock @ 0x140712000
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1405CF974 (PopSessionWinlogonNotification.c)
 *     PopSessionInputChange @ 0x140711DE0 (PopSessionInputChange.c)
 *     PopSetDisplayStatus @ 0x1407682C0 (PopSetDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x14077B54C (PopSessionConnectionChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x140783E00 (PopAdaptivePowerSettingCallback.c)
 *     PopActiveLockScreenPowerRequest @ 0x1408F1B40 (PopActiveLockScreenPowerRequest.c)
 *     PopIsLockConsoleTimeoutActive @ 0x1408F1D9C (PopIsLockConsoleTimeoutActive.c)
 *     PopUserPresentOverride @ 0x1408F1F90 (PopUserPresentOverride.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x140712794 (PoBlockConsoleSwitch.c)
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
    qword_140C20390 = 0LL;
  }
  return result;
}
