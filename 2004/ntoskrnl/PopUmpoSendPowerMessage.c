/*
 * XREFs of PopUmpoSendPowerMessage @ 0x1402769F8
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140276D74 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14038AD9C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x14064CEF0 (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     PopNotifySessionUserPowerRequestDeleted @ 0x14064DDD4 (PopNotifySessionUserPowerRequestDeleted.c)
 *     PopEvaluateGlobalUserStatus @ 0x140712414 (PopEvaluateGlobalUserStatus.c)
 *     PopUmpoSendLegacyEvent @ 0x1407628D8 (PopUmpoSendLegacyEvent.c)
 *     PopMonitorProcessLoop @ 0x1407BDB28 (PopMonitorProcessLoop.c)
 *     PopUserPresencePredictionModeCallback @ 0x1407C02D0 (PopUserPresencePredictionModeCallback.c)
 *     PopNotifyUserPowerRequestAction @ 0x1408DE448 (PopNotifyUserPowerRequestAction.c)
 *     PopUmpoSendPowerRequestCreate @ 0x1408EF2AC (PopUmpoSendPowerRequestCreate.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x1402DEB50 (AlpcGetMessageAttribute.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1403F4740 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PopReleaseUmpoPushLock @ 0x14064CF38 (PopReleaseUmpoPushLock.c)
 *     PopAcquireUmpoPushLock @ 0x14064CF5C (PopAcquireUmpoPushLock.c)
 *     PopUmpoProcessMessage @ 0x1406A79B4 (PopUmpoProcessMessage.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopUmpoSendPowerMessage(void *Src, size_t Size, char a3)
{
  _WORD *PoolWithTag; // rdi
  int v7; // eax
  int v8; // ebx
  __int64 MessageAttribute; // rax
  __int64 v11; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v12[160]; // [rsp+50h] [rbp-C8h] BYREF

  v11 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x6F706D55u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  PopAcquireUmpoPushLock(0LL);
  if ( PopAlpcClientPort )
  {
    if ( Size > 0xFD8 )
    {
      v8 = -2147483643;
      goto LABEL_7;
    }
    memset(PoolWithTag + 2, 0, 0xFFCuLL);
    *PoolWithTag = Size;
    PoolWithTag[1] = Size + 40;
    memmove(PoolWithTag + 20, Src, Size);
    if ( a3 )
    {
      memset(v12, 0, sizeof(v12));
      v11 = 4096LL;
      v8 = ((__int64 (__fastcall *)(HANDLE, __int64, _WORD *, _QWORD, _WORD *, __int64 *, _BYTE *, _QWORD))ZwAlpcSendWaitReceivePort)(
             PopAlpcClientPort,
             0x20000LL,
             PoolWithTag,
             0LL,
             PoolWithTag,
             &v11,
             v12,
             0LL);
      if ( v8 < 0 )
        goto LABEL_7;
      MessageAttribute = AlpcGetMessageAttribute(v12, 0x20000000LL);
      v7 = PopUmpoProcessMessage(PoolWithTag, MessageAttribute);
    }
    else
    {
      v7 = ZwAlpcSendWaitReceivePort(PopAlpcClientPort, 0x10000LL, PoolWithTag, 0LL, 0LL, 0LL, 0LL, 0LL, v11);
    }
    v8 = v7;
  }
  else
  {
    v8 = -1073741758;
  }
LABEL_7:
  PopReleaseUmpoPushLock();
  ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v8;
}
