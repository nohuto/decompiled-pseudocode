/*
 * XREFs of CmpDelayCloseWorker @ 0x140695A00
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     CmpDrainDelayDerefContext @ 0x14025ED80 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14025EE84 (CmpInitializeDelayDerefContext.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x14061C14C (CmpCleanUpKcbCacheWithLock.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockKcb @ 0x140626230 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpUnlockHashEntry @ 0x140695CA8 (CmpUnlockHashEntry.c)
 *     CmpLockKcbExclusive @ 0x140695D18 (CmpLockKcbExclusive.c)
 *     CmpLockHashEntryExclusive @ 0x140695D48 (CmpLockHashEntryExclusive.c)
 */

__int64 __fastcall CmpDelayCloseWorker(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  bool v4; // r12
  unsigned int v5; // edi
  _BYTE *v6; // r9
  int v7; // eax
  unsigned int v8; // ebp
  char *v9; // rsi
  char *v10; // r14
  unsigned int v11; // r15d
  ULONG_PTR *v12; // rbx
  ULONG_PTR v13; // r13
  ULONG_PTR v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v17; // r9
  __int64 v19; // r8
  _QWORD *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r8
  bool v23; // [rsp+20h] [rbp-E8h]
  __int128 v24; // [rsp+28h] [rbp-E0h] BYREF
  _OWORD v25[3]; // [rsp+38h] [rbp-D0h] BYREF
  char v26; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v27[12]; // [rsp+78h] [rbp-90h] BYREF
  char v28; // [rsp+84h] [rbp-84h] BYREF

  v4 = a1 != 0;
  v23 = a1 != 0;
  v24 = 0LL;
  memset(v25, 0, sizeof(v25));
  CmpAttachToRegistryProcess((__int64)v25, a2, a3, a4);
  CmpInitializeDelayDerefContext(&v24);
  CmpLockRegistry();
  do
  {
    if ( !v4 )
      _InterlockedExchange(&CmpDelayCloseWorkItemActive, 2);
    do
    {
      v5 = 0;
      ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
      v6 = v27;
      do
      {
        v7 = CmpDelayedCloseElements;
        if ( CmpDelayedCloseElements <= (unsigned int)CmpDelayedCloseSize && (!v4 || !CmpDelayedCloseElements) )
          break;
        v19 = qword_140C47F48 - 224;
        if ( *(__int64 **)qword_140C47F48 == &CmpDelayedLRUListHead )
        {
          v20 = *(_QWORD **)(qword_140C47F48 + 8);
          if ( *v20 == qword_140C47F48 )
            continue;
        }
        __fastfail(3u);
        qword_140C47F48 = *(_QWORD *)(qword_140C47F48 + 8);
        *v20 = &CmpDelayedLRUListHead;
        --qword_140D2DFC8;
        CmpDelayedCloseElements = v7 - 1;
        *((_QWORD *)v6 - 1) = *(_QWORD *)(v19 + 32);
        *(_QWORD *)v6 = v19;
        v21 = v5++;
        v27[24 * v21 + 8] = 0;
        *((_DWORD *)v6 + 3) = *(_DWORD *)(v19 + 16);
        v6 += 24;
        *(_BYTE *)(v19 + 64) |= 4u;
        *(_QWORD *)(v19 + 224) = &v27[24 * v21 + 8];
      }
      while ( v5 < 4 );
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
      v8 = 0;
      if ( v5 )
      {
        v9 = &v26;
        v10 = &v28;
        do
        {
          CmpLockHashEntryExclusive(*(_QWORD *)v9, *(unsigned int *)v10);
          v11 = v8;
          if ( v8 < v5 )
          {
            v12 = (ULONG_PTR *)(v10 - 12);
            do
            {
              if ( *((_DWORD *)v12 + 3) == *((_DWORD *)v9 + 5) && *(v12 - 1) == *(_QWORD *)v9 && !*((_BYTE *)v12 + 8) )
              {
                CmpLockKcbExclusive(*v12);
                v13 = 0LL;
                v14 = *v12;
                v15 = *(_QWORD *)(*v12 + 192);
                if ( v15 )
                {
                  v22 = *(_QWORD *)(v15 + 24);
                  if ( v22 )
                  {
                    v13 = *(_QWORD *)(v22 + 16);
                    CmpUnlockKcb(*v12);
                    CmpLockKcbExclusive(v13);
                    CmpLockKcbExclusive(*v12);
                    v14 = *v12;
                  }
                }
                CmpCleanUpKcbCacheWithLock(v14, (__int64)&v24);
                CmpUnlockKcb(*v12);
                if ( v13 )
                  CmpUnlockKcb(v13);
                v27[24 * v11 + 8] = 1;
              }
              ++v11;
              v12 += 3;
            }
            while ( v11 < v5 );
          }
          CmpUnlockHashEntry(*(PVOID *)v9);
          ++v8;
          v10 += 24;
          v9 += 24;
        }
        while ( v8 < v5 );
        v4 = v23;
      }
    }
    while ( v5 == 4 );
  }
  while ( !v4 && _InterlockedCompareExchange(&CmpDelayCloseWorkItemActive, 0, 2) != 2 );
  CmpDrainDelayDerefContext((_QWORD **)&v24);
  CmpUnlockRegistry();
  return KiUnstackDetachProcess((__int64)v25, 0LL, v16, v17);
}
