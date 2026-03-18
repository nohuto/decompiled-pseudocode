/*
 * XREFs of MiGetHugeRangeFromNode @ 0x14025C1B4
 * Callers:
 *     MiGetHugePageToZero @ 0x140205FD4 (MiGetHugePageToZero.c)
 *     MmAllocateMemoryRanges @ 0x14096AB50 (MmAllocateMemoryRanges.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1409811F0 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiBeginPageAccessor @ 0x140268520 (MiBeginPageAccessor.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiHugePageOperation @ 0x140586E78 (MiHugePageOperation.c)
 *     MiInsertHugeRangeInList @ 0x1405875A0 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x1405891A4 (MiUnlinkHugeRange.c)
 */

unsigned __int64 __fastcall MiGetHugeRangeFromNode(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 v4; // r10
  unsigned __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r13
  _QWORD *v8; // rsi
  __int64 v9; // r14
  _QWORD *v10; // rdi
  unsigned int v11; // ecx
  _QWORD *v12; // rdx
  _QWORD *v13; // r9
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbp
  KIRQL v18; // di
  const signed __int64 *v20; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf
  unsigned __int64 v26; // rdi
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  int v29; // eax
  _DWORD *v30; // r8
  KIRQL v31; // [rsp+20h] [rbp-48h]

  v4 = *(_QWORD *)(a1 + 15984);
  v5 = 0LL;
  if ( !v4 )
    return v5;
  v6 = (unsigned int)dword_140C507C0;
  v7 = *(_QWORD *)(a1 + 16) + 24512LL * a2;
  v8 = (_QWORD *)(v4 + 16LL * a2 * dword_140C507C0);
  if ( a4 || !a3 )
  {
    v8 += (unsigned int)dword_140C507C0;
    v9 = 1LL;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = 0LL;
  v31 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 22848));
  while ( 2 )
  {
    v11 = 0;
    if ( MmNumberOfChannels )
    {
      v12 = (_QWORD *)(32 * v9 + v7 + 22648);
      do
      {
        if ( *v12 )
          break;
        ++v11;
        ++v12;
      }
      while ( v11 < MmNumberOfChannels );
      if ( v11 == 4 )
        goto LABEL_15;
    }
    v13 = &v8[v6];
    v5 &= 0xFFFFFFFFFFC00000uLL;
    v14 = 0LL;
    v10 = &v8[*(_DWORD *)(v7 + 22624) % (unsigned int)v6];
    if ( !(_DWORD)v6 )
    {
LABEL_15:
      v16 = a4;
      goto LABEL_16;
    }
    while ( 1 )
    {
      v5 ^= ((unsigned int)v5 ^ (unsigned int)*v10) & 0x3FFFFF;
      if ( (v5 & 0x3FFFFF) != 0 )
        break;
LABEL_12:
      v15 = v10 + 1;
      v10 = v8;
      if ( v15 != v13 )
        v10 = v15;
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= (unsigned int)v6 )
        goto LABEL_15;
    }
    v20 = (const signed __int64 *)(qword_140C52968 + 8 * (v5 & 0x3FFFFF));
    if ( a4 && _bittest64(v20, 0x2Fu) )
    {
      v5 &= 0xFFFFFFFFFFC00000uLL;
      goto LABEL_12;
    }
    MiUnlinkHugeRange(a1, v5, v14, v13);
    v16 = a4;
    if ( a4 )
    {
      MiBeginPageAccessor(a4, v20, 1LL);
      MiInsertHugeRangeInList(0LL, v5, 17LL);
      goto LABEL_15;
    }
LABEL_16:
    v17 = v5 & 0x3FFFFF;
    if ( (v5 & 0x3FFFFF) != 0 )
    {
      *(_DWORD *)(v7 + 22624) = v10 - v8 + 1;
    }
    else if ( !v16 )
    {
      if ( a3 )
      {
        if ( !v9 )
        {
          v8 += v6;
          v9 = 1LL;
          continue;
        }
      }
      else if ( v9 == 1 )
      {
        v9 = 0LL;
        v8 -= v6;
        continue;
      }
    }
    break;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 22848));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v18 = v31;
    if ( v31 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v24 = ~(unsigned __int16)(-1LL << (v31 + 1));
      v25 = (v24 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v24;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v18 = v31;
  }
  __writecr8(v18);
  if ( (v5 & 0x3FFFFF) != 0 && a3 && (*(_DWORD *)(qword_140C52968 + 8 * v17) & 0x3FFFFF) == 1LL )
  {
    MiHugePageOperation(v5);
    v26 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 22848));
    *(_QWORD *)(qword_140C52968 + 8 * v17) &= 0xFFFFFFFFFFC00000uLL;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 22848));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && (unsigned __int8)v26 <= 0xFu && v27 >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
          v30 = v28->SchedulerAssist;
          v25 = (v29 & v30[5]) == 0;
          v30[5] &= v29;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
    }
    __writecr8(v26);
  }
  return v5;
}
