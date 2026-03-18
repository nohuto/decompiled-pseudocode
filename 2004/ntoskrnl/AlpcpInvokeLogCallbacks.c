/*
 * XREFs of AlpcpInvokeLogCallbacks @ 0x1408C054C
 * Callers:
 *     AlpcpLogClosePort @ 0x1408C05E0 (AlpcpLogClosePort.c)
 *     AlpcpLogConnectFail @ 0x1408C0650 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1408C06B8 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1408C0728 (AlpcpLogConnectSuccess.c)
 *     AlpcpLogReceiveMessage @ 0x1408C0790 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x1408C0800 (AlpcpLogSendMessage.c)
 *     AlpcpLogUnwait @ 0x1408C0870 (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x1408C08D8 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogWaitForReply @ 0x1408C09D4 (AlpcpLogWaitForReply.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

char __fastcall AlpcpInvokeLogCallbacks(__int64 a1, unsigned int a2)
{
  PVOID *i; // rbx

  ExAcquirePushLockSharedEx((ULONG_PTR)&AlpcpLogLock, 0LL);
  for ( i = (PVOID *)AlpcpLogCallbackListHead; i != &AlpcpLogCallbackListHead; i = (PVOID *)*i )
    ((void (__fastcall *)(__int64, _QWORD))i[2])(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpLogLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&AlpcpLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
}
