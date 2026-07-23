/*
 * XREFs of ExpWnfNotifyNameSubscribers @ 0x1406A033C
 * Callers:
 *     ExpWnfDispatchKernelSubscription @ 0x140609DB4 (ExpWnfDispatchKernelSubscription.c)
 *     NtDeleteWnfStateName @ 0x14069CE70 (NtDeleteWnfStateName.c)
 *     ExpWnfDeliverThreadNotifications @ 0x14069DAC4 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14069DD8C (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpNtUpdateWnfStateData @ 0x14069E08C (ExpNtUpdateWnfStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x14069F7E8 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406A033C (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfDeleteProcessContext @ 0x1406A2998 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x1406A2BD8 (ExpWnfDeleteSubscription.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FDC10 (ExfAcquirePushLockSharedEx.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     ExpWnfStartKernelDispatcher @ 0x140609D0C (ExpWnfStartKernelDispatcher.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406A033C (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x1406A04B0 (ExpWnfInsertSubscriptionInPendingQueue.c)
 */

void __fastcall ExpWnfNotifyNameSubscribers(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned __int64 *v4; // rdi
  int v5; // r13d
  int v8; // r12d
  unsigned int v9; // ebx
  int v10; // ebp
  PRTL_BALANCED_NODE v11; // rsi
  _QWORD *v12; // r14
  _QWORD *v13; // rsi
  int inserted; // eax
  struct _KPROCESS *v15; // rcx
  int v16; // edi
  struct _KEVENT *v17; // rcx

  v4 = (unsigned __int64 *)(a1 + 112);
  v5 = a3;
  v8 = 0;
  v9 = 1;
  v10 = 1;
  v11 = KeAbPreAcquire(a1 + 112, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v11, (ULONG_PTR)v4);
  if ( v11 )
    BYTE2(v11[1].Left) |= 1u;
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
          v17 = *(struct _KEVENT **)(v15[1].EndPadding[7] + 128);
          if ( v17 )
            KeSetEvent(v17, 1, 0);
        }
      }
      v13 = (_QWORD *)*v13;
    }
    while ( v13 != v12 );
    v5 = a3;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v4);
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
