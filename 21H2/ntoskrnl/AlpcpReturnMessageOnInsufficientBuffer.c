/*
 * XREFs of AlpcpReturnMessageOnInsufficientBuffer @ 0x1406C9174
 * Callers:
 *     AlpcpReceiveMessage @ 0x1407AC930 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1407AD040 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     AlpcpExposeContextAttribute @ 0x1406C926C (AlpcpExposeContextAttribute.c)
 *     AlpcpInsertMessageLargeMessageQueue @ 0x1406C92E0 (AlpcpInsertMessageLargeMessageQueue.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x14074B7A0 (AlpcpInsertMessageCanceledQueue.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x1407A6FD8 (AlpcpRemoveMessageFromPendingQueue.c)
 */

__int64 __fastcall AlpcpReturnMessageOnInsufficientBuffer(__int64 a1, _QWORD *a2, _OWORD *a3)
{
  signed __int64 *v3; // rdi
  __int64 v7; // rdx
  int v8; // eax

  v3 = (signed __int64 *)(a1 + 352);
  *a3 = 0LL;
  a3[1] = 0LL;
  ExAcquirePushLockSharedEx(a1 + 352, 0LL);
  v8 = *(_DWORD *)(a1 + 416);
  if ( a2[8] == a1 )
  {
    if ( (v8 & 0x40) != 0 )
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
  if ( (v8 & 0x40) == 0 )
  {
    if ( a2[2] )
      AlpcpRemoveMessageFromPendingQueue(a2, v7);
    ++*((_WORD *)a2 - 15);
    AlpcpInsertMessageLargeMessageQueue(a1, a2);
    goto LABEL_12;
  }
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return 3221227264LL;
}
