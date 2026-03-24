/*
 * XREFs of MiScrubProcessLargePages @ 0x1405644F4
 * Callers:
 *     MiScrubProcesses @ 0x1408DC010 (MiScrubProcesses.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     MiUnlockAndDereferenceVad @ 0x14021AF80 (MiUnlockAndDereferenceVad.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     MiUnlockVadShared @ 0x14025B10C (MiUnlockVadShared.c)
 *     MiIsVadLargePrivate @ 0x1402AD514 (MiIsVadLargePrivate.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140348790 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     MiScrubLargeMappedPage @ 0x140563A88 (MiScrubLargeMappedPage.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiScrubProcessLargePages(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 Process; // r15
  int v3; // r12d
  _QWORD *v4; // rbp
  _QWORD *v5; // r13
  _QWORD *v6; // rax
  _QWORD *i; // rdi
  unsigned int v8; // r14d
  _QWORD **v9; // rax
  __int64 v10; // rsi
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *Pool; // rax
  __int64 v14; // rax
  int v15; // r12d
  __int64 *v16; // rsi
  unsigned int j; // ebp
  __int64 v18; // rdi
  _QWORD *v21; // [rsp+68h] [rbp+10h]
  _QWORD *v22; // [rsp+68h] [rbp+10h]

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
    v3 = *(_DWORD *)(Process + 2140);
    v4 = 0LL;
    v21 = 0LL;
    v5 = 0LL;
    v6 = *(_QWORD **)(Process + 2008);
    i = 0LL;
    v8 = 13;
    while ( v6 )
    {
      i = v6;
      v6 = (_QWORD *)*v6;
    }
    while ( v3 && i )
    {
      v9 = (_QWORD **)i[1];
      v10 = (__int64)i;
      v11 = i;
      if ( v9 )
      {
        v12 = *v9;
        for ( i = (_QWORD *)i[1]; v12; v12 = (_QWORD *)*v12 )
          i = v12;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v11 )
            break;
          v11 = i;
        }
      }
      if ( MiIsVadLargePrivate(v10) && (*(_DWORD *)(v10 + 48) & 0x500000) != 0x500000 )
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
          if ( v8 >= 0xD )
          {
            Pool = MiAllocatePool(256, 0x70uLL, 0x7356694Du);
            v4 = Pool;
            if ( !Pool )
            {
              MiUnlockVadShared((__int64)CurrentThread, v10);
              break;
            }
            v8 = 0;
            if ( v5 )
              *v21 = Pool;
            else
              v5 = Pool;
            v21 = Pool;
          }
          v14 = v8++;
          v4[v14 + 1] = v10;
          if ( !_InterlockedIncrement((volatile signed __int32 *)(v10 + 36)) )
            __fastfail(0xEu);
          MiUnlockVadShared((__int64)CurrentThread, v10);
          --v3;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    v15 = 1;
    if ( v5 )
    {
      do
      {
        v16 = v5 + 1;
        v22 = (_QWORD *)*v5;
        for ( j = 0; j < 0xD; ++j )
        {
          v18 = *v16;
          if ( !*v16 )
            break;
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx(v18 + 40, 0LL);
          LOBYTE(CurrentThread[1].Queue) |= 0x80u;
          if ( (*(_DWORD *)(v18 + 48) & 4) == 0 && v15 == 1 )
            v15 = MiScrubLargeMappedPage(a1, Process, v18);
          MiUnlockAndDereferenceVad((char *)v18);
          ++v16;
        }
        ExFreePoolWithTag(v5, 0);
        v5 = v22;
      }
      while ( v22 );
    }
  }
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
