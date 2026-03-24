/*
 * XREFs of AlpcpEnterAllocationEventMessageLog @ 0x1408C2AA0
 * Callers:
 *     AlpcpSendLegacySynchronousRequest @ 0x1405DFA58 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpAllocateMessage @ 0x1405E09E4 (AlpcpAllocateMessage.c)
 *     AlpcpSendMessage @ 0x1405E4800 (AlpcpSendMessage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     AlpcpAllocateMessageLog @ 0x1408C28AC (AlpcpAllocateMessageLog.c)
 */

char __fastcall AlpcpEnterAllocationEventMessageLog(__int64 a1)
{
  __int64 MessageLog; // rax
  __int64 *v3; // rcx
  char *v4; // rdx
  char *v5; // rcx
  char **v6; // rax

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpMessageLogLock, 0LL);
  MessageLog = AlpcpAllocateMessageLog();
  if ( MessageLog )
  {
    *(_QWORD *)(MessageLog + 32) = a1;
    *(_DWORD *)(MessageLog + 40) = *(_DWORD *)(a1 + 264);
    *(_DWORD *)(MessageLog + 44) = 1;
    v3 = (__int64 *)qword_140C2A9E8;
    if ( *(__int64 **)qword_140C2A9E8 != &AlpcpMessageLogListHead
      || (*(_QWORD *)(MessageLog + 8) = qword_140C2A9E8,
          *(_QWORD *)MessageLog = &AlpcpMessageLogListHead,
          v4 = (char *)(MessageLog + 16),
          *v3 = MessageLog,
          qword_140C2A9E8 = MessageLog,
          v5 = (char *)AlpcpMessageLogLookupTable + 16 * ((*(_DWORD *)(MessageLog + 40) >> 2) & 0x3FF),
          v6 = (char **)*((_QWORD *)v5 + 1),
          *v6 != v5) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v4 = v5;
    *((_QWORD *)v4 + 1) = v6;
    *v6 = v4;
    *((_QWORD *)v5 + 1) = v4;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&AlpcpMessageLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpMessageLogLock);
}
