/*
 * XREFs of MiCommitPoolMemory @ 0x1402586AC
 * Callers:
 *     MmAllocatePoolMemory @ 0x140258558 (MmAllocatePoolMemory.c)
 *     MmAllocateSecurePoolMemory @ 0x14053F8EC (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x1402509D0 (MiMakeZeroedPageTablesEx.c)
 *     MiLockPoolCommitPageTable @ 0x140258850 (MiLockPoolCommitPageTable.c)
 *     MiWorkingSetIsContended @ 0x1402589C0 (MiWorkingSetIsContended.c)
 *     MiUnlockPoolCommitWs @ 0x1402589F8 (MiUnlockPoolCommitWs.c)
 *     MiLockPoolCommitWs @ 0x140258A48 (MiLockPoolCommitWs.c)
 *     MiReturnExcessPoolCommit @ 0x140258A84 (MiReturnExcessPoolCommit.c)
 *     MiCountSystemPool @ 0x140258B10 (MiCountSystemPool.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiLinkPoolCommitChain @ 0x1402B4FA0 (MiLinkPoolCommitChain.c)
 *     MiFillPoolCommitPageTable @ 0x1402B6940 (MiFillPoolCommitPageTable.c)
 *     KeShouldYieldProcessor @ 0x140327BB0 (KeShouldYieldProcessor.c)
 *     MiClearNonPagedPtes @ 0x14032DB6C (MiClearNonPagedPtes.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14052C14C (MiLogPerfMemoryRangeEvent.c)
 */

__int64 __fastcall MiCommitPoolMemory(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  unsigned int v7; // edx
  __int64 v9; // r8
  __int64 v10; // r9

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
        MiClearNonPagedPtes(*a1, (__int64)(v2 - v9 + 0x98000000000LL) >> 3, 0x4000LL, v10);
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
