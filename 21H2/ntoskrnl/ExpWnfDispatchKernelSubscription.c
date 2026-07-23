/*
 * XREFs of ExpWnfDispatchKernelSubscription @ 0x140609DB4
 * Callers:
 *     ExpWnfStartKernelDispatcher @ 0x140609D0C (ExpWnfStartKernelDispatcher.c)
 *     ExpWnfWorkItemRoutine @ 0x140609D60 (ExpWnfWorkItemRoutine.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FDC10 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406A033C (ExpWnfNotifyNameSubscribers.c)
 */

char ExpWnfDispatchKernelSubscription()
{
  unsigned __int64 *v0; // r13
  volatile signed __int64 *v1; // rdi
  _RTL_BALANCED_NODE *v2; // rax
  _RTL_BALANCED_NODE *v3; // rbx
  struct _EX_RUNDOWN_REF *v4; // rsi
  struct _EX_RUNDOWN_REF *v5; // r14
  struct _EX_RUNDOWN_REF v6; // rcx
  struct _EX_RUNDOWN_REF **Count; // rax
  volatile signed __int64 *v8; // r12
  unsigned int Ptr_high; // r15d
  PRTL_BALANCED_NODE v10; // rsi
  unsigned __int64 v11; // rsi
  unsigned int v12; // ebp
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r9
  _RTL_BALANCED_NODE *v16; // rax
  _RTL_BALANCED_NODE *v17; // rsi
  __int64 v19; // [rsp+48h] [rbp-40h] BYREF

  v19 = 0LL;
  v0 = (unsigned __int64 *)PsInitialSystemProcess[1].EndPadding[7];
  v1 = (volatile signed __int64 *)(v0 + 13);
  v2 = KeAbPreAcquire((ULONG_PTR)(v0 + 13), 0LL, 0);
  v3 = v2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v0 + 26, 0LL) )
    ExfAcquirePushLockExclusiveEx(v0 + 13, v2, (ULONG_PTR)(v0 + 13));
  if ( v3 )
    BYTE2(v3[1].Left) |= 1u;
  while ( 1 )
  {
    v4 = (struct _EX_RUNDOWN_REF *)v0[14];
    if ( v4 == (struct _EX_RUNDOWN_REF *)(v0 + 14) )
      break;
    v5 = v4 - 13;
    ExAcquireRundownProtection(v4 - 12);
    LODWORD(v4[2].Count) = 2;
    v6.Count = v4->Count;
    if ( *(struct _EX_RUNDOWN_REF **)(v4->Count + 8) != v4
      || (Count = (struct _EX_RUNDOWN_REF **)v4[1].Count, *Count != v4) )
    {
      __fastfail(3u);
    }
    *Count = (struct _EX_RUNDOWN_REF *)v6.Count;
    v8 = (volatile signed __int64 *)(v0 + 10);
    *(_QWORD *)(v6.Count + 8) = Count;
    Ptr_high = HIDWORD(v5[15].Ptr);
    do
    {
      HIDWORD(v5[15].Ptr) = 0;
      if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v0 + 13);
      KeAbPostRelease((ULONG_PTR)(v0 + 13));
      v10 = KeAbPreAcquire((ULONG_PTR)(v0 + 10), 0LL, 0);
      if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v0 + 10, v10, (ULONG_PTR)(v0 + 10));
      if ( v10 )
        BYTE2(v10[1].Left) |= 1u;
      v11 = v5[6].Count;
      if ( v11 )
        v11 &= -(__int64)(ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v11 + 8)) != 0);
      v12 = Ptr_high & 0xFFFFFFFE;
      if ( v11 )
        v12 = Ptr_high;
      if ( (v12 & 1) != 0 )
      {
        v13 = *(_DWORD *)(v11 + 96);
        if ( v13 <= LODWORD(v5[12].Count) )
          v12 &= ~1u;
        else
          LODWORD(v5[12].Count) = v13;
      }
      if ( v12 )
      {
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v0 + 10);
        KeAbPostRelease((ULONG_PTR)(v0 + 10));
        v19 = v5[7].Count ^ 0x41C64E6DA3BC0074LL;
        if ( v11 )
          v14 = *(_QWORD *)(v11 + 64);
        else
          v14 = 0LL;
        if ( v11 && (v12 & 1) != 0 )
          v15 = *(unsigned int *)(v11 + 96);
        else
          v15 = 0LL;
        ((void (__fastcall *)(struct _EX_RUNDOWN_REF *, __int64 *, _QWORD, __int64, __int64, unsigned __int64))v5[10].Count)(
          v5,
          &v19,
          v12,
          v15,
          v14,
          v5[11].Count);
        if ( (v12 & 1) != 0 && !_InterlockedDecrement((volatile signed __int32 *)(v11 + 164)) )
          ExpWnfNotifyNameSubscribers(v11, 8LL, 0LL, 0LL);
      }
      else
      {
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v0 + 10);
        KeAbPostRelease((ULONG_PTR)(v0 + 10));
      }
      if ( v11 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v11 + 8));
      v16 = KeAbPreAcquire((ULONG_PTR)(v0 + 13), 0LL, 0);
      v17 = v16;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
        ExfAcquirePushLockExclusiveEx(v0 + 13, v16, (ULONG_PTR)(v0 + 13));
      if ( v17 )
        BYTE2(v17[1].Left) |= 1u;
      Ptr_high = HIDWORD(v5[15].Ptr);
    }
    while ( Ptr_high );
    LODWORD(v5[15].Count) = 0;
    ExReleaseRundownProtection(v5 + 1);
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v0 + 13);
  return KeAbPostRelease((ULONG_PTR)(v0 + 13));
}
