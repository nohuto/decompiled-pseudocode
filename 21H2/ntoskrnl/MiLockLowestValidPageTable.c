/*
 * XREFs of MiLockLowestValidPageTable @ 0x14027D6E0
 * Callers:
 *     MiTranslatePageForCopy @ 0x14026C808 (MiTranslatePageForCopy.c)
 *     MiSynchronizeSystemVa @ 0x140279DB0 (MiSynchronizeSystemVa.c)
 *     MiTrimSharedPageFromViews @ 0x14027B820 (MiTrimSharedPageFromViews.c)
 *     MiReacquireWalkLocks @ 0x14027D2D8 (MiReacquireWalkLocks.c)
 *     MiRelockFaultState @ 0x14027D364 (MiRelockFaultState.c)
 *     MiDeleteSystemPagableVm @ 0x14027E810 (MiDeleteSystemPagableVm.c)
 *     MiConvertAndFlushWsleVas @ 0x14027FD04 (MiConvertAndFlushWsleVas.c)
 *     NtUnlockVirtualMemory @ 0x1402CD9C0 (NtUnlockVirtualMemory.c)
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 *     MiLockStealUserVm @ 0x1402EACBC (MiLockStealUserVm.c)
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiLockPoolCommitPageTable @ 0x1403528A4 (MiLockPoolCommitPageTable.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140374BBC (MiDeprioritizeVirtualAddresses.c)
 *     MiSplitReducedCommitClonePage @ 0x1405845D4 (MiSplitReducedCommitClonePage.c)
 *     MiSetGraphicsPtes @ 0x14058C874 (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x14058D310 (MiSetPagesModified.c)
 *     MmUpdateUserShadowStackValue @ 0x1405A7A98 (MmUpdateUserShadowStackValue.c)
 *     MiProtectAweRegion @ 0x1405ABD20 (MiProtectAweRegion.c)
 *     MiComputeIdealLargePage @ 0x1405C1218 (MiComputeIdealLargePage.c)
 *     MiScrubLargeMappedPage @ 0x1405C4FB8 (MiScrubLargeMappedPage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiPerformSafePdeWrite @ 0x14025D6C0 (MiPerformSafePdeWrite.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 */

unsigned __int64 __fastcall MiLockLowestValidPageTable(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rsi
  __int64 Process; // rcx
  __int64 i; // rdi
  unsigned __int64 v9; // rbx
  signed __int64 v10; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // [rsp+20h] [rbp-48h]
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]
  unsigned __int64 v17; // [rsp+30h] [rbp-38h]
  __int64 v18; // [rsp+38h] [rbp-30h]

  *a3 = 0LL;
  v15 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v17 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 0xFFFFF6FB7DBEDF68uLL;
  MiLockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL, 0LL);
  for ( i = 2LL; ; --i )
  {
    v9 = *(&v15 + i);
    v10 = *(_QWORD *)v9;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Process + 912) != 1 )
      {
        if ( (v10 & 1) == 0 )
          break;
        if ( (v10 & 0x20) == 0 || (v10 & 0x42) == 0 )
        {
          Process = (__int64)KeGetCurrentThread()->ApcState.Process;
          v12 = *(_QWORD *)(Process + 1928);
          if ( v12 )
          {
            v13 = *(_QWORD *)(v12 + 8 * ((v9 >> 3) & 0x1FF));
            v14 = v10 | 0x20;
            Process = (unsigned __int8)v13;
            LOBYTE(Process) = v13 & 0x20;
            if ( (v13 & 0x20) == 0 )
              v14 = *(_QWORD *)v9;
            v10 = v14;
            if ( (v13 & 0x42) != 0 )
              v10 = v14 | 0x42;
          }
        }
      }
    }
    if ( (v10 & 1) == 0 || (v10 & 0x80u) != 0LL )
      break;
    if ( (v10 & 0x20) == 0 )
      MiPerformSafePdeWrite(Process, (volatile signed __int64 *)*(&v15 + i), v10, 1);
    if ( v9 != v6 )
    {
      MiLockPageTableInternal(a1, v9, 0LL);
      MiUnlockPageTableInternal(a1, v6);
      v6 = v9;
    }
    if ( !i )
    {
      *a3 = a2;
      return v6;
    }
  }
  *a3 = v9;
  return v6;
}
