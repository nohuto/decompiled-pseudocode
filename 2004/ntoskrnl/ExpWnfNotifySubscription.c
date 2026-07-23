/*
 * XREFs of ExpWnfNotifySubscription @ 0x1406FB028
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x140622CE4 (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402743C0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140622254 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfStartKernelDispatcher @ 0x1406FB120 (ExpWnfStartKernelDispatcher.c)
 */

char __fastcall ExpWnfNotifySubscription(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned __int64 *v4; // rbx
  struct _KPROCESS *v8; // rdi
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  struct _KEVENT *v11; // rcx

  v4 = (unsigned __int64 *)(a1 + 112);
  v8 = 0LL;
  v9 = KeAbPreAcquire(a1 + 112, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v9, (ULONG_PTR)v4);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( *(_QWORD *)(a2 + 48) && (unsigned int)ExpWnfInsertSubscriptionInPendingQueue(a2, a3) )
    v8 = *(struct _KPROCESS **)(a2 + 40);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v4);
  LOBYTE(v10) = KeAbPostRelease((ULONG_PTR)v4);
  if ( v8 )
  {
    if ( PsInitialSystemProcess == v8 )
    {
      LOBYTE(v10) = ExpWnfStartKernelDispatcher(a4);
    }
    else
    {
      v10 = v8[1].EndPadding[7];
      v11 = *(struct _KEVENT **)(v10 + 128);
      if ( v11 )
        LOBYTE(v10) = KeSetEvent(v11, 1, 0);
    }
  }
  return v10;
}
