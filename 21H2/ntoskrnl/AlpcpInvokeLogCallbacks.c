/*
 * XREFs of AlpcpInvokeLogCallbacks @ 0x1408C3B4C
 * Callers:
 *     AlpcpLogClosePort @ 0x1408C3BE0 (AlpcpLogClosePort.c)
 *     AlpcpLogConnectFail @ 0x1408C3C50 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1408C3CB8 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1408C3D28 (AlpcpLogConnectSuccess.c)
 *     AlpcpLogReceiveMessage @ 0x1408C3D90 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x1408C3E00 (AlpcpLogSendMessage.c)
 *     AlpcpLogUnwait @ 0x1408C3E70 (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x1408C3ED8 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogWaitForReply @ 0x1408C3FD4 (AlpcpLogWaitForReply.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
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
