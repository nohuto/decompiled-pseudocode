/*
 * XREFs of KiReadyThread @ 0x14028D5F0
 * Callers:
 *     KiProcessExpiredTimerList @ 0x14028BA60 (KiProcessExpiredTimerList.c)
 *     KiReadyOutSwappedThreads @ 0x14028D410 (KiReadyOutSwappedThreads.c)
 *     KiProcessThreadWaitList @ 0x1403055C0 (KiProcessThreadWaitList.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KiDeferredReadySingleThread @ 0x140219BA0 (KiDeferredReadySingleThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     KiRequestProcessInSwap @ 0x1402FF1B0 (KiRequestProcessInSwap.c)
 */

int __fastcall KiReadyThread(__int64 a1, __int64 a2)
{
  int v2; // eax
  struct _SINGLE_LIST_ENTRY *Next; // rax
  struct _SINGLE_LIST_ENTRY *v6; // rcx
  volatile signed __int32 *v7; // rdi
  struct _SINGLE_LIST_ENTRY **v8; // rbx
  struct _SINGLE_LIST_ENTRY *v9; // rcx
  __int64 v10; // rsi
  _SINGLE_LIST_ENTRY v12; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 120);
  if ( (v2 & 0x20000) != 0 )
  {
    if ( (v2 & 0x100000) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x14u);
      if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 184) + 840LL), 8u) & 7) != 0 )
      {
        v10 = *(_QWORD *)(a2 + 184);
        KiAcquireKobjectLockSafe(v10);
        if ( (*(_DWORD *)(v10 + 840) & 7) != 0 )
        {
          LODWORD(Next) = KiRequestProcessInSwap(a2, v10);
          return (int)Next;
        }
        _InterlockedAnd((volatile signed __int32 *)v10, 0xFFFFFF7F);
      }
    }
    Next = (struct _SINGLE_LIST_ENTRY *)(a2 + 216);
    v6 = 0LL;
    *(_QWORD *)(a2 + 216) = 0LL;
    while ( 1 )
    {
      v12.Next = v6;
      KiDeferredReadySingleThread(a1, (ULONG_PTR)&Next[-27], &v12);
      Next = v12.Next;
      if ( !v12.Next )
        break;
      v6 = v12.Next->Next;
    }
  }
  else
  {
    v7 = *(volatile signed __int32 **)(a2 + 184);
    KiAcquireKobjectLockSafe(v7);
    if ( (v7[210] & 7) != 0 )
    {
      LODWORD(Next) = KiRequestProcessInSwap(a2, v7);
    }
    else
    {
      _InterlockedExchangeAdd(v7 + 210, 8u);
      _InterlockedAnd(v7, 0xFFFFFF7F);
      _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x14u);
      *(_BYTE *)(a2 + 388) = 6;
      v8 = (struct _SINGLE_LIST_ENTRY **)(a2 + 216);
      _m_prefetchw(&KiStackInSwapListHead);
      Next = (struct _SINGLE_LIST_ENTRY *)KiStackInSwapListHead;
      do
      {
        *v8 = Next;
        v9 = Next;
        Next = (struct _SINGLE_LIST_ENTRY *)_InterlockedCompareExchange64(
                                              &KiStackInSwapListHead,
                                              (signed __int64)v8,
                                              (signed __int64)Next);
      }
      while ( Next != v9 );
      if ( !Next )
        LODWORD(Next) = KeSetEvent(&KiSwapEvent, 10, 0);
    }
  }
  return (int)Next;
}
