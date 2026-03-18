/*
 * XREFs of KiReadyThread @ 0x1402813E0
 * Callers:
 *     KiProcessThreadWaitList @ 0x140280AB0 (KiProcessThreadWaitList.c)
 *     KiReadyOutSwappedThreads @ 0x140281200 (KiReadyOutSwappedThreads.c)
 *     KiProcessExpiredTimerList @ 0x140281580 (KiProcessExpiredTimerList.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KiDeferredReadySingleThread @ 0x1402873F0 (KiDeferredReadySingleThread.c)
 *     KiRequestProcessInSwap @ 0x140328610 (KiRequestProcessInSwap.c)
 */

int __fastcall KiReadyThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  signed __int64 v7; // rax
  _QWORD *v8; // rcx
  volatile signed __int32 *v9; // rdi
  signed __int64 *v10; // rbx
  signed __int64 v11; // rcx
  __int64 v12; // rsi
  _QWORD *v14; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_DWORD *)(a2 + 120);
  if ( (v4 & 0x20000) != 0 )
  {
    if ( (v4 & 0x100000) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x14u);
      if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 184) + 840LL), 8u) & 7) != 0 )
      {
        v12 = *(_QWORD *)(a2 + 184);
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v12, a2, a3, a4);
        if ( (*(_DWORD *)(v12 + 840) & 7) != 0 )
        {
          LODWORD(v7) = KiRequestProcessInSwap(a2, v12);
          return v7;
        }
        _InterlockedAnd((volatile signed __int32 *)v12, 0xFFFFFF7F);
      }
    }
    v7 = a2 + 216;
    v8 = 0LL;
    *(_QWORD *)(a2 + 216) = 0LL;
    while ( 1 )
    {
      v14 = v8;
      KiDeferredReadySingleThread(a1, v7 - 216, &v14, a4);
      v7 = (signed __int64)v14;
      if ( !v14 )
        break;
      v8 = (_QWORD *)*v14;
    }
  }
  else
  {
    v9 = *(volatile signed __int32 **)(a2 + 184);
    KiAcquireKobjectLockSafe(v9, a2, a3, a4);
    if ( (v9[210] & 7) != 0 )
    {
      LODWORD(v7) = KiRequestProcessInSwap(a2, v9);
    }
    else
    {
      _InterlockedExchangeAdd(v9 + 210, 8u);
      _InterlockedAnd(v9, 0xFFFFFF7F);
      _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x14u);
      *(_BYTE *)(a2 + 388) = 6;
      v10 = (signed __int64 *)(a2 + 216);
      _m_prefetchw(&KiStackInSwapListHead);
      v7 = KiStackInSwapListHead;
      do
      {
        *v10 = v7;
        v11 = v7;
        v7 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v10, v7);
      }
      while ( v7 != v11 );
      if ( !v7 )
        LODWORD(v7) = KeSetEvent(&KiSwapEvent, 10, 0);
    }
  }
  return v7;
}
