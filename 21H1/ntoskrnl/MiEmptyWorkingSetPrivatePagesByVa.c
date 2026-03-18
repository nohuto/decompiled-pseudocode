/*
 * XREFs of MiEmptyWorkingSetPrivatePagesByVa @ 0x14030C194
 * Callers:
 *     MiFlushAllPages @ 0x14037F554 (MiFlushAllPages.c)
 *     MmProcessWorkingSetControl @ 0x1406D0FA0 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiVadSupportsPrivateCommit @ 0x14021AA60 (MiVadSupportsPrivateCommit.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140264380 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadMapsLargeImage @ 0x14026C490 (MiVadMapsLargeImage.c)
 *     MiUnlockVad @ 0x1402A3FF0 (MiUnlockVad.c)
 *     MiEmptyWorkingSetInitiate @ 0x14030C2FC (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyWorkingSetPrivatePagesByVa(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rbp
  _QWORD *v6; // rax
  unsigned int v7; // edi
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  unsigned __int64 v12; // rcx

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
      if ( (*(_DWORD *)(v8 + 48) & 4) == 0 && MiVadSupportsPrivateCommit(v8) && !MiVadMapsLargeImage(v10) )
        MiEmptyWorkingSetInitiate(
          a1,
          a2 | 2u,
          (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) << 12,
          ((*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) << 12) | 0xFFF);
      MiUnlockVad((__int64)CurrentThread, v8);
      v11 = *(_QWORD **)(v8 + 8);
      v12 = v8;
      if ( v11 )
      {
        v9 = (_QWORD *)*v11;
        v8 = *(_QWORD *)(v8 + 8);
        if ( *v11 )
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
          if ( !v8 || *(_QWORD *)v8 == v12 )
            break;
          v12 = v8;
        }
      }
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  return v7;
}
