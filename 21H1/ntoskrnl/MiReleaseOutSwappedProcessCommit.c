/*
 * XREFs of MiReleaseOutSwappedProcessCommit @ 0x140526BE8
 * Callers:
 *     MmOutSwapProcess @ 0x1402446DC (MmOutSwapProcess.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     SmStoreExistsForProcess @ 0x140239C88 (SmStoreExistsForProcess.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1402A3DE4 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1402A3FF0 (MiUnlockVad.c)
 *     KeForceAttachProcess @ 0x1402A680C (KeForceAttachProcess.c)
 *     KeForceDetachProcess @ 0x140308594 (KeForceDetachProcess.c)
 *     MiCheckCommitReleaseFromVad @ 0x1405255EC (MiCheckCommitReleaseFromVad.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140525B88 (MiIsVadEligibleForCommitRelease.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x140525D60 (MiLogOutswappedProcessCommitRelease.c)
 *     SmQueryStoreCommitUsage @ 0x140597400 (SmQueryStoreCommitUsage.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseOutSwappedProcessCommit(ULONG_PTR a1)
{
  LONG *SharedVm; // rax
  __int64 v3; // r8
  LONG *v4; // r13
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // r8
  _DWORD *v7; // r9
  _QWORD *Pool; // r15
  LONG *v9; // rbx
  KIRQL v10; // al
  __int64 v11; // rdi
  __int64 v12; // rbx
  BOOL v13; // r12d
  unsigned __int64 v14; // r13
  _QWORD *v15; // rax
  _QWORD *i; // rdi
  __int64 v17; // rbx
  _QWORD **v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rdx
  LONG *v22; // rbx
  KIRQL v23; // al
  int v24; // ecx
  char v25; // cl
  __int64 v26; // [rsp+70h] [rbp+8h]
  unsigned __int64 v27; // [rsp+78h] [rbp+10h] BYREF
  LONG *v28; // [rsp+80h] [rbp+18h]

  v27 = 0LL;
  KeForceAttachProcess(a1, 0LL);
  SharedVm = MiGetSharedVm(a1 + 1664);
  v3 = *(unsigned __int16 *)(a1 + 1838);
  v4 = SharedVm;
  CurrentThread = KeGetCurrentThread();
  v28 = SharedVm;
  v26 = *(_QWORD *)(qword_140C4E588 + 8 * v3);
  Pool = MiAllocatePool(64, 0x38uLL, 0x7243694Du);
  if ( Pool )
  {
    v9 = MiGetSharedVm(a1 + 1664);
    v10 = ExAcquireSpinLockExclusive(v9);
    v9[1] = 0;
    *(_BYTE *)(a1 + 1851) |= 0x60u;
    MiUnlockWorkingSetExclusive(a1 + 1664, v10);
    v11 = 1LL;
    if ( dword_140CFB1D0 != 1 )
    {
      v12 = v26;
      v13 = 0;
      v14 = 0LL;
      if ( *(_DWORD *)(v26 + 1160) )
        v13 = SmStoreExistsForProcess();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 1224, 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 1u;
      v15 = *(_QWORD **)(a1 + 2008);
      i = 0LL;
      while ( v15 )
      {
        i = v15;
        v15 = (_QWORD *)*v15;
      }
      while ( i )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(i + 5), 0LL);
        LOBYTE(CurrentThread[1].Queue) |= 0x80u;
        if ( MiIsVadEligibleForCommitRelease((__int64)i) )
        {
          v17 = MiCheckCommitReleaseFromVad(v12, a1, a1 + 1664, (__int64)i, v13, Pool + 4);
          MiUnlockVad((__int64)CurrentThread, (__int64)i);
          v14 += v17;
          v12 = v26;
        }
        else
        {
          MiUnlockVad((__int64)CurrentThread, (__int64)i);
        }
        v18 = (_QWORD **)i[1];
        v19 = i;
        if ( v18 )
        {
          v20 = *v18;
          for ( i = (_QWORD *)i[1]; v20; v20 = (_QWORD *)*v20 )
            i = v20;
        }
        else
        {
          while ( 1 )
          {
            i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || (_QWORD *)*i == v19 )
              break;
            v19 = i;
          }
        }
      }
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
      v11 = v14;
      _InterlockedExchange64((volatile __int64 *)(a1 + 1872), 0LL);
      if ( v13 )
      {
        SmQueryStoreCommitUsage(a1, &v27);
        v21 = ((v27 & 0xFFF) != 0) + (v27 >> 12);
        v27 = v21;
        if ( v14 <= v21 )
          v11 = 0LL;
        else
          v11 = v14 - v21;
      }
      if ( v11 )
        MiReturnCommit(v12, v11);
      v4 = v28;
    }
    v22 = MiGetSharedVm(a1 + 1664);
    v23 = ExAcquireSpinLockExclusive(v22);
    v22[1] = 0;
    v24 = *(_DWORD *)(a1 + 1848);
    if ( v11 )
    {
      *((_QWORD *)v4 + 4) = Pool;
      v25 = HIBYTE(v24) & 0x9F | 0x40;
      *((_QWORD *)v4 + 1) = v11;
      Pool = 0LL;
    }
    else
    {
      v25 = HIBYTE(v24) & 0x9F;
    }
    *(_BYTE *)(a1 + 1851) = v25;
    MiUnlockWorkingSetExclusive(a1 + 1664, v23);
    MiLogOutswappedProcessCommitRelease(a1, v11);
  }
  KeForceDetachProcess(0LL, 0, v6, v7);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
}
