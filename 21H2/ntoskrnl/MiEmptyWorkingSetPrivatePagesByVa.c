/*
 * XREFs of MiEmptyWorkingSetPrivatePagesByVa @ 0x140373BAC
 * Callers:
 *     MiFlushAllPages @ 0x14038A880 (MiFlushAllPages.c)
 *     MmProcessWorkingSetControl @ 0x1407F5540 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiEmptyWorkingSetInitiate @ 0x140256548 (MiEmptyWorkingSetInitiate.c)
 *     MiUnlockVad @ 0x140281C44 (MiUnlockVad.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14030EA00 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadMapsLargeImage @ 0x14030EC40 (MiVadMapsLargeImage.c)
 *     MiVadSupportsPrivateCommit @ 0x14032E910 (MiVadSupportsPrivateCommit.c)
 */

__int64 __fastcall MiEmptyWorkingSetPrivatePagesByVa(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rbp
  _QWORD *v6; // rax
  unsigned int v7; // edi
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  unsigned __int64 v11; // rcx

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(Process + 1224, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  if ( (*(_DWORD *)(Process + 1124) & 0x20) != 0 )
  {
    v7 = -1073741558;
  }
  else
  {
    v6 = *(_QWORD **)(Process + 2008);
    v7 = 0;
    v8 = 0LL;
    while ( v6 )
    {
      v8 = (unsigned __int64)v6;
      v6 = (_QWORD *)*v6;
    }
    while ( v8 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v8 + 40, 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 0x80u;
      if ( (*(_DWORD *)(v8 + 48) & 4) == 0 && MiVadSupportsPrivateCommit(v8) && !MiVadMapsLargeImage(v8) )
        MiEmptyWorkingSetInitiate(
          a1,
          a2 | 2,
          (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) << 12,
          ((*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) << 12) | 0xFFF);
      MiUnlockVad((__int64)CurrentThread, v8);
      v10 = *(_QWORD **)(v8 + 8);
      v11 = v8;
      if ( v10 )
      {
        v9 = (_QWORD *)*v10;
        v8 = *(_QWORD *)(v8 + 8);
        if ( *v10 )
        {
          do
          {
            v8 = (unsigned __int64)v9;
            v9 = (_QWORD *)*v9;
          }
          while ( v9 );
        }
      }
      else
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v8 || *(_QWORD *)v8 == v11 )
            break;
          v11 = v8;
        }
      }
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  return v7;
}
