/*
 * XREFs of MiLockLowestValidPageTable @ 0x1402ACFF0
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14020B270 (MiWalkPageTablesRecursively.c)
 *     MiCommitExistingVad @ 0x140218720 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     MiSynchronizeSystemVa @ 0x14022B050 (MiSynchronizeSystemVa.c)
 *     MiDeleteSystemPagableVm @ 0x1402AB670 (MiDeleteSystemPagableVm.c)
 *     MiRelockFaultState @ 0x1402ACF4C (MiRelockFaultState.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     NtUnlockVirtualMemory @ 0x1402AF520 (NtUnlockVirtualMemory.c)
 *     MiLockPoolCommitPageTable @ 0x1402B1880 (MiLockPoolCommitPageTable.c)
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 *     MiTranslatePageForCopy @ 0x140302DD4 (MiTranslatePageForCopy.c)
 *     MiConvertAndFlushWsleVas @ 0x140305480 (MiConvertAndFlushWsleVas.c)
 *     MiGetWorkingSetInfoList @ 0x140347A3C (MiGetWorkingSetInfoList.c)
 *     MiLockStealUserVm @ 0x14034C738 (MiLockStealUserVm.c)
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 *     MiReacquireWalkLocks @ 0x14052ABC0 (MiReacquireWalkLocks.c)
 *     MiSplitReducedCommitClonePage @ 0x14052B274 (MiSplitReducedCommitClonePage.c)
 *     MiSetGraphicsPtes @ 0x14052EB1C (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x14052F590 (MiSetPagesModified.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140530BAC (MiDeprioritizeVirtualAddresses.c)
 *     MiProtectAweRegion @ 0x140547844 (MiProtectAweRegion.c)
 *     MiScrubLargeMappedPage @ 0x14055DF98 (MiScrubLargeMappedPage.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiPerformSafePdeWrite @ 0x14037E97C (MiPerformSafePdeWrite.c)
 */

unsigned __int64 __fastcall MiLockLowestValidPageTable(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rsi
  _KPROCESS *Process; // rcx
  __int64 i; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // r8
  struct _LIST_ENTRY *Flink; // rdx
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
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        if ( (v10 & 1) == 0 )
          break;
        if ( (v10 & 0x20) == 0 || (v10 & 0x42) == 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          Flink = Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v13 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
            v14 = v10 | 0x20;
            Process = (_KPROCESS *)(unsigned __int8)v13;
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
      MiPerformSafePdeWrite(Process, *(&v15 + i), v10, 1LL);
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
