/*
 * XREFs of PopAcquireAdaptiveLock @ 0x140671E84
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1405D8DC4 (PopSessionWinlogonNotification.c)
 *     PopSessionInputChange @ 0x140671C64 (PopSessionInputChange.c)
 *     PopSetDisplayStatus @ 0x14077AA3C (PopSetDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x14078DAEC (PopSessionConnectionChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x140792510 (PopAdaptivePowerSettingCallback.c)
 *     PopActiveLockScreenPowerRequest @ 0x1408F5090 (PopActiveLockScreenPowerRequest.c)
 *     PopIsLockConsoleTimeoutActive @ 0x1408F52EC (PopIsLockConsoleTimeoutActive.c)
 *     PopUserPresentOverride @ 0x1408F54E0 (PopUserPresentOverride.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x140672828 (PoBlockConsoleSwitch.c)
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
    qword_140C20570 = 0LL;
  }
  return result;
}
