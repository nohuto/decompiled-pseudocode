/*
 * XREFs of ExpWnfDeleteProcessContext @ 0x1407919CC
 * Callers:
 *     ExpWnfCreateProcessContext @ 0x1406C4AE4 (ExpWnfCreateProcessContext.c)
 *     ExWnfExitProcess @ 0x140791970 (ExWnfExitProcess.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExpWnfDeleteNameInstance @ 0x140791CAC (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteSubscription @ 0x14079240C (ExpWnfDeleteSubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1407938B0 (ExpWnfNotifyNameSubscribers.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWnfDeleteProcessContext(unsigned __int64 *P, int a2)
{
  unsigned __int64 *v2; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  struct _EX_RUNDOWN_REF **v7; // r14
  struct _EX_RUNDOWN_REF *v8; // rax
  volatile signed __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbp
  struct _EX_RUNDOWN_REF **v12; // r14
  struct _EX_RUNDOWN_REF *v13; // rax
  __int64 v14; // rax
  signed __int8 v15; // cf
  __int64 v16; // rdi
  unsigned __int64 **v17; // rdx
  PVOID *v18; // r8
  void *v19; // rcx
  struct _EX_RUNDOWN_REF *v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rbp
  struct _EX_RUNDOWN_REF *v23; // rbp
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rbp

  v2 = P + 10;
  v5 = KeAbPreAcquire((__int64)(P + 10), 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v5, (__int64)v2);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  v7 = (struct _EX_RUNDOWN_REF **)(P + 11);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == (struct _EX_RUNDOWN_REF *)v7 )
      break;
    v20 = v8 - 3;
    ExAcquireRundownProtection(v8 - 2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    ExpWnfDeleteSubscription(v20);
    v21 = KeAbPreAcquire((__int64)v2, 0LL);
    v22 = v21;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
      ExfAcquirePushLockExclusiveEx(v2, v21, (__int64)v2);
    if ( v22 )
      *(_BYTE *)(v22 + 18) = 1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  v9 = (volatile signed __int64 *)(P + 7);
  v10 = KeAbPreAcquire((__int64)(P + 7), 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)P + 14, 0LL) )
    ExfAcquirePushLockExclusiveEx(P + 7, v10, (__int64)(P + 7));
  if ( v11 )
    *(_BYTE *)(v11 + 18) = 1;
  v12 = (struct _EX_RUNDOWN_REF **)(P + 8);
  while ( 1 )
  {
    v13 = *v12;
    if ( *v12 == (struct _EX_RUNDOWN_REF *)v12 )
      break;
    v23 = v13 - 17;
    ExAcquireRundownProtection(v13 - 16);
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(P + 7);
    KeAbPostRelease((ULONG_PTR)(P + 7));
    ExpWnfNotifyNameSubscribers(v23, 16LL, 0LL, 0LL);
    LOBYTE(v24) = 1;
    ExpWnfDeleteNameInstance(v23[6].Count, v23, v24);
    v25 = KeAbPreAcquire((__int64)(P + 7), 0LL);
    v26 = v25;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(P + 7, v25, (__int64)(P + 7));
    if ( v26 )
      *(_BYTE *)(v26 + 18) = 1;
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(P + 7);
  KeAbPostRelease((ULONG_PTR)(P + 7));
  if ( a2 )
  {
    v14 = KeAbPreAcquire((__int64)&ExpWnfProcessesListLock, 0LL);
    v15 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWnfProcessesListLock, 0LL);
    v16 = v14;
    if ( v15 )
      ExfAcquirePushLockExclusiveEx(&ExpWnfProcessesListLock, v14, (__int64)&ExpWnfProcessesListLock);
    if ( v16 )
      *(_BYTE *)(v16 + 18) = 1;
    v17 = (unsigned __int64 **)P[2];
    if ( v17[1] != P + 2 || (v18 = (PVOID *)P[3], *v18 != P + 2) )
      __fastfail(3u);
    *v18 = v17;
    v17[1] = (unsigned __int64 *)v18;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWnfProcessesListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&ExpWnfProcessesListLock);
    KeAbPostRelease((ULONG_PTR)&ExpWnfProcessesListLock);
    v19 = (void *)P[16];
    if ( v19 )
      ObfDereferenceObject(v19);
    ExFreePoolWithTag(P, 0x20666E57u);
  }
}
