/*
 * XREFs of AlpcpReturnMessageOnInsufficientBuffer @ 0x1406F8D48
 * Callers:
 *     AlpcpReceiveMessage @ 0x140682BD0 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x140684720 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x14062D888 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpExposeContextAttribute @ 0x1406F8E08 (AlpcpExposeContextAttribute.c)
 *     AlpcpInsertMessageLargeMessageQueue @ 0x1406F8E7C (AlpcpInsertMessageLargeMessageQueue.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x14070BDDC (AlpcpInsertMessageCanceledQueue.c)
 */

__int64 __fastcall AlpcpReturnMessageOnInsufficientBuffer(__int64 a1, _QWORD *a2, _OWORD *a3)
{
  signed __int64 *v3; // rdi

  v3 = (signed __int64 *)(a1 + 352);
  *a3 = 0LL;
  a3[1] = 0LL;
  ExAcquirePushLockSharedEx(a1 + 352, 0LL);
  if ( a2[8] == a1 )
  {
    if ( (*(_DWORD *)(a1 + 416) & 0x40) != 0 )
    {
      a2[8] = 0LL;
      a2[7] = 0LL;
    }
    else
    {
      ++*((_WORD *)a2 - 15);
      AlpcpInsertMessageCanceledQueue(a1, a2);
    }
LABEL_5:
    if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    AlpcpExposeContextAttribute(a1, a2, a3, 0LL);
    return 3221225507LL;
  }
  if ( a2[2] )
  {
    AlpcpRemoveMessageFromPendingQueue((__int64)a2);
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(a1 + 416) & 0x40) == 0 )
  {
LABEL_4:
    ++*((_WORD *)a2 - 15);
    AlpcpInsertMessageLargeMessageQueue(a1, a2);
    goto LABEL_5;
  }
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return 3221227264LL;
}
