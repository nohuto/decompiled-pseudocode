/*
 * XREFs of PopUmpoProcessMessages @ 0x14070EB24
 * Callers:
 *     PopUmpoMessageCallback @ 0x14035CC40 (PopUmpoMessageCallback.c)
 *     PopUmpoInitializeChannel @ 0x140A6C34C (PopUmpoInitializeChannel.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x14035CC60 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x14035CCA0 (AlpcInitializeMessageAttribute.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1403F34B0 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PopUmpoProcessMessage @ 0x14070EC54 (PopUmpoProcessMessage.c)
 *     PopDiagTraceUmpoAlpcProcessingError @ 0x1408E75B4 (PopDiagTraceUmpoAlpcProcessingError.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
