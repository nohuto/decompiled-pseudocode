/*
 * XREFs of PopReleaseAdaptiveLock @ 0x140711F10
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
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     PopDispatchStateCallout @ 0x1407127E4 (PopDispatchStateCallout.c)
 *     PopNotifyConsoleUserPresent @ 0x140760A60 (PopNotifyConsoleUserPresent.c)
 *     PopSetWin32kDisplayTimeout @ 0x1408F1EB4 (PopSetWin32kDisplayTimeout.c)
 *     PopSetWin32kInputTimeout @ 0x1408F1F18 (PopSetWin32kInputTimeout.c)
 */

_QWORD *PopReleaseAdaptiveLock()
{
  _QWORD *result; // rax
  __int64 v1; // rdx
  __int128 v2; // xmm0
  unsigned int v3; // edi
  int v4; // ebx
  __int128 v5; // [rsp+20h] [rbp-40h]
  __int64 v6; // [rsp+30h] [rbp-30h]
  int v7; // [rsp+38h] [rbp-28h] BYREF
  __int128 v8; // [rsp+40h] [rbp-20h] BYREF
  __int64 v9; // [rsp+50h] [rbp-10h]

  PopAdpmLockThread = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( (_BYTE)PopLazyContext )
  {
    v2 = PopLazyContext;
    LOBYTE(PopLazyContext) = 0;
    v5 = v2;
    v6 = qword_140C20390;
  }
  ExReleaseResourceLite(&PopAdpmLock);
  result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( (_BYTE)v5 )
  {
    if ( BYTE2(v6) )
    {
      PopNotifyConsoleUserPresent(0LL, v1, HIDWORD(v6));
      v4 = DWORD1(v5);
      PopSetWin32kDisplayTimeout(DWORD1(v5), HIDWORD(v5));
      v3 = DWORD2(v5);
      PopSetWin32kInputTimeout(DWORD1(v5), DWORD2(v5));
    }
    else
    {
      v3 = DWORD2(v5);
      v4 = DWORD1(v5);
      if ( (_BYTE)v6 )
        PopSetWin32kInputTimeout(DWORD1(v5), DWORD2(v5));
      if ( BYTE1(v6) )
        PopSetWin32kDisplayTimeout(DWORD1(v5), HIDWORD(v5));
    }
    v7 = v4;
    LODWORD(v9) = 7;
    result = (_QWORD *)PopDispatchStateCallout(&v8, &v7);
    if ( BYTE3(v6) )
      return (_QWORD *)PopSetWin32kInputTimeout(0xFFFFFFFFLL, v3);
  }
  return result;
}
