/*
 * XREFs of AlpcpInsertMessageLargeMessageQueue @ 0x1406F8E7C
 * Callers:
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1406F8D48 (AlpcpReturnMessageOnInsufficientBuffer.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcpInsertMessageLargeMessageQueue(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rsi
  int v5; // eax

  v2 = (volatile signed __int64 *)(a1 + 136);
  ExAcquirePushLockExclusiveEx(a1 + 136, 0LL);
  v5 = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 16) = a1;
  *(_DWORD *)(a2 + 40) = v5 & 0xFFFFFF82 | (4 * (*(_DWORD *)(a1 + 416) & 6)) | 2;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 168);
  *(_QWORD *)a2 = a1 + 160;
  **(_QWORD **)(a1 + 168) = a2;
  ++*(_DWORD *)(a1 + 452);
  *(_QWORD *)(a1 + 168) = a2;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
