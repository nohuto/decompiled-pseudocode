/*
 * XREFs of MiReleaseCommitForResetPages @ 0x140527084
 * Callers:
 *     MmOutSwapProcess @ 0x140280DDC (MmOutSwapProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14024ADB4 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x14024AFC0 (MiUnlockVad.c)
 *     KeForceAttachProcess @ 0x14024D7DC (KeForceAttachProcess.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KeForceDetachProcess @ 0x140346394 (KeForceDetachProcess.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1405261D8 (MiIsVadEligibleForCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1405264D0 (MiLogResetPagesCommitRelease.c)
 *     MiWalkResetCommitPages @ 0x140527628 (MiWalkResetCommitPages.c)
 */

LONG __fastcall MiReleaseCommitForResetPages(ULONG_PTR a1)
{
  LONG *SharedVm; // rax
  struct _KTHREAD *CurrentThread; // rdi
  LONG *v4; // r15
  __int64 v5; // r14
  _QWORD *v6; // rax
  _QWORD *i; // rbx
  _QWORD **v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rdi
  LONG *v12; // rbx
  KIRQL v13; // al
  struct _KEVENT *v14; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx

  KeForceAttachProcess(a1, 0LL);
  SharedVm = MiGetSharedVm(a1 + 1664);
  CurrentThread = KeGetCurrentThread();
  v4 = SharedVm;
  v5 = *((_QWORD *)SharedVm + 4);
  if ( (*(_DWORD *)(v5 + 48) & 1) != 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 1224, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 1u;
    v6 = *(_QWORD **)(a1 + 2008);
    i = 0LL;
    while ( v6 )
    {
      i = v6;
      v6 = (_QWORD *)*v6;
    }
    while ( i )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(i + 5), 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 0x80u;
      if ( MiIsVadEligibleForCommitRelease((__int64)i) )
        MiWalkResetCommitPages(i);
      MiUnlockVad((__int64)CurrentThread, (__int64)i);
      v8 = (_QWORD **)i[1];
      v9 = i;
      if ( v8 )
      {
        v10 = *v8;
        for ( i = (_QWORD *)i[1]; v10; v10 = (_QWORD *)*v10 )
          i = v10;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v9 )
            break;
          v9 = i;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  }
  v11 = _InterlockedExchange64((volatile __int64 *)(a1 + 1872), 0LL);
  if ( v11 )
    MiReturnCommit(*(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(a1 + 1838)), v11);
  v12 = MiGetSharedVm(a1 + 1664);
  v13 = ExAcquireSpinLockExclusive(v12);
  v12[1] = 0;
  v14 = *(struct _KEVENT **)(v5 + 40);
  *(_QWORD *)(v5 + 40) = 0LL;
  v15 = *(_QWORD *)(v5 + 32);
  if ( v15 <= v11 )
    v16 = 0LL;
  else
    v16 = v15 - v11;
  *(_QWORD *)(v5 + 32) = v16;
  *((_QWORD *)v4 + 1) += v11;
  MiUnlockWorkingSetExclusive(a1 + 1664, v13);
  MiLogResetPagesCommitRelease();
  KeForceDetachProcess(0LL, 0);
  return KeSetEvent(v14, 0, 0);
}
