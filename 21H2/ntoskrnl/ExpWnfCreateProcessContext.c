/*
 * XREFs of ExpWnfCreateProcessContext @ 0x1406C4AE4
 * Callers:
 *     NtSetWnfProcessNotificationEvent @ 0x1406C4A10 (NtSetWnfProcessNotificationEvent.c)
 *     ExpWnfResolveScopeInstance @ 0x140798334 (ExpWnfResolveScopeInstance.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExpWnfDeleteProcessContext @ 0x1407919CC (ExpWnfDeleteProcessContext.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpWnfCreateProcessContext(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // r14d
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rax
  signed __int8 v9; // cf
  __int64 v10; // rbp
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
    v8 = KeAbPreAcquire((__int64)&ExpWnfProcessesListLock, 0LL);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWnfProcessesListLock, 0LL);
    v10 = v8;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(&ExpWnfProcessesListLock, v8, (__int64)&ExpWnfProcessesListLock);
    if ( v10 )
      *(_BYTE *)(v10 + 18) = 1;
    v11 = off_140D3B600;
    v12 = v7 + 2;
    if ( *off_140D3B600 != (_UNKNOWN *)&ExpWnfProcessesListHead )
      __fastfail(3u);
    *v12 = &ExpWnfProcessesListHead;
    v7[3] = v11;
    *v11 = v12;
    off_140D3B600 = (_UNKNOWN **)(v7 + 2);
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
