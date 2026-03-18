/*
 * XREFs of PopUmpoProcessMessages @ 0x1406FA228
 * Callers:
 *     PopUmpoMessageCallback @ 0x14033FB30 (PopUmpoMessageCallback.c)
 *     PopUmpoInitializeChannel @ 0x140A72EFC (PopUmpoInitializeChannel.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x14033FB50 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x14033FB90 (AlpcInitializeMessageAttribute.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1403F92F0 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x140411300 (memset.c)
 *     PopUmpoProcessMessage @ 0x1406FA358 (PopUmpoProcessMessage.c)
 *     PopDiagTraceUmpoAlpcProcessingError @ 0x1408EE444 (PopDiagTraceUmpoAlpcProcessingError.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void PopUmpoProcessMessages()
{
  PVOID PoolWithTag; // rdi
  int v1; // ebx
  char *MessageAttribute; // rax
  __int64 v3; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v4[40]; // [rsp+68h] [rbp-A0h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x6F706D55u);
  if ( !PoolWithTag )
  {
    v1 = -1073741670;
LABEL_7:
    PopDiagTraceUmpoAlpcProcessingError((unsigned int)v1);
    return;
  }
  memset(v4, 0, sizeof(v4));
  while ( 1 )
  {
    AlpcInitializeMessageAttribute(0x20000000LL, v4, 0xA0uLL, &v3);
    v1 = ZwAlpcSendWaitReceivePort(PopAlpcServerPort, 0LL);
    if ( v1 )
      break;
    MessageAttribute = AlpcGetMessageAttribute(v4, 0x20000000);
    PopUmpoProcessMessage(PoolWithTag, MessageAttribute);
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( v1 < 0 )
    goto LABEL_7;
}
