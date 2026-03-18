/*
 * XREFs of MiScrubProcessLargePages @ 0x1405C5930
 * Callers:
 *     MiScrubProcesses @ 0x140983B80 (MiScrubProcesses.c)
 * Callees:
 *     MiUnlockVadShared @ 0x140280EF8 (MiUnlockVadShared.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14030EA00 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiIsVadLargePrivate @ 0x14030FBE0 (MiIsVadLargePrivate.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
 *     MiScrubLargeMappedPage @ 0x1405C4FB8 (MiScrubLargeMappedPage.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall MiScrubProcessLargePages(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v2; // rbp
  _QWORD *v3; // r12
  __int64 Process; // r13
  unsigned int v5; // r14d
  int v6; // r15d
  _QWORD *j; // rdi
  _QWORD *i; // rax
  _QWORD **v9; // rax
  __int64 v10; // rsi
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *Pool; // rax
  __int64 v14; // rax
  int v15; // r15d
  __int64 *v16; // rsi
  unsigned int k; // ebp
  __int64 v18; // rdi
  _QWORD *v21; // [rsp+68h] [rbp+10h]
  _QWORD *v22; // [rsp+68h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v21 = 0LL;
  v3 = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  v5 = 13;
  --CurrentThread->KernelApcDisable;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(Process + 1224, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  if ( (*(_DWORD *)(Process + 1124) & 0x20) != 0 )
  {
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  }
  else
  {
    v6 = *(_DWORD *)(Process + 2140);
    j = 0LL;
    for ( i = *(_QWORD **)(Process + 2008); i; i = (_QWORD *)*i )
      j = i;
    while ( v6 && j )
    {
      v9 = (_QWORD **)j[1];
      v10 = (__int64)j;
      v11 = j;
      if ( v9 )
      {
        v12 = *v9;
        for ( j = (_QWORD *)j[1]; v12; v12 = (_QWORD *)*v12 )
          j = v12;
      }
      else
      {
        while ( 1 )
        {
          j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !j || (_QWORD *)*j == v11 )
            break;
          v11 = j;
        }
      }
      if ( MiIsVadLargePrivate(v10) && (*(_DWORD *)(v10 + 48) & 0xA00000) != 0xA00000 )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockSharedEx(v10 + 40, 0LL);
        BYTE1(CurrentThread[1].Queue) |= 0x40u;
        if ( (*(_DWORD *)(v10 + 48) & 4) != 0 )
        {
          MiUnlockVadShared((__int64)CurrentThread, v10);
        }
        else
        {
          if ( v5 >= 0xD )
          {
            Pool = MiAllocatePool(256, 0x70uLL, 0x7356694Du);
            v2 = Pool;
            if ( !Pool )
            {
              MiUnlockVadShared((__int64)CurrentThread, v10);
              break;
            }
            v5 = 0;
            if ( v3 )
              *v21 = Pool;
            else
              v3 = Pool;
            v21 = Pool;
          }
          v14 = v5++;
          v2[v14 + 1] = v10;
          if ( !_InterlockedIncrement((volatile signed __int32 *)(v10 + 36)) )
            __fastfail(0xEu);
          MiUnlockVadShared((__int64)CurrentThread, v10);
          --v6;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    v15 = 1;
    if ( v3 )
    {
      do
      {
        v16 = v3 + 1;
        v22 = (_QWORD *)*v3;
        for ( k = 0; k < 0xD; ++k )
        {
          v18 = *v16;
          if ( !*v16 )
            break;
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx(v18 + 40, 0LL);
          LOBYTE(CurrentThread[1].Queue) |= 0x80u;
          if ( (*(_DWORD *)(v18 + 48) & 4) == 0 && v15 )
            v15 = MiScrubLargeMappedPage(a1, Process, v18);
          MiUnlockAndDereferenceVad((char *)v18);
          ++v16;
        }
        ExFreePoolWithTag(v3, 0);
        v3 = v22;
      }
      while ( v22 );
    }
  }
  return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
}
