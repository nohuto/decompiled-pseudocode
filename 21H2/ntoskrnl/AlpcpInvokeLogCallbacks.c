/*
 * XREFs of AlpcpInvokeLogCallbacks @ 0x1408C3CAC
 * Callers:
 *     AlpcpLogClosePort @ 0x1408C3D40 (AlpcpLogClosePort.c)
 *     AlpcpLogConnectFail @ 0x1408C3DB0 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1408C3E18 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1408C3E88 (AlpcpLogConnectSuccess.c)
 *     AlpcpLogReceiveMessage @ 0x1408C3EF0 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x1408C3F60 (AlpcpLogSendMessage.c)
 *     AlpcpLogUnwait @ 0x1408C3FD0 (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x1408C4038 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogWaitForReply @ 0x1408C4134 (AlpcpLogWaitForReply.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
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
