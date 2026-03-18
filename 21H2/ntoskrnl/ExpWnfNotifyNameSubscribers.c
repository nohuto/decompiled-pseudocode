/*
 * XREFs of ExpWnfNotifyNameSubscribers @ 0x1407938B0
 * Callers:
 *     ExpWnfDispatchKernelSubscription @ 0x1406D7D74 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfDeleteProcessContext @ 0x1407919CC (ExpWnfDeleteProcessContext.c)
 *     NtDeleteWnfStateName @ 0x1407920F0 (NtDeleteWnfStateName.c)
 *     ExpWnfDeleteSubscription @ 0x14079240C (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140792EFC (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1407931C0 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1407938B0 (ExpWnfNotifyNameSubscribers.c)
 *     ExpNtUpdateWnfStateData @ 0x140793B84 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x14079A254 (ExpWnfSubscribeNameInstance.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14029F350 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExpWnfStartKernelDispatcher @ 0x1406D7CC4 (ExpWnfStartKernelDispatcher.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1407938B0 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140793A34 (ExpWnfInsertSubscriptionInPendingQueue.c)
 */

void __fastcall ExpWnfNotifyNameSubscribers(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  signed __int64 *v4; // rsi
  int v5; // r13d
  int v8; // r12d
  unsigned int v9; // ebx
  int v10; // ebp
  __int64 v11; // rdi
  _QWORD *v12; // r14
  _QWORD *v13; // rdi
  int inserted; // eax
  struct _KPROCESS *v15; // rcx
  int v16; // edi
  struct _KEVENT *v17; // rcx

  v4 = (signed __int64 *)(a1 + 112);
  v5 = a3;
  v8 = 0;
  v9 = 1;
  v10 = 1;
  v11 = KeAbPreAcquire(a1 + 112, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v11, (__int64)v4);
  if ( v11 )
    *(_BYTE *)(v11 + 18) = 1;
  v12 = (_QWORD *)(a1 + 120);
  v13 = (_QWORD *)*v12;
  if ( (_QWORD *)*v12 != v12 )
  {
    do
    {
      if ( v10 && (*((_BYTE *)v13 + 36) & 1) != 0 )
        v10 = 0;
      inserted = ExpWnfInsertSubscriptionInPendingQueue(v13 - 8, a2);
      v15 = (struct _KPROCESS *)*(v13 - 3);
      if ( inserted )
      {
        if ( v15 == PsInitialSystemProcess )
        {
          v8 = 1;
        }
        else
        {
          v17 = *(struct _KEVENT **)(v15[1].EndPadding[2] + 128);
          if ( v17 )
            KeSetEvent(v17, 1, 0);
        }
      }
      v13 = (_QWORD *)*v13;
    }
    while ( v13 != v12 );
    v5 = a3;
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  if ( v10 && (a2 & 1) != 0 )
  {
    if ( v8 || !v5 )
      v9 = 0;
    v16 = a4;
    ExpWnfNotifyNameSubscribers(a1, 8LL, v9, a4);
  }
  else
  {
    v16 = a4;
  }
  if ( v8 )
  {
    if ( v5 )
      ExpWnfStartKernelDispatcher(v16);
  }
}
