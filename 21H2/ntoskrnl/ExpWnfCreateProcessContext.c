/*
 * XREFs of ExpWnfCreateProcessContext @ 0x140605804
 * Callers:
 *     NtSetWnfProcessNotificationEvent @ 0x140605730 (NtSetWnfProcessNotificationEvent.c)
 *     ExpWnfResolveScopeInstance @ 0x14069EF64 (ExpWnfResolveScopeInstance.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExpWnfDeleteProcessContext @ 0x1406A2998 (ExpWnfDeleteProcessContext.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpWnfCreateProcessContext(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // r14d
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rdi
  _RTL_BALANCED_NODE *v8; // rax
  signed __int8 v9; // cf
  _RTL_BALANCED_NODE *v10; // rsi
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rcx

  v2 = 0;
  v5 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x20666E57u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x88uLL);
    *(_DWORD *)v7 = 8915206;
    v7[9] = v7 + 8;
    v7[8] = v7 + 8;
    v7[16] = 0LL;
    v7[12] = v7 + 11;
    v7[11] = v7 + 11;
    v7[1] = a1;
    v7[15] = v7 + 14;
    v7[14] = v7 + 14;
    v8 = KeAbPreAcquire((ULONG_PTR)&ExpWnfProcessesListLock, 0LL, 0);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWnfProcessesListLock, 0LL);
    v10 = v8;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(&ExpWnfProcessesListLock, v8, (ULONG_PTR)&ExpWnfProcessesListLock);
    if ( v10 )
      BYTE2(v10[1].Left) |= 1u;
    v11 = off_140D2D628;
    v12 = v7 + 2;
    if ( *off_140D2D628 != (_UNKNOWN *)&ExpWnfProcessesListHead )
      __fastfail(3u);
    *v12 = &ExpWnfProcessesListHead;
    v7[3] = v11;
    *v11 = v12;
    off_140D2D628 = (_UNKNOWN **)(v7 + 2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWnfProcessesListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&ExpWnfProcessesListLock);
    KeAbPostRelease((ULONG_PTR)&ExpWnfProcessesListLock);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2152), (signed __int64)v7, 0LL) )
      ExpWnfDeleteProcessContext(v7);
  }
  else
  {
    v5 = -1073741670;
  }
  v13 = *(_QWORD *)(a1 + 2152);
  *a2 = v13;
  if ( !v13 )
    return v5;
  return v2;
}
