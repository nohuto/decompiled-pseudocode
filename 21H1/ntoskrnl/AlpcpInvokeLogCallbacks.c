/*
 * XREFs of AlpcpInvokeLogCallbacks @ 0x1408BF1FC
 * Callers:
 *     AlpcpLogClosePort @ 0x1408BF290 (AlpcpLogClosePort.c)
 *     AlpcpLogConnectFail @ 0x1408BF300 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1408BF368 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1408BF3D8 (AlpcpLogConnectSuccess.c)
 *     AlpcpLogReceiveMessage @ 0x1408BF440 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x1408BF4B0 (AlpcpLogSendMessage.c)
 *     AlpcpLogUnwait @ 0x1408BF520 (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x1408BF588 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogWaitForReply @ 0x1408BF684 (AlpcpLogWaitForReply.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
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
