/*
 * XREFs of MiCommitPoolMemory @ 0x1402CAD1C
 * Callers:
 *     MmAllocatePoolMemory @ 0x1402CB684 (MmAllocatePoolMemory.c)
 *     MmAllocateSecurePoolMemory @ 0x1405432BC (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x14024EC1C (MiMakeZeroedPageTablesEx.c)
 *     MiFillPoolCommitPageTable @ 0x1402CA5C0 (MiFillPoolCommitPageTable.c)
 *     MiLockPoolCommitPageTable @ 0x1402CAEC0 (MiLockPoolCommitPageTable.c)
 *     MiLinkPoolCommitChain @ 0x1402CB030 (MiLinkPoolCommitChain.c)
 *     MiWorkingSetIsContended @ 0x1402CB2C0 (MiWorkingSetIsContended.c)
 *     MiUnlockPoolCommitWs @ 0x1402CB2F8 (MiUnlockPoolCommitWs.c)
 *     MiLockPoolCommitWs @ 0x1402CB348 (MiLockPoolCommitWs.c)
 *     MiReturnExcessPoolCommit @ 0x1402CB384 (MiReturnExcessPoolCommit.c)
 *     MiCountSystemPool @ 0x1402CB410 (MiCountSystemPool.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 *     MiClearNonPagedPtes @ 0x140301340 (MiClearNonPagedPtes.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14052FB1C (MiLogPerfMemoryRangeEvent.c)
 */

__int64 __fastcall MiCommitPoolMemory(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 v4; // rdx
  unsigned __int64 v5; // rbp
  unsigned int v6; // edx
  __int64 v8; // r8
  __int64 v9; // r9

  v2 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiLockPoolCommitWs(a1);
  v3 = 0;
  while ( v2 <= *(_QWORD *)(a1 + 56) )
  {
    if ( *(_QWORD *)(a1 + 64) )
    {
      MiUnlockPageTableInternal(*(_QWORD *)(a1 + 48));
      *(_QWORD *)(a1 + 64) = 0LL;
    }
    if ( *(_BYTE *)(a1 + 76) < 2u
      && ((unsigned int)MiWorkingSetIsContended(*(_QWORD *)(a1 + 48)) || KeShouldYieldProcessor()) )
    {
      MiUnlockPoolCommitWs(a1);
      MiLockPoolCommitWs(a1);
    }
    v5 = v2 & 0xFFFFFFFFFFFFF000uLL;
    if ( (unsigned int)MiLockPoolCommitPageTable(a1, v2) )
    {
      MiLinkPoolCommitChain(a1, v2);
      v2 = v5 + 4096;
    }
    else
    {
      MiUnlockPoolCommitWs(a1);
      v4 = v5 + 4088;
      if ( v5 + 4088 > *(_QWORD *)(a1 + 56) )
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
  v6 = *(unsigned __int16 *)(a1 + 78);
  if ( (v6 & 1) != 0 )
  {
    if ( (v6 & 2) == 0 )
    {
      v8 = (*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL;
      if ( v2 != v8 - 0x98000000000LL )
      {
        v9 = (v6 >> 2) & 1 | 2;
        if ( (v6 & 0x100) == 0 )
          v9 = (v6 >> 2) & 1;
        MiClearNonPagedPtes(*(_QWORD *)a1, (__int64)(v2 - v8 + 0x98000000000LL) >> 3, 0x4000LL, v9);
      }
    }
    v3 = -1073741670;
  }
  else
  {
    if ( (v6 & 0x104) == 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogPerfMemoryRangeEvent(*(_QWORD *)a1, 0LL, 11LL, *(_QWORD *)(a1 + 8));
    MiCountSystemPool(*(unsigned int *)(a1 + 40), *(_QWORD *)(a1 + 24), 1LL);
  }
  MiReturnExcessPoolCommit(a1);
  return v3;
}
