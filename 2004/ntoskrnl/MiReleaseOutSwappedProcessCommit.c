/*
 * XREFs of MiReleaseOutSwappedProcessCommit @ 0x140527238
 * Callers:
 *     MmOutSwapProcess @ 0x140280DDC (MmOutSwapProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14024ADB4 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x14024AFC0 (MiUnlockVad.c)
 *     KeForceAttachProcess @ 0x14024D7DC (KeForceAttachProcess.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     SmStoreExistsForProcess @ 0x1402CCAB8 (SmStoreExistsForProcess.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KeForceDetachProcess @ 0x140346394 (KeForceDetachProcess.c)
 *     MiCheckCommitReleaseFromVad @ 0x140525C3C (MiCheckCommitReleaseFromVad.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1405261D8 (MiIsVadEligibleForCommitRelease.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1405263B0 (MiLogOutswappedProcessCommitRelease.c)
 *     SmQueryStoreCommitUsage @ 0x140597AF0 (SmQueryStoreCommitUsage.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseOutSwappedProcessCommit(ULONG_PTR a1)
{
  LONG *SharedVm; // rax
  __int64 v3; // r8
  LONG *v4; // r13
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *Pool; // r15
  LONG *v7; // rbx
  KIRQL v8; // al
  __int64 v9; // rdi
  __int64 v10; // rbx
  BOOL v11; // r12d
  unsigned __int64 v12; // r13
  _QWORD *v13; // rax
  _QWORD *i; // rdi
  __int64 v15; // rbx
  _QWORD **v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  unsigned __int64 v19; // rdx
  LONG *v20; // rbx
  KIRQL v21; // al
  int v22; // ecx
  char v23; // cl
  __int64 v24; // [rsp+70h] [rbp+8h]
  unsigned __int64 v25; // [rsp+78h] [rbp+10h] BYREF
  LONG *v26; // [rsp+80h] [rbp+18h]

  v25 = 0LL;
  KeForceAttachProcess(a1, 0LL);
  SharedVm = MiGetSharedVm(a1 + 1664);
  v3 = *(unsigned __int16 *)(a1 + 1838);
  v4 = SharedVm;
  CurrentThread = KeGetCurrentThread();
  v26 = SharedVm;
  v24 = *(_QWORD *)(qword_140C4E448 + 8 * v3);
  Pool = MiAllocatePool(64, 0x38uLL, 0x7243694Du);
  if ( Pool )
  {
    v7 = MiGetSharedVm(a1 + 1664);
    v8 = ExAcquireSpinLockExclusive(v7);
    v7[1] = 0;
    *(_BYTE *)(a1 + 1851) |= 0x60u;
    MiUnlockWorkingSetExclusive(a1 + 1664, v8);
    v9 = 1LL;
    if ( dword_140CFB1D0 != 1 )
    {
      v10 = v24;
      v11 = 0;
      v12 = 0LL;
      if ( *(_DWORD *)(v24 + 1160) )
        v11 = SmStoreExistsForProcess();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 1224, 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 1u;
      v13 = *(_QWORD **)(a1 + 2008);
      i = 0LL;
      while ( v13 )
      {
        i = v13;
        v13 = (_QWORD *)*v13;
      }
      while ( i )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(i + 5), 0LL);
        LOBYTE(CurrentThread[1].Queue) |= 0x80u;
        if ( MiIsVadEligibleForCommitRelease((__int64)i) )
        {
          v15 = MiCheckCommitReleaseFromVad(v10, a1, a1 + 1664, (__int64)i, v11, Pool + 4);
          MiUnlockVad((__int64)CurrentThread, (__int64)i);
          v12 += v15;
          v10 = v24;
        }
        else
        {
          MiUnlockVad((__int64)CurrentThread, (__int64)i);
        }
        v16 = (_QWORD **)i[1];
        v17 = i;
        if ( v16 )
        {
          v18 = *v16;
          for ( i = (_QWORD *)i[1]; v18; v18 = (_QWORD *)*v18 )
            i = v18;
        }
        else
        {
          while ( 1 )
          {
            i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || (_QWORD *)*i == v17 )
              break;
            v17 = i;
          }
        }
      }
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
      v9 = v12;
      _InterlockedExchange64((volatile __int64 *)(a1 + 1872), 0LL);
      if ( v11 )
      {
        SmQueryStoreCommitUsage(a1, &v25);
        v19 = ((v25 & 0xFFF) != 0) + (v25 >> 12);
        v25 = v19;
        if ( v12 <= v19 )
          v9 = 0LL;
        else
          v9 = v12 - v19;
      }
      if ( v9 )
        MiReturnCommit(v10, v9);
      v4 = v26;
    }
    v20 = MiGetSharedVm(a1 + 1664);
    v21 = ExAcquireSpinLockExclusive(v20);
    v20[1] = 0;
    v22 = *(_DWORD *)(a1 + 1848);
    if ( v9 )
    {
      *((_QWORD *)v4 + 4) = Pool;
      v23 = HIBYTE(v22) & 0x9F | 0x40;
      *((_QWORD *)v4 + 1) = v9;
      Pool = 0LL;
    }
    else
    {
      v23 = HIBYTE(v22) & 0x9F;
    }
    *(_BYTE *)(a1 + 1851) = v23;
    MiUnlockWorkingSetExclusive(a1 + 1664, v21);
    MiLogOutswappedProcessCommitRelease(a1, v9);
  }
  KeForceDetachProcess(0LL, 0);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
}
