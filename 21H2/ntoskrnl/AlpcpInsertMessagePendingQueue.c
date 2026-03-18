/*
 * XREFs of AlpcpInsertMessagePendingQueue @ 0x1407A7FBC
 * Callers:
 *     AlpcpSendLegacySynchronousRequest @ 0x1406666B4 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1407A6A74 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpCompleteDispatchMessage @ 0x1407AACC0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x1407AD8F0 (AlpcpReceiveSynchronousReply.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpInsertMessagePendingQueue(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rsi
  int v5; // eax

  v2 = (volatile signed __int64 *)(a1 + 176);
  ExAcquirePushLockExclusiveEx(a1 + 176, 0LL);
  v5 = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 16) = a1;
  *(_DWORD *)(a2 + 40) = v5 & 0xFFFFFF83 | (4 * (*(_DWORD *)(a1 + 416) & 6)) | 3;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 192);
  *(_QWORD *)a2 = a1 + 184;
  **(_QWORD **)(a1 + 192) = a2;
  ++*(_DWORD *)(a1 + 456);
  *(_QWORD *)(a1 + 192) = a2;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
