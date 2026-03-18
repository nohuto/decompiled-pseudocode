/*
 * XREFs of MiReleaseOutSwappedProcessCommit @ 0x14052AC08
 * Callers:
 *     MmOutSwapProcess @ 0x1402DD934 (MmOutSwapProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1402304A4 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1402306B0 (MiUnlockVad.c)
 *     SmStoreExistsForProcess @ 0x140253B60 (SmStoreExistsForProcess.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KeForceAttachProcess @ 0x1402D6F38 (KeForceAttachProcess.c)
 *     KeForceDetachProcess @ 0x140317684 (KeForceDetachProcess.c)
 *     MiCheckCommitReleaseFromVad @ 0x14052960C (MiCheckCommitReleaseFromVad.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140529BA8 (MiIsVadEligibleForCommitRelease.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x140529D80 (MiLogOutswappedProcessCommitRelease.c)
 *     SmQueryStoreCommitUsage @ 0x14059B590 (SmQueryStoreCommitUsage.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  v24 = *(_QWORD *)(qword_140C4E4C8 + 8 * v3);
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
