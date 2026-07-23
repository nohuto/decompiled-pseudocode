/*
 * XREFs of MiEmptyWorkingSetPrivatePagesByVa @ 0x14029F008
 * Callers:
 *     MiFlushAllPages @ 0x140384834 (MiFlushAllPages.c)
 *     MmProcessWorkingSetControl @ 0x1406BD464 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiEmptyWorkingSetInitiate @ 0x14029F170 (MiEmptyWorkingSetInitiate.c)
 *     MiVadSupportsPrivateCommit @ 0x1402BFB40 (MiVadSupportsPrivateCommit.c)
 *     MiVadMapsLargeImage @ 0x1402C1520 (MiVadMapsLargeImage.c)
 *     MiUnlockVad @ 0x14031F3A8 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403534E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiEmptyWorkingSetPrivatePagesByVa(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  _QWORD *v6; // rax
  unsigned int v7; // edi
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  unsigned __int64 v11; // rcx

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1].Affinity.Bitmap[7], 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v7 = -1073741558;
  }
  else
  {
    v6 = *(_QWORD **)&Process[1].Spare2[15];
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
      if ( (*(_DWORD *)(v8 + 48) & 4) == 0
        && (unsigned int)MiVadSupportsPrivateCommit(v8)
        && !(unsigned int)MiVadMapsLargeImage() )
      {
        MiEmptyWorkingSetInitiate(
          a1,
          a2 | 2u,
          (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) << 12);
      }
      MiUnlockVad(CurrentThread, v8);
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
  UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
  return v7;
}
