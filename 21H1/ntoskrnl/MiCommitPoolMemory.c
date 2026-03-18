/*
 * XREFs of MiCommitPoolMemory @ 0x1402B16DC
 * Callers:
 *     MmAllocatePoolMemory @ 0x1402B1588 (MmAllocatePoolMemory.c)
 *     MmAllocateSecurePoolMemory @ 0x14053F29C (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiLinkPoolCommitChain @ 0x140222320 (MiLinkPoolCommitChain.c)
 *     MiFillPoolCommitPageTable @ 0x140223CC0 (MiFillPoolCommitPageTable.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402A9A00 (MiMakeZeroedPageTablesEx.c)
 *     MiLockPoolCommitPageTable @ 0x1402B1880 (MiLockPoolCommitPageTable.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     MiUnlockPoolCommitWs @ 0x1402B1A28 (MiUnlockPoolCommitWs.c)
 *     MiLockPoolCommitWs @ 0x1402B1A78 (MiLockPoolCommitWs.c)
 *     MiReturnExcessPoolCommit @ 0x1402B1AB4 (MiReturnExcessPoolCommit.c)
 *     MiCountSystemPool @ 0x1402B1B40 (MiCountSystemPool.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     MiClearNonPagedPtes @ 0x1402F1DCC (MiClearNonPagedPtes.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14052BAFC (MiLogPerfMemoryRangeEvent.c)
 */

__int64 __fastcall MiCommitPoolMemory(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  unsigned int v7; // edx
  __int64 v9; // r8
  __int64 v10; // r9

  v2 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiLockPoolCommitWs(a1);
  v3 = 0;
  while ( v2 <= *(_QWORD *)(a1 + 56) )
  {
    v5 = *(_QWORD *)(a1 + 64);
    if ( v5 )
    {
      MiUnlockPageTableInternal(*(_QWORD *)(a1 + 48), v5);
      *(_QWORD *)(a1 + 64) = 0LL;
    }
    if ( *(_BYTE *)(a1 + 76) < 2u
      && ((unsigned int)MiWorkingSetIsContended(*(_QWORD *)(a1 + 48)) || KeShouldYieldProcessor()) )
    {
      MiUnlockPoolCommitWs(a1);
      MiLockPoolCommitWs(a1);
    }
    v6 = v2 & 0xFFFFFFFFFFFFF000uLL;
    if ( (unsigned int)MiLockPoolCommitPageTable(a1, v2) )
    {
      MiLinkPoolCommitChain(a1, v2);
      v2 = v6 + 4096;
    }
    else
    {
      MiUnlockPoolCommitWs(a1);
      v4 = v6 + 4088;
      if ( v6 + 4088 > *(_QWORD *)(a1 + 56) )
        v4 = *(_QWORD *)(a1 + 56);
      if ( !(unsigned int)MiMakeZeroedPageTablesEx(
                            v2,
                            v4,
                            (*(_WORD *)(a1 + 78) & 4 | 0x400u) >> 1,
                            *(_DWORD *)(a1 + 40),
                            *(_DWORD *)(a1 + 72) + 1) )
      {
        *(_WORD *)(a1 + 78) |= 1u;
        MiLockPoolCommitWs(a1);
        break;
      }
      MiLockPoolCommitWs(a1);
    }
  }
  MiFillPoolCommitPageTable(a1);
  MiUnlockPoolCommitWs(a1);
  v7 = *(unsigned __int16 *)(a1 + 78);
  if ( (v7 & 1) != 0 )
  {
    if ( (v7 & 2) == 0 )
    {
      v9 = (*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL;
      if ( v2 != v9 - 0x98000000000LL )
      {
        v10 = (v7 >> 2) & 1 | 2;
        if ( (v7 & 0x100) == 0 )
          v10 = (v7 >> 2) & 1;
        MiClearNonPagedPtes(*(_QWORD *)a1, (__int64)(v2 - v9 + 0x98000000000LL) >> 3, 0x4000LL, v10);
      }
    }
    v3 = -1073741670;
  }
  else
  {
    if ( (v7 & 0x104) == 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogPerfMemoryRangeEvent(*(_QWORD *)a1, 0LL, 11LL, *(_QWORD *)(a1 + 8));
    MiCountSystemPool(*(unsigned int *)(a1 + 40), *(_QWORD *)(a1 + 24), 1LL);
  }
  MiReturnExcessPoolCommit(a1);
  return v3;
}
