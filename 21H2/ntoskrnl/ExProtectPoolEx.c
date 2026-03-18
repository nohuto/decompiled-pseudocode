/*
 * XREFs of ExProtectPoolEx @ 0x140367008
 * Callers:
 *     CmpProtectPoolEx @ 0x140248E20 (CmpProtectPoolEx.c)
 *     CmpProtectPool @ 0x14024DE3C (CmpProtectPool.c)
 *     SmHpBufferProtectEx @ 0x1403813C0 (SmHpBufferProtectEx.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     MiDeterminePoolType @ 0x140366FB0 (MiDeterminePoolType.c)
 *     MmProtectPool @ 0x140367190 (MmProtectPool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExProtectPoolEx(unsigned __int16 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  int v6; // eax
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // r12d
  unsigned __int64 v10; // r13
  __int64 v11; // rbp
  int v12; // r14d
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rax
  __int64 v16; // r11
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // r10
  unsigned int v21; // ebp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v26; // eax
  bool v27; // zf
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r8
  int v31; // eax
  unsigned __int64 v32; // [rsp+68h] [rbp+10h]

  if ( (((unsigned __int16)a2 | a1) & 0xFFF) != 0 )
    return 0LL;
  v6 = MiDeterminePoolType(a2);
  if ( v6 != 32 && (v6 & 0x20) != 0 )
    return 0LL;
  v32 = a2 + v8 - 1;
  v9 = 0;
  v10 = 0LL;
  LOWORD(v11) = 0;
  LOBYTE(v12) = 0;
  v13 = ((40543 * (unsigned __int64)(unsigned int)(v7 >> 12)) >> 32) ^ (40543LL * (unsigned int)(v7 >> 12));
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
          v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v27 = (v26 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v26;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v14);
    return 0LL;
  }
  v15 = v32;
  v16 = 32LL * ((unsigned int)v13 & ((_DWORD)PoolBigPageTableSize - 1));
  v17 = PoolBigPageTable + 32 * PoolBigPageTableSize;
  v18 = v16 + PoolBigPageTable;
  while ( 1 )
  {
    v19 = *(_QWORD *)v18;
    if ( (*(_QWORD *)v18 & 1) != 0 )
      goto LABEL_16;
    if ( a2 < v19 )
      goto LABEL_16;
    v20 = *(_QWORD *)(v18 + 16);
    if ( v15 >= v20 + v19 )
      goto LABEL_16;
    if ( (v20 & 0xFFF) == 0 || ((v32 + 4095) & 0xFFFFFFFFFFFFF000uLL) < ((v20 + v19 + 4095) & 0xFFFFFFFFFFFFF000uLL) )
      break;
    v15 = v32;
LABEL_16:
    v18 += 32LL;
    if ( v18 >= v17 )
    {
      if ( v9 == 1 )
        goto LABEL_11;
      v18 = PoolBigPageTable;
      v9 = 1;
      v17 = v16 + PoolBigPageTable;
    }
  }
  v10 = *(_QWORD *)v18;
  v12 = *(_DWORD *)(v18 + 12) >> 8;
  v11 = *(_QWORD *)(v18 + 16);
LABEL_11:
  ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v28 = KeGetCurrentIrql();
      if ( v28 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v27 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
  }
  __writecr8(v14);
  if ( !v10 )
    return 0LL;
  v21 = v11 & 0xFFF;
  if ( v21 )
  {
    if ( (v12 & 0x40) == 0 || v21 > 0x10uLL )
      return 0LL;
  }
  if ( a4 == -1 )
    return 1LL;
  else
    return MmProtectPool(a2, a3, a4);
}
