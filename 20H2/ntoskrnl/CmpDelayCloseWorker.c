/*
 * XREFs of CmpDelayCloseWorker @ 0x140670BA0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     CmpInitializeDelayDerefContext @ 0x140227238 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140227250 (CmpDrainDelayDerefContext.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     CmpUnlockKcb @ 0x140613840 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmpLockHashEntryExclusive @ 0x140670AE4 (CmpLockHashEntryExclusive.c)
 *     CmpLockKcbExclusive @ 0x140670B6C (CmpLockKcbExclusive.c)
 *     CmpUnlockHashEntry @ 0x140670E48 (CmpUnlockHashEntry.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140672204 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
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
  unsigned int *v9; // rbx
  ULONG_PTR v10; // r13
  ULONG_PTR v11; // rax
  __int64 v12; // rdx
  __int64 v14; // r8
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  bool v18; // [rsp+20h] [rbp-E8h]
  __int128 v19; // [rsp+28h] [rbp-E0h] BYREF
  _OWORD v20[3]; // [rsp+38h] [rbp-D0h] BYREF
  char v21; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v22[12]; // [rsp+78h] [rbp-90h] BYREF
  char v23; // [rsp+84h] [rbp-84h] BYREF

  v1 = a1 != 0;
  v18 = a1 != 0;
  v19 = 0LL;
  memset(v20, 0, sizeof(v20));
  CmpAttachToRegistryProcess(v20);
  CmpInitializeDelayDerefContext(&v19);
  CmpLockRegistry();
  do
  {
    if ( !v1 )
      _InterlockedExchange(&CmpDelayCloseWorkItemActive, 2);
    do
    {
      v2 = 0;
      ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
      v3 = v22;
      do
      {
        v4 = CmpDelayedCloseElements;
        if ( CmpDelayedCloseElements <= (unsigned int)CmpDelayedCloseSize && (!v1 || !CmpDelayedCloseElements) )
          break;
        v14 = qword_140C47E08 - 224;
        if ( *(__int64 **)qword_140C47E08 == &CmpDelayedLRUListHead )
        {
          v15 = *(_QWORD **)(qword_140C47E08 + 8);
          if ( *v15 == qword_140C47E08 )
            continue;
        }
        __fastfail(3u);
        qword_140C47E08 = *(_QWORD *)(qword_140C47E08 + 8);
        *v15 = &CmpDelayedLRUListHead;
        --qword_140D2EF88;
        CmpDelayedCloseElements = v4 - 1;
        *((_QWORD *)v3 - 1) = *(_QWORD *)(v14 + 32);
        *(_QWORD *)v3 = v14;
        v16 = v2++;
        v22[24 * v16 + 8] = 0;
        *((_DWORD *)v3 + 3) = *(_DWORD *)(v14 + 16);
        v3 += 24;
        *(_BYTE *)(v14 + 64) |= 4u;
        *(_QWORD *)(v14 + 224) = &v22[24 * v16 + 8];
      }
      while ( v2 < 4 );
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
      v5 = 0;
      if ( v2 )
      {
        v6 = &v21;
        v7 = &v23;
        do
        {
          CmpLockHashEntryExclusive(*(_QWORD *)v6, *(unsigned int *)v7);
          v8 = v5;
          if ( v5 < v2 )
          {
            v9 = (unsigned int *)(v7 - 12);
            do
            {
              if ( v9[3] == *((_DWORD *)v6 + 5) && *((_QWORD *)v9 - 1) == *(_QWORD *)v6 && !*((_BYTE *)v9 + 8) )
              {
                CmpLockKcbExclusive(*(_QWORD *)v9);
                v10 = 0LL;
                v11 = *(_QWORD *)v9;
                v12 = *(_QWORD *)(*(_QWORD *)v9 + 192LL);
                if ( v12 )
                {
                  v17 = *(_QWORD *)(v12 + 24);
                  if ( v17 )
                  {
                    v10 = *(_QWORD *)(v17 + 16);
                    CmpUnlockKcb(*(_QWORD *)v9);
                    CmpLockKcbExclusive(v10);
                    CmpLockKcbExclusive(*(_QWORD *)v9);
                    v11 = *(_QWORD *)v9;
                  }
                }
                CmpCleanUpKcbCacheWithLock(v11);
                CmpUnlockKcb(*(_QWORD *)v9);
                if ( v10 )
                  CmpUnlockKcb(v10);
                v22[24 * v8 + 8] = 1;
              }
              ++v8;
              v9 += 6;
            }
            while ( v8 < v2 );
          }
          CmpUnlockHashEntry(*(PVOID *)v6);
          ++v5;
          v7 += 24;
          v6 += 24;
        }
        while ( v5 < v2 );
        v1 = v18;
      }
    }
    while ( v2 == 4 );
  }
  while ( !v1 && _InterlockedCompareExchange(&CmpDelayCloseWorkItemActive, 0, 2) != 2 );
  CmpDrainDelayDerefContext((_QWORD **)&v19);
  CmpUnlockRegistry();
  return KiUnstackDetachProcess((__int64)v20, 0);
}
