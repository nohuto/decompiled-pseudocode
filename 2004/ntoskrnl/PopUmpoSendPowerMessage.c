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
  _PORT_MESSAGE *ReceiveMessage; // rdi
  NTSTATUS v7; // eax
  NTSTATUS v8; // ebx
  _ALPC_CONTEXT_ATTR *MessageAttribute; // rax
  ULONG_PTR BufferLength[2]; // [rsp+40h] [rbp-D8h] BYREF
  _ALPC_MESSAGE_ATTRIBUTES Buffer[20]; // [rsp+50h] [rbp-C8h] BYREF

  BufferLength[0] = 0LL;
  ReceiveMessage = (_PORT_MESSAGE *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x6F706D55u);
  if ( !ReceiveMessage )
    return (unsigned int)-1073741670;
  PopAcquireUmpoPushLock(0LL);
  if ( PopAlpcClientPort )
  {
    if ( Size > 0xFD8 )
    {
      v8 = -2147483643;
      goto LABEL_7;
    }
    memset(&ReceiveMessage->u2, 0, 0xFFCuLL);
    ReceiveMessage->u1.s1.DataLength = Size;
    ReceiveMessage->u1.s1.TotalLength = Size + 40;
    memmove(&ReceiveMessage[1], Src, Size);
    if ( a3 )
    {
      memset(Buffer, 0, sizeof(Buffer));
      BufferLength[0] = 4096LL;
      v8 = ZwAlpcSendWaitReceivePort(
             PopAlpcClientPort,
             0x20000u,
             ReceiveMessage,
             0LL,
             ReceiveMessage,
             BufferLength,
             Buffer,
             0LL);
      if ( v8 < 0 )
        goto LABEL_7;
      MessageAttribute = (_ALPC_CONTEXT_ATTR *)AlpcGetMessageAttribute(Buffer, 0x20000000u);
      v7 = PopUmpoProcessMessage(ReceiveMessage, MessageAttribute);
    }
    else
    {
      v7 = ZwAlpcSendWaitReceivePort(PopAlpcClientPort, 0x10000u, ReceiveMessage, 0LL, 0LL, 0LL, 0LL, 0LL);
    }
    v8 = v7;
  }
  else
  {
    v8 = -1073741758;
  }
LABEL_7:
  PopReleaseUmpoPushLock();
  ExFreePoolWithTag(ReceiveMessage, 0);
  return (unsigned int)v8;
}
