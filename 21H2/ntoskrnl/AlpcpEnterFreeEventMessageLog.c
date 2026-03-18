/*
 * XREFs of AlpcpEnterFreeEventMessageLog @ 0x140966A1C
 * Callers:
 *     AlpcMessageDestroyProcedure @ 0x1406A61B0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpProcessSynchronousRequest @ 0x1407AD040 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     AlpcpLocateMessageLog @ 0x140966C34 (AlpcpLocateMessageLog.c)
 */

__int64 __fastcall AlpcpEnterFreeEventMessageLog(__int64 a1)
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
    ExfTryToWakePushLock(&AlpcpMessageLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpMessageLogLock);
}
