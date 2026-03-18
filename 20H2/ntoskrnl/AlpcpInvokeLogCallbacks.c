/*
 * XREFs of AlpcpInvokeLogCallbacks @ 0x1408C638C
 * Callers:
 *     AlpcpLogClosePort @ 0x1408C6420 (AlpcpLogClosePort.c)
 *     AlpcpLogConnectFail @ 0x1408C6490 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1408C64F8 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1408C6568 (AlpcpLogConnectSuccess.c)
 *     AlpcpLogReceiveMessage @ 0x1408C65D0 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x1408C6640 (AlpcpLogSendMessage.c)
 *     AlpcpLogUnwait @ 0x1408C66B0 (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x1408C6718 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogWaitForReply @ 0x1408C6814 (AlpcpLogWaitForReply.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
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
