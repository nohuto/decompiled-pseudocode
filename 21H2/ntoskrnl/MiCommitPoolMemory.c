/*
 * XREFs of MiCommitPoolMemory @ 0x1403525F0
 * Callers:
 *     MmAllocatePoolMemory @ 0x14035225C (MmAllocatePoolMemory.c)
 *     MmAllocateSecurePoolMemory @ 0x14059A86C (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiClearNonPagedPtes @ 0x140227ED0 (MiClearNonPagedPtes.c)
 *     MiMakeZeroedPageTablesEx @ 0x14026DC5C (MiMakeZeroedPageTablesEx.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiFillPoolCommitPageTable @ 0x1402CFF00 (MiFillPoolCommitPageTable.c)
 *     MiLockPoolCommitPageTable @ 0x1403528A4 (MiLockPoolCommitPageTable.c)
 *     MiLinkPoolCommitChain @ 0x140352A00 (MiLinkPoolCommitChain.c)
 *     MiUnlockPoolCommitWs @ 0x140352CB4 (MiUnlockPoolCommitWs.c)
 *     MiReturnExcessPoolCommit @ 0x140352D04 (MiReturnExcessPoolCommit.c)
 *     MiCountSystemPool @ 0x140352D90 (MiCountSystemPool.c)
 *     MiWorkingSetIsContended @ 0x1403531F0 (MiWorkingSetIsContended.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1405852C0 (MiLogPerfMemoryRangeEvent.c)
 */

__int64 __fastcall MiCommitPoolMemory(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // r10
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // esi
  unsigned __int64 v8; // rdx
  unsigned __int16 v9; // ax
  _DWORD *SchedulerAssist; // r9
  int v12; // r8d
  unsigned __int64 v13; // rdx
  int ZeroedPageTables; // eax
  unsigned __int8 v15; // r10
  __int64 v16; // rcx
  unsigned __int8 v17; // r10
  __int64 v18; // rcx
  _DWORD *v19; // r9
  _DWORD *v20; // r9
  _DWORD *v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdi
  unsigned int v25; // r9d

  v2 = ((*a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v4 = a1[6];
  *((_BYTE *)a1 + 76) = CurrentIrql;
  MiLockWorkingSetShared(v4);
  v7 = 0;
  while ( v2 <= a1[7] )
  {
    v8 = a1[8];
    if ( v8 )
    {
      MiUnlockPageTableInternal(a1[6], v8);
      a1[8] = 0LL;
    }
    if ( *((_BYTE *)a1 + 76) < 2u && ((unsigned int)MiWorkingSetIsContended(a1[6]) || KeShouldYieldProcessor()) )
    {
      MiUnlockPoolCommitWs(a1);
      v17 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v17 <= 0xFu )
      {
        v20 = KeGetCurrentPrcb()->SchedulerAssist;
        v20[5] |= (-1 << (v17 + 1)) & 4;
      }
      v18 = a1[6];
      *((_BYTE *)a1 + 76) = v17;
      MiLockWorkingSetShared(v18);
    }
    if ( (unsigned int)MiLockPoolCommitPageTable(a1, v2, v5, v6) )
    {
      MiLinkPoolCommitChain(a1, v2);
      v2 = (v2 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    else
    {
      MiUnlockPoolCommitWs(a1);
      v12 = 512;
      if ( (*((_BYTE *)a1 + 78) & 4) != 0 )
        v12 = 514;
      v13 = (v2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      if ( v13 > a1[7] )
        v13 = a1[7];
      ZeroedPageTables = MiMakeZeroedPageTablesEx(v2, v13, v12, *((_DWORD *)a1 + 10), *((_DWORD *)a1 + 18) + 1);
      v15 = KeGetCurrentIrql();
      if ( !ZeroedPageTables )
      {
        *((_WORD *)a1 + 39) |= 1u;
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v15 <= 0xFu )
        {
          v21 = KeGetCurrentPrcb()->SchedulerAssist;
          v21[5] |= ~((unsigned __int8)(1LL << (v15 + 1)) - 1) & 4;
        }
        v22 = a1[6];
        *((_BYTE *)a1 + 76) = v15;
        MiLockWorkingSetShared(v22);
        break;
      }
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v15 <= 0xFu )
      {
        v19 = KeGetCurrentPrcb()->SchedulerAssist;
        v19[5] |= ~((unsigned __int8)(1LL << (v15 + 1)) - 1) & 4;
      }
      v16 = a1[6];
      *((_BYTE *)a1 + 76) = v15;
      MiLockWorkingSetShared(v16);
    }
  }
  MiFillPoolCommitPageTable((__int64)a1);
  MiUnlockPoolCommitWs(a1);
  v9 = *((_WORD *)a1 + 39);
  if ( (v9 & 1) != 0 )
  {
    if ( (v9 & 2) == 0 )
    {
      v23 = (*a1 >> 9) & 0x7FFFFFFFF8LL;
      if ( v2 != v23 - 0x98000000000LL )
      {
        v24 = (__int64)(v2 - v23 + 0x98000000000LL) >> 3;
        v25 = (v9 >> 2) & 1 | 2;
        if ( (v9 & 0x100) == 0 )
          v25 = (v9 >> 2) & 1;
        MiClearNonPagedPtes(*a1, v24, 0x4000u, v25);
      }
    }
    v7 = -1073741670;
  }
  else
  {
    if ( (v9 & 0x104) == 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogPerfMemoryRangeEvent(*a1, 0LL, 11LL, a1[1]);
    MiCountSystemPool(*((unsigned int *)a1 + 10), a1[3], 1LL);
  }
  MiReturnExcessPoolCommit(a1);
  return v7;
}
