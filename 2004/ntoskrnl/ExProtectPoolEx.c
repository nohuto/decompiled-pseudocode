/*
 * XREFs of ExProtectPoolEx @ 0x14027033C
 * Callers:
 *     ExProtectPool @ 0x14027031C (ExProtectPool.c)
 *     SmHpBufferProtectEx @ 0x1402D313C (SmHpBufferProtectEx.c)
 *     CmpProtectPool @ 0x14035FF24 (CmpProtectPool.c)
 *     HvpSetRangeProtection @ 0x14069E2BC (HvpSetRangeProtection.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140228470 (ExAcquireSpinLockShared.c)
 *     MiDeterminePoolType @ 0x1402533A0 (MiDeterminePoolType.c)
 *     MmProtectPool @ 0x1402704BC (MmProtectPool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExProtectPoolEx(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  char v10; // r8
  int v11; // r12d
  unsigned __int64 v12; // r13
  __int64 v13; // rbp
  int v14; // r14d
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // ebp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v27; // eax
  bool v28; // zf
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r8
  int v32; // eax
  unsigned __int64 v33; // [rsp+68h] [rbp+10h]

  if ( ((a2 | a1) & 0xFFF) != 0 )
    return 0LL;
  v6 = MiDeterminePoolType(a2);
  v10 = 0;
  if ( v6 != 32 )
    v10 = v6;
  if ( (v10 & 0x20) != 0 )
    return 0LL;
  v33 = v7 + v8 - 1;
  v11 = 0;
  v12 = 0LL;
  LOWORD(v13) = 0;
  LOBYTE(v14) = 0;
  v15 = ((40543 * (unsigned __int64)(unsigned int)(v9 >> 12)) >> 32) ^ (40543LL * (unsigned int)(v9 >> 12));
  v16 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  if ( !PoolBigPageTable )
  {
    ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
          v28 = (v27 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v27;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v16);
    return 0LL;
  }
  v17 = PoolBigPageTable + 24 * PoolBigPageTableSize;
  v18 = v33;
  v19 = PoolBigPageTable + 24LL * ((unsigned int)v15 & ((_DWORD)PoolBigPageTableSize - 1));
  while ( 1 )
  {
    v20 = *(_QWORD *)v19;
    if ( (*(_QWORD *)v19 & 1) != 0 )
      goto LABEL_17;
    if ( a2 < v20 )
      goto LABEL_17;
    v21 = *(_QWORD *)(v19 + 16);
    if ( v18 >= v21 + v20 )
      goto LABEL_17;
    if ( (v21 & 0xFFF) == 0 || ((v33 + 4095) & 0xFFFFFFFFFFFFF000uLL) < ((v21 + v20 + 4095) & 0xFFFFFFFFFFFFF000uLL) )
      break;
    v18 = v33;
LABEL_17:
    v19 += 24LL;
    if ( v19 >= v17 )
    {
      if ( v11 == 1 )
        goto LABEL_12;
      v19 = PoolBigPageTable;
      v11 = 1;
      v17 = PoolBigPageTable + 24LL * ((unsigned int)v15 & ((_DWORD)PoolBigPageTableSize - 1));
    }
  }
  v12 = *(_QWORD *)v19;
  v14 = *(_DWORD *)(v19 + 12) >> 8;
  v13 = *(_QWORD *)(v19 + 16);
LABEL_12:
  ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v29 = KeGetCurrentIrql();
      if ( v29 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v29 >= 2u )
      {
        v30 = KeGetCurrentPrcb();
        v31 = v30->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v28 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
    }
  }
  __writecr8(v16);
  if ( !v12 )
    return 0LL;
  v22 = v13 & 0xFFF;
  if ( v22 )
  {
    if ( (v14 & 0x40) == 0 || v22 > 0x10uLL )
      return 0LL;
  }
  if ( a4 == -1 )
    return 1LL;
  else
    return MmProtectPool(a2, a3, a4);
}
