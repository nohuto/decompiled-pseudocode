/*
 * XREFs of PopGetLockConsoleTimeoutUnsafe @ 0x1405CE6A8
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1405CE5A4 (PopSessionWinlogonNotification.c)
 *     PopGetLockConsoleTimeout @ 0x1406FE4F8 (PopGetLockConsoleTimeout.c)
 *     PopActiveLockScreenPowerRequest @ 0x1408F0850 (PopActiveLockScreenPowerRequest.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

__int64 PopGetLockConsoleTimeoutUnsafe()
{
  unsigned int v0; // ebx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  v0 = PopAdaptiveLockConsoleTimeout;
  if ( PopAdaptiveLockConsoleTimeout > (unsigned int)PopDisplayTimeout )
  {
    if ( PopEnforceConsoleLockScreenTimeout )
    {
      if ( (unsigned int)dword_140C021E8 > 5 && tlgKeywordOn((__int64)&dword_140C021E8, 0x400000000000LL) )
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C021E8,
          (unsigned __int8 *)&byte_140028B27,
          0LL,
          0LL,
          2u,
          &v2);
    }
    else
    {
      return (unsigned int)PopDisplayTimeout;
    }
  }
  return v0;
}
