/*
 * XREFs of ExpWnfCompleteThreadSubscriptions @ 0x140652FCC
 * Callers:
 *     NtGetCompleteWnfStateSubscription @ 0x140652BB0 (NtGetCompleteWnfStateSubscription.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140241C10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x140241E40 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140653290 (ExpWnfNotifyNameSubscribers.c)
 *     ExpCaptureWnfStateName @ 0x1406546E4 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x140654754 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140654854 (ExpWnfResolveScopeInstance.c)
 */

__int64 __fastcall ExpWnfCompleteThreadSubscriptions(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5)
{
  struct _EX_RUNDOWN_REF *v7; // r14
  char v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 *v13; // rbx
  int v14; // r15d
  int v15; // eax
  __int64 *v16; // rcx
  __int64 **v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // [rsp+38h] [rbp-28h] BYREF
  __int64 v23; // [rsp+40h] [rbp-20h] BYREF
  int v24[2]; // [rsp+48h] [rbp-18h] BYREF

  v22 = 0LL;
  v7 = 0LL;
  if ( (int)ExpCaptureWnfStateName(a2, &v22, 0LL) < 0 )
    return 3221225485LL;
  v10 = KeAbPreAcquire((ULONG_PTR)(a1 + 10), 0LL, v9);
  if ( _InterlockedCompareExchange64(a1 + 10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(a1 + 10, v10, (ULONG_PTR)(a1 + 10));
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = KeAbPreAcquire((ULONG_PTR)(a1 + 13), 0LL, 0);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 26, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 13, v11, (ULONG_PTR)(a1 + 13));
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v13 = (__int64 *)a1[14];
  if ( v13 == a1 + 14 )
  {
LABEL_36:
    v14 = 0;
  }
  else
  {
    while ( *(v13 - 11) != a3 || v22 != *(v13 - 6) )
    {
      v13 = (__int64 *)*v13;
      if ( v13 == a1 + 14 )
        goto LABEL_36;
    }
    v14 = 1;
    if ( a4 != *((_DWORD *)v13 + 6) || *((int *)v13 + 4) <= 1 )
      goto LABEL_27;
    v15 = *((_DWORD *)v13 + 5);
    if ( v15 )
    {
      *((_DWORD *)v13 + 4) = 1;
      if ( a5 == -1073741267 && (v15 & 1) == 0 )
        *((_DWORD *)v13 + 5) = v15 | 1;
    }
    else
    {
      if ( a5 )
      {
        *((_DWORD *)v13 + 4) = 3;
        v18 = 3;
      }
      else
      {
        *((_DWORD *)v13 + 4) = 0;
        v16 = (__int64 *)*v13;
        if ( *(__int64 **)(*v13 + 8) != v13 || (v17 = (__int64 **)v13[1], *v17 != v13) )
          __fastfail(3u);
        *v17 = v16;
        v16[1] = (__int64)v17;
        v18 = *((_DWORD *)v13 + 4);
      }
      if ( v18 == 3 )
        goto LABEL_27;
    }
    if ( (*((_BYTE *)v13 + 20) & 1) == 0 && (v13[3] & 1) != 0 )
    {
      v19 = *(v13 - 7);
      if ( v19 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 164), 0xFFFFFFFF) == 1
          && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(v13 - 7) + 8)) )
        {
          v7 = (struct _EX_RUNDOWN_REF *)*(v13 - 7);
        }
      }
    }
    *((_DWORD *)v13 + 6) = 0;
  }
LABEL_27:
  if ( (_InterlockedExchangeAdd64(a1 + 13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 13);
  KeAbPostRelease((ULONG_PTR)(a1 + 13));
  if ( _InterlockedCompareExchange64(a1 + 10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a1 + 10);
  KeAbPostRelease((ULONG_PTR)(a1 + 10));
  if ( !v14 && (a4 & 1) != 0 )
  {
    v21 = a1[1];
    v23 = 0LL;
    *(_QWORD *)v24 = 0LL;
    ExpWnfResolveScopeInstance((int)v24, v21, 0, (v22 >> 6) & 0xF, 0LL);
    if ( (int)ExpWnfLookupNameInstance(*(_QWORD *)v24, v22, &v23) >= 0 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 164), 0xFFFFFFFF) == 1 )
        v7 = (struct _EX_RUNDOWN_REF *)v23;
      else
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v23 + 8));
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v24 + 8LL));
  }
  if ( v7 )
  {
    ExpWnfNotifyNameSubscribers(v7, 8LL, 1LL);
    ExReleaseRundownProtection_0(v7 + 1);
  }
  return 0LL;
}
