/*
 * XREFs of ExpWnfInsertSubscriptionInPendingQueue @ 0x1406A04B0
 * Callers:
 *     ExpWnfNotifySubscription @ 0x140609C14 (ExpWnfNotifySubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406A033C (ExpWnfNotifyNameSubscribers.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 */

__int64 __fastcall ExpWnfInsertSubscriptionInPendingQueue(__int64 a1, int a2)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  __int64 v6; // r15
  volatile signed __int64 *v7; // rbx
  _RTL_BALANCED_NODE *v8; // rax
  _RTL_BALANCED_NODE *v9; // rbp
  int v10; // r14d
  int v12; // eax
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  int v15; // edx

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  v6 = *(_QWORD *)(v2 + 2152);
  v7 = (volatile signed __int64 *)(v6 + 104);
  v8 = KeAbPreAcquire(v6 + 104, 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 104), v8, v6 + 104);
  if ( v9 )
    BYTE2(v9[1].Left) |= 1u;
  v10 = *(_DWORD *)(a1 + 100) & a2;
  if ( !v10 )
  {
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6 + 104);
    KeAbPostRelease(v6 + 104);
    return 0LL;
  }
  v12 = *(_DWORD *)(a1 + 120);
  if ( v12 )
  {
    if ( v12 != 3 )
      goto LABEL_15;
  }
  else
  {
    v13 = *(_QWORD **)(v6 + 120);
    v14 = (_QWORD *)(a1 + 104);
    if ( *v13 != v6 + 112 )
      __fastfail(3u);
    *v14 = v6 + 112;
    *(_QWORD *)(a1 + 112) = v13;
    *v13 = v14;
    *(_QWORD *)(v6 + 120) = v14;
  }
  v3 = 1;
  *(_DWORD *)(a1 + 120) = 1;
LABEL_15:
  v15 = *(_DWORD *)(a1 + 124);
  if ( (((unsigned __int8)v15 | *(_BYTE *)(a1 + 128)) & 1) == 0 && (v10 & 1) != 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 48) + 164LL), 1u);
    v15 = *(_DWORD *)(a1 + 124);
  }
  *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 100) & (v10 | v15);
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6 + 104);
  KeAbPostRelease(v6 + 104);
  return v3;
}
