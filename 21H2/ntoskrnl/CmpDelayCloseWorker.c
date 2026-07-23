/*
 * XREFs of CmpDelayCloseWorker @ 0x1406DBAF0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     CmpInitializeDelayDerefContext @ 0x14035BE38 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x14035BE50 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmpLockHashEntryExclusive @ 0x1406DBA34 (CmpLockHashEntryExclusive.c)
 *     CmpLockKcbExclusive @ 0x1406DBABC (CmpLockKcbExclusive.c)
 *     CmpUnlockHashEntry @ 0x1406DBD98 (CmpUnlockHashEntry.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1406DDFD4 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 */

__int64 __fastcall CmpDelayCloseWorker(__int64 a1)
{
  bool v1; // r12
  __int64 v2; // rcx
  unsigned int v3; // edi
  _BYTE *v4; // r9
  int v5; // eax
  unsigned int v6; // ebp
  char *v7; // rsi
  char *v8; // r14
  unsigned int v9; // r15d
  unsigned int *v10; // rbx
  ULONG_PTR v11; // r13
  ULONG_PTR v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r8
  bool v21; // [rsp+20h] [rbp-E8h]
  __int128 v22; // [rsp+28h] [rbp-E0h] BYREF
  _OWORD v23[3]; // [rsp+38h] [rbp-D0h] BYREF
  char v24; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v25[12]; // [rsp+78h] [rbp-90h] BYREF
  char v26; // [rsp+84h] [rbp-84h] BYREF

  v1 = a1 != 0;
  v21 = a1 != 0;
  v22 = 0LL;
  memset(v23, 0, sizeof(v23));
  CmpAttachToRegistryProcess(v23);
  CmpInitializeDelayDerefContext(&v22);
  CmpLockRegistry(v2);
  do
  {
    if ( !v1 )
      _InterlockedExchange(&CmpDelayCloseWorkItemActive, 2);
    do
    {
      v3 = 0;
      ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
      v4 = v25;
      do
      {
        v5 = CmpDelayedCloseElements;
        if ( CmpDelayedCloseElements <= (unsigned int)CmpDelayedCloseSize && (!v1 || !CmpDelayedCloseElements) )
          break;
        v17 = qword_140C47FC8 - 224;
        if ( *(__int64 **)qword_140C47FC8 == &CmpDelayedLRUListHead )
        {
          v18 = *(_QWORD **)(qword_140C47FC8 + 8);
          if ( *v18 == qword_140C47FC8 )
            continue;
        }
        __fastfail(3u);
        qword_140C47FC8 = *(_QWORD *)(qword_140C47FC8 + 8);
        *v18 = &CmpDelayedLRUListHead;
        --qword_140D2EF88;
        CmpDelayedCloseElements = v5 - 1;
        *((_QWORD *)v4 - 1) = *(_QWORD *)(v17 + 32);
        *(_QWORD *)v4 = v17;
        v19 = v3++;
        v25[24 * v19 + 8] = 0;
        *((_DWORD *)v4 + 3) = *(_DWORD *)(v17 + 16);
        v4 += 24;
        *(_BYTE *)(v17 + 64) |= 4u;
        *(_QWORD *)(v17 + 224) = &v25[24 * v19 + 8];
      }
      while ( v3 < 4 );
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
      v6 = 0;
      if ( v3 )
      {
        v7 = &v24;
        v8 = &v26;
        do
        {
          CmpLockHashEntryExclusive(*(_QWORD *)v7, *(unsigned int *)v8);
          v9 = v6;
          if ( v6 < v3 )
          {
            v10 = (unsigned int *)(v8 - 12);
            do
            {
              if ( v10[3] == *((_DWORD *)v7 + 5) && *((_QWORD *)v10 - 1) == *(_QWORD *)v7 && !*((_BYTE *)v10 + 8) )
              {
                CmpLockKcbExclusive(*(_QWORD *)v10);
                v11 = 0LL;
                v12 = *(_QWORD *)v10;
                v13 = *(_QWORD *)(*(_QWORD *)v10 + 192LL);
                if ( v13 )
                {
                  v20 = *(_QWORD *)(v13 + 24);
                  if ( v20 )
                  {
                    v11 = *(_QWORD *)(v20 + 16);
                    CmpUnlockKcb(*(_QWORD *)v10);
                    CmpLockKcbExclusive(v11);
                    CmpLockKcbExclusive(*(_QWORD *)v10);
                    v12 = *(_QWORD *)v10;
                  }
                }
                CmpCleanUpKcbCacheWithLock(v12);
                CmpUnlockKcb(*(_QWORD *)v10);
                if ( v11 )
                  CmpUnlockKcb(v11);
                v25[24 * v9 + 8] = 1;
              }
              ++v9;
              v10 += 6;
            }
            while ( v9 < v3 );
          }
          CmpUnlockHashEntry(*(PVOID *)v7);
          ++v6;
          v8 += 24;
          v7 += 24;
        }
        while ( v6 < v3 );
        v1 = v21;
      }
    }
    while ( v3 == 4 );
  }
  while ( !v1 && _InterlockedCompareExchange(&CmpDelayCloseWorkItemActive, 0, 2) != 2 );
  CmpDrainDelayDerefContext((_QWORD **)&v22);
  CmpUnlockRegistry(v15, v14);
  return KiUnstackDetachProcess((__int64)v23, 0LL);
}
