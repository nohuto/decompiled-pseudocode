/*
 * XREFs of MiScrubProcessLargePages @ 0x140564734
 * Callers:
 *     MiScrubProcesses @ 0x1408DC170 (MiScrubProcesses.c)
 * Callees:
 *     MiIsVadLargePrivate @ 0x14022B870 (MiIsVadLargePrivate.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiUnlockVadShared @ 0x14027C67C (MiUnlockVadShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403534E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     MiScrubLargeMappedPage @ 0x140563CC8 (MiScrubLargeMappedPage.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiScrubProcessLargePages(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 Process; // r15
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // r12d
  _QWORD *v7; // rbp
  _QWORD *v8; // r13
  _QWORD *v9; // rax
  _QWORD *i; // rdi
  unsigned int v11; // r14d
  _QWORD **v12; // rax
  __int64 v13; // rsi
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  _QWORD *Pool; // rax
  __int64 v17; // rax
  int v18; // r12d
  __int64 *v19; // rsi
  unsigned int j; // ebp
  __int64 v21; // rdi
  _QWORD *v24; // [rsp+68h] [rbp+10h]
  _QWORD *v25; // [rsp+68h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
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
    v7 = 0LL;
    v24 = 0LL;
    v8 = 0LL;
    v9 = *(_QWORD **)(Process + 2008);
    i = 0LL;
    v11 = 13;
    while ( v9 )
    {
      i = v9;
      v9 = (_QWORD *)*v9;
    }
    while ( v6 && i )
    {
      v12 = (_QWORD **)i[1];
      v13 = (__int64)i;
      v14 = i;
      if ( v12 )
      {
        v15 = *v12;
        for ( i = (_QWORD *)i[1]; v15; v15 = (_QWORD *)*v15 )
          i = v15;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v14 )
            break;
          v14 = i;
        }
      }
      if ( (unsigned int)MiIsVadLargePrivate(v13) && (*(_DWORD *)(v13 + 48) & 0x500000) != 0x500000 )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockSharedEx(v13 + 40, 0LL);
        BYTE1(CurrentThread[1].Queue) |= 0x40u;
        if ( (*(_DWORD *)(v13 + 48) & 4) != 0 )
        {
          MiUnlockVadShared((__int64)CurrentThread, v13);
        }
        else
        {
          if ( v11 >= 0xD )
          {
            Pool = MiAllocatePool(256, 0x70uLL, 0x7356694Du);
            v7 = Pool;
            if ( !Pool )
            {
              MiUnlockVadShared((__int64)CurrentThread, v13);
              break;
            }
            v11 = 0;
            if ( v8 )
              *v24 = Pool;
            else
              v8 = Pool;
            v24 = Pool;
          }
          v17 = v11++;
          v7[v17 + 1] = v13;
          if ( !_InterlockedIncrement((volatile signed __int32 *)(v13 + 36)) )
            __fastfail(0xEu);
          MiUnlockVadShared((__int64)CurrentThread, v13);
          --v6;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    v18 = 1;
    if ( v8 )
    {
      do
      {
        v19 = v8 + 1;
        v25 = (_QWORD *)*v8;
        for ( j = 0; j < 0xD; ++j )
        {
          v21 = *v19;
          if ( !*v19 )
            break;
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx(v21 + 40, 0LL);
          LOBYTE(CurrentThread[1].Queue) |= 0x80u;
          if ( (*(_DWORD *)(v21 + 48) & 4) == 0 && v18 == 1 )
            v18 = MiScrubLargeMappedPage(a1, Process, v21);
          MiUnlockAndDereferenceVad((char *)v21);
          ++v19;
        }
        ExFreePoolWithTag(v8, 0);
        v8 = v25;
      }
      while ( v25 );
    }
  }
  return KeLeaveCriticalRegionThread((__int64)CurrentThread, v3, v4, v5);
}
