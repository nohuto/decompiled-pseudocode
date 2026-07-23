/*
 * XREFs of AlpcpReturnMessageOnInsufficientBuffer @ 0x140605F88
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1406D6640 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1406D73D0 (AlpcpReceiveMessage.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     AlpcpExposeContextAttribute @ 0x140606080 (AlpcpExposeContextAttribute.c)
 *     AlpcpInsertMessageLargeMessageQueue @ 0x1406060F4 (AlpcpInsertMessageLargeMessageQueue.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x14061D1CC (AlpcpInsertMessageCanceledQueue.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x1406D3010 (AlpcpRemoveMessageFromPendingQueue.c)
 */

__int64 __fastcall AlpcpReturnMessageOnInsufficientBuffer(__int64 a1, _QWORD *a2, _OWORD *a3)
{
  signed __int64 *v3; // rsi
  int v7; // eax

  v3 = (signed __int64 *)(a1 + 352);
  *a3 = 0LL;
  a3[1] = 0LL;
  ExAcquirePushLockSharedEx(a1 + 352, 0LL);
  v7 = *(_DWORD *)(a1 + 416) & 0x40;
  if ( a2[8] == a1 )
  {
    if ( v7 )
    {
      a2[8] = 0LL;
      a2[7] = 0LL;
    }
    else
    {
      ++*((_WORD *)a2 - 15);
      AlpcpInsertMessageCanceledQueue(a1, a2);
    }
LABEL_12:
    if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    AlpcpExposeContextAttribute(a1, a2, a3, 0LL);
    return 3221225507LL;
  }
  if ( !v7 )
  {
    if ( a2[2] )
      AlpcpRemoveMessageFromPendingQueue(a2);
    ++*((_WORD *)a2 - 15);
    AlpcpInsertMessageLargeMessageQueue(a1, a2);
    goto LABEL_12;
  }
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return 3221227264LL;
}
