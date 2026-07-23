/*
 * XREFs of ExProtectPoolEx @ 0x1402F7F18
 * Callers:
 *     CmpProtectPool @ 0x1402513A4 (CmpProtectPool.c)
 *     SmHpBufferProtectEx @ 0x140275470 (SmHpBufferProtectEx.c)
 *     ExProtectPool @ 0x1402F7EF8 (ExProtectPool.c)
 *     HvpSetRangeProtection @ 0x140721258 (HvpSetRangeProtection.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     MmProtectPool @ 0x1402F8098 (MmProtectPool.c)
 *     MiDeterminePoolType @ 0x140305AEC (MiDeterminePoolType.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExProtectPoolEx(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  int v8; // eax
  char v9; // r8
  int v10; // r12d
  unsigned __int64 v11; // r13
  __int64 v12; // rbp
  int v13; // r14d
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v25; // eax
  bool v26; // zf
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r8
  int v30; // eax
  unsigned __int64 v31; // [rsp+68h] [rbp+10h]

  if ( ((a2 | a1) & 0xFFF) != 0 )
    return 0LL;
  v8 = MiDeterminePoolType(a2);
  v9 = 0;
  if ( v8 != 32 )
    v9 = v8;
  if ( (v9 & 0x20) != 0 )
    return 0LL;
  v31 = a2 + a3 - 1;
  v10 = 0;
  v11 = 0LL;
  LOWORD(v12) = 0;
  LOBYTE(v13) = 0;
  v14 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  if ( !PoolBigPageTable )
  {
    ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v26 = (v25 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v25;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v14);
    return 0LL;
  }
  v15 = PoolBigPageTable + 24 * PoolBigPageTableSize;
  v16 = v31;
  v17 = PoolBigPageTable
      + 24
      * ((((40543 * (unsigned __int64)(unsigned int)(a1 >> 12)) >> 32) ^ (40543 * (unsigned int)(a1 >> 12))) & (unsigned int)(PoolBigPageTableSize - 1));
  while ( 1 )
  {
    v18 = *(_QWORD *)v17;
    if ( (*(_QWORD *)v17 & 1) != 0 )
      goto LABEL_17;
    if ( a2 < v18 )
      goto LABEL_17;
    v19 = *(_QWORD *)(v17 + 16);
    if ( v16 >= v19 + v18 )
      goto LABEL_17;
    if ( (v19 & 0xFFF) == 0 || ((v31 + 4095) & 0xFFFFFFFFFFFFF000uLL) < ((v19 + v18 + 4095) & 0xFFFFFFFFFFFFF000uLL) )
      break;
    v16 = v31;
LABEL_17:
    v17 += 24LL;
    if ( v17 >= v15 )
    {
      if ( v10 == 1 )
        goto LABEL_12;
      v17 = PoolBigPageTable;
      v10 = 1;
      v15 = PoolBigPageTable
          + 24
          * ((((40543 * (unsigned __int64)(unsigned int)(a1 >> 12)) >> 32) ^ (40543 * (unsigned int)(a1 >> 12))) & (unsigned int)(PoolBigPageTableSize - 1));
    }
  }
  v11 = *(_QWORD *)v17;
  v13 = *(_DWORD *)(v17 + 12) >> 8;
  v12 = *(_QWORD *)(v17 + 16);
LABEL_12:
  ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v27 = KeGetCurrentIrql();
      if ( v27 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v27 >= 2u )
      {
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v26 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick(v28);
      }
    }
  }
  __writecr8(v14);
  if ( !v11 )
    return 0LL;
  v20 = v12 & 0xFFF;
  if ( v20 )
  {
    if ( (v13 & 0x40) == 0 || v20 > 0x10uLL )
      return 0LL;
  }
  if ( a4 == -1 )
    return 1LL;
  else
    return MmProtectPool(a2, a3, a4);
}
