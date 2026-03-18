/*
 * XREFs of CmpDelayCloseWorker @ 0x1405DF360
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     CmpDrainDelayDerefContext @ 0x140205E60 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140205F64 (CmpInitializeDelayDerefContext.c)
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     CmpUnlockHashEntry @ 0x1405DF608 (CmpUnlockHashEntry.c)
 *     CmpLockKcbExclusive @ 0x1405DF678 (CmpLockKcbExclusive.c)
 *     CmpLockHashEntryExclusive @ 0x1405DF6A8 (CmpLockHashEntryExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1405E6B2C (CmpCleanUpKcbCacheWithLock.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockKcb @ 0x1405F0C10 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 */

__int64 __fastcall CmpDelayCloseWorker(__int64 a1)
{
  bool v1; // r12
  unsigned int v2; // edi
  _BYTE *v3; // r9
  int v4; // eax
  unsigned int v5; // ebp
  char *v6; // rsi
  char *v7; // r14
  unsigned int v8; // r15d
  ULONG_PTR *v9; // rbx
  ULONG_PTR v10; // r13
  ULONG_PTR v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r8
  bool v20; // [rsp+20h] [rbp-E8h]
  __int128 v21; // [rsp+28h] [rbp-E0h] BYREF
  _OWORD v22[3]; // [rsp+38h] [rbp-D0h] BYREF
  char v23; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v24[12]; // [rsp+78h] [rbp-90h] BYREF
  char v25; // [rsp+84h] [rbp-84h] BYREF

  v1 = a1 != 0;
  v20 = a1 != 0;
  v21 = 0LL;
  memset(v22, 0, sizeof(v22));
  CmpAttachToRegistryProcess(v22);
  CmpInitializeDelayDerefContext(&v21);
  CmpLockRegistry();
  do
  {
    if ( !v1 )
      _InterlockedExchange(&CmpDelayCloseWorkItemActive, 2);
    do
    {
      v2 = 0;
      ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
      v3 = v24;
      do
      {
        v4 = CmpDelayedCloseElements;
        if ( CmpDelayedCloseElements <= (unsigned int)CmpDelayedCloseSize && (!v1 || !CmpDelayedCloseElements) )
          break;
        v16 = qword_140C47DA8 - 224;
        if ( *(__int64 **)qword_140C47DA8 == &CmpDelayedLRUListHead )
        {
          v17 = *(_QWORD **)(qword_140C47DA8 + 8);
          if ( *v17 == qword_140C47DA8 )
            continue;
        }
        __fastfail(3u);
        qword_140C47DA8 = *(_QWORD *)(qword_140C47DA8 + 8);
        *v17 = &CmpDelayedLRUListHead;
        --qword_140D2EF88;
        CmpDelayedCloseElements = v4 - 1;
        *((_QWORD *)v3 - 1) = *(_QWORD *)(v16 + 32);
        *(_QWORD *)v3 = v16;
        v18 = v2++;
        v24[24 * v18 + 8] = 0;
        *((_DWORD *)v3 + 3) = *(_DWORD *)(v16 + 16);
        v3 += 24;
        *(_BYTE *)(v16 + 64) |= 4u;
        *(_QWORD *)(v16 + 224) = &v24[24 * v18 + 8];
      }
      while ( v2 < 4 );
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
      v5 = 0;
      if ( v2 )
      {
        v6 = &v23;
        v7 = &v25;
        do
        {
          CmpLockHashEntryExclusive(*(_QWORD *)v6, *(unsigned int *)v7);
          v8 = v5;
          if ( v5 < v2 )
          {
            v9 = (ULONG_PTR *)(v7 - 12);
            do
            {
              if ( *((_DWORD *)v9 + 3) == *((_DWORD *)v6 + 5) && *(v9 - 1) == *(_QWORD *)v6 && !*((_BYTE *)v9 + 8) )
              {
                CmpLockKcbExclusive(*v9);
                v10 = 0LL;
                v11 = *v9;
                v12 = *(_QWORD *)(*v9 + 192);
                if ( v12 )
                {
                  v19 = *(_QWORD *)(v12 + 24);
                  if ( v19 )
                  {
                    v10 = *(_QWORD *)(v19 + 16);
                    CmpUnlockKcb(*v9);
                    CmpLockKcbExclusive(v10);
                    CmpLockKcbExclusive(*v9);
                    v11 = *v9;
                  }
                }
                CmpCleanUpKcbCacheWithLock(v11);
                CmpUnlockKcb(*v9);
                if ( v10 )
                  CmpUnlockKcb(v10);
                v24[24 * v8 + 8] = 1;
              }
              ++v8;
              v9 += 3;
            }
            while ( v8 < v2 );
          }
          CmpUnlockHashEntry(*(PVOID *)v6);
          ++v5;
          v7 += 24;
          v6 += 24;
        }
        while ( v5 < v2 );
        v1 = v20;
      }
    }
    while ( v2 == 4 );
  }
  while ( !v1 && _InterlockedCompareExchange(&CmpDelayCloseWorkItemActive, 0, 2) != 2 );
  CmpDrainDelayDerefContext((_QWORD **)&v21);
  CmpUnlockRegistry(v14, v13);
  return KiUnstackDetachProcess((__int64)v22, 0LL);
}
