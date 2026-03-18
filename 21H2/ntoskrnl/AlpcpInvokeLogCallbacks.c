/*
 * XREFs of AlpcpInvokeLogCallbacks @ 0x140967908
 * Callers:
 *     AlpcpLogClosePort @ 0x14096799C (AlpcpLogClosePort.c)
 *     AlpcpLogConnectFail @ 0x140967A0C (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x140967A74 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x140967AE4 (AlpcpLogConnectSuccess.c)
 *     AlpcpLogReceiveMessage @ 0x140967B4C (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x140967BBC (AlpcpLogSendMessage.c)
 *     AlpcpLogUnwait @ 0x140967C2C (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x140967C94 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogWaitForReply @ 0x140967D90 (AlpcpLogWaitForReply.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AlpcpInvokeLogCallbacks(__int64 a1, unsigned int a2)
{
  PVOID *i; // rbx

  ExAcquirePushLockSharedEx((ULONG_PTR)&AlpcpLogLock, 0LL);
  for ( i = (PVOID *)AlpcpLogCallbackListHead; i != &AlpcpLogCallbackListHead; i = (PVOID *)*i )
    ((void (__fastcall *)(__int64, _QWORD))i[2])(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpLogLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&AlpcpLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
}
