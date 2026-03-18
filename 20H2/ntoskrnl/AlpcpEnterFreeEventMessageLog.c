/*
 * XREFs of AlpcpEnterFreeEventMessageLog @ 0x1408C53AC
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1405EE4E0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcMessageDestroyProcedure @ 0x1406B3D50 (AlpcMessageDestroyProcedure.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     AlpcpLocateMessageLog @ 0x1408C55C4 (AlpcpLocateMessageLog.c)
 */

char __fastcall AlpcpEnterFreeEventMessageLog(__int64 a1)
{
  __int64 MessageLog; // rax

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpMessageLogLock, 0LL);
  MessageLog = AlpcpLocateMessageLog(*(unsigned int *)(a1 + 264));
  if ( MessageLog )
  {
    *(_DWORD *)(MessageLog + 44) = 0;
    *(_QWORD *)(MessageLog + 32) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpMessageLogLock);
}
