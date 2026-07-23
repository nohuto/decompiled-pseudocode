/*
 * XREFs of MiCommitPoolMemory @ 0x140315F7C
 * Callers:
 *     MmAllocatePoolMemory @ 0x140315E28 (MmAllocatePoolMemory.c)
 *     MmAllocateSecurePoolMemory @ 0x140545000 (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiClearNonPagedPtes @ 0x14021AB20 (MiClearNonPagedPtes.c)
 *     MiMakeZeroedPageTablesEx @ 0x140307B4C (MiMakeZeroedPageTablesEx.c)
 *     MiLockPoolCommitPageTable @ 0x140316120 (MiLockPoolCommitPageTable.c)
 *     MiLinkPoolCommitChain @ 0x140316290 (MiLinkPoolCommitChain.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     MiUnlockPoolCommitWs @ 0x140316558 (MiUnlockPoolCommitWs.c)
 *     MiLockPoolCommitWs @ 0x1403165A8 (MiLockPoolCommitWs.c)
 *     MiReturnExcessPoolCommit @ 0x1403165E4 (MiReturnExcessPoolCommit.c)
 *     MiCountSystemPool @ 0x140316670 (MiCountSystemPool.c)
 *     MiFillPoolCommitPageTable @ 0x140316730 (MiFillPoolCommitPageTable.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14053185C (MiLogPerfMemoryRangeEvent.c)
 */

__int64 __fastcall MiCommitPoolMemory(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  unsigned int v7; // edx
  __int64 v9; // r8
  unsigned int v10; // r9d

  v2 = ((*a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  ((void (*)(void))MiLockPoolCommitWs)();
  v3 = 0;
  while ( v2 <= a1[7] )
  {
    v5 = a1[8];
    if ( v5 )
    {
      MiUnlockPageTableInternal(a1[6], v5);
      a1[8] = 0LL;
    }
    if ( *((_BYTE *)a1 + 76) < 2u && ((unsigned int)MiWorkingSetIsContended(a1[6]) || KeShouldYieldProcessor()) )
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
      if ( v6 + 4088 > a1[7] )
        v4 = a1[7];
      if ( !(unsigned int)MiMakeZeroedPageTablesEx(
                            v2,
                            v4,
                            (*((_WORD *)a1 + 39) & 4 | 0x400u) >> 1,
                            *((_DWORD *)a1 + 10),
                            *((_DWORD *)a1 + 18) + 1) )
      {
        *((_WORD *)a1 + 39) |= 1u;
        MiLockPoolCommitWs(a1);
        break;
      }
      MiLockPoolCommitWs(a1);
    }
  }
  MiFillPoolCommitPageTable(a1);
  MiUnlockPoolCommitWs(a1);
  v7 = *((unsigned __int16 *)a1 + 39);
  if ( (v7 & 1) != 0 )
  {
    if ( (v7 & 2) == 0 )
    {
      v9 = (*a1 >> 9) & 0x7FFFFFFFF8LL;
      if ( v2 != v9 - 0x98000000000LL )
      {
        v10 = (v7 >> 2) & 1 | 2;
        if ( (v7 & 0x100) == 0 )
          v10 = (v7 >> 2) & 1;
        MiClearNonPagedPtes(*a1, (__int64)(v2 - v9 + 0x98000000000LL) >> 3, 0x4000u, v10);
      }
    }
    v3 = -1073741670;
  }
  else
  {
    if ( (v7 & 0x104) == 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogPerfMemoryRangeEvent(*a1, 0LL, 11LL, a1[1]);
    MiCountSystemPool(*((unsigned int *)a1 + 10), a1[3], 1LL);
  }
  MiReturnExcessPoolCommit(a1);
  return v3;
}
