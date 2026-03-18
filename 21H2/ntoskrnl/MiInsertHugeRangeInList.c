/*
 * XREFs of MiInsertHugeRangeInList @ 0x1405875A0
 * Callers:
 *     MiDereferenceIoPages @ 0x140215AA8 (MiDereferenceIoPages.c)
 *     MiGetHugeRangeFromNode @ 0x14025C1B4 (MiGetHugeRangeFromNode.c)
 *     MiAddPartitionHugeRange @ 0x14058617C (MiAddPartitionHugeRange.c)
 *     MiHugeRangeFreeToZero @ 0x1405872B0 (MiHugeRangeFreeToZero.c)
 *     MiMarkHugePfnBad @ 0x1405879D8 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1405882D0 (MiMarkHugePfnGood.c)
 *     MiReleasePartitionHugeIoSpace @ 0x140588C48 (MiReleasePartitionHugeIoSpace.c)
 *     MiInsertPartitionPages @ 0x1405BE81C (MiInsertPartitionPages.c)
 *     MiReleaseMemoryRuns @ 0x14096AA38 (MiReleaseMemoryRuns.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1409811F0 (MiAllocatePartitionPhysicalPages.c)
 *     MiFreePartitionPageRun @ 0x14098194C (MiFreePartitionPageRun.c)
 * Callees:
 *     MiWakePageZeroing @ 0x1402678C8 (MiWakePageZeroing.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MiPageToChannel @ 0x1403B76EC (MiPageToChannel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiHugePfnPartition @ 0x14058727C (MiHugePfnPartition.c)
 *     MiUpdateHugePageCounts @ 0x14058938C (MiUpdateHugePageCounts.c)
 *     MiMarkHugeRangeTransition @ 0x140591C4C (MiMarkHugeRangeTransition.c)
 */

__int64 __fastcall MiInsertHugeRangeInList(_QWORD *a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // r14
  _QWORD *v6; // r13
  __int64 v7; // rsi
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned __int64 v10; // r15
  __int64 result; // rax
  KIRQL v12; // al
  unsigned __int64 *v13; // r8
  unsigned __int64 v14; // rbx
  __int64 v15; // r10
  unsigned int v16; // r12d
  __int64 v17; // r9
  unsigned __int64 *v18; // rsi
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v26; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  bool v30; // zf
  __int64 v31; // [rsp+20h] [rbp-58h]
  unsigned __int64 *v32; // [rsp+28h] [rbp-50h]
  int v34; // [rsp+88h] [rbp+10h]
  int v35; // [rsp+88h] [rbp+10h]
  char v36; // [rsp+90h] [rbp+18h]
  unsigned int v37; // [rsp+98h] [rbp+20h]

  v3 = a2 & 0x3FFFFF;
  v32 = (unsigned __int64 *)(qword_140C52968 + 8 * v3);
  if ( a1 )
    v6 = a1;
  else
    v6 = (_QWORD *)MiHugePfnPartition((_QWORD *)(qword_140C52968 + 8 * v3));
  v31 = v6[1998];
  v7 = *((unsigned int *)MiSearchNumaNodeTable(v3 << 18) + 2);
  v8 = MiPageToChannel(v3 << 18);
  v9 = dword_140C507C0[0];
  v37 = v8;
  v10 = v6[2] + 24512 * v7;
  v34 = dword_140C507C0[0];
  if ( (a3 & 1) != 0 )
  {
    v36 = 17;
  }
  else
  {
    if ( (a3 & 0x20) == 0 )
    {
      result = MiMarkHugeRangeTransition(v10, v3 << 18);
      if ( (_DWORD)result )
        return result;
    }
    v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 22848));
    v9 = v34;
    v36 = v12;
  }
  v13 = v32;
  v14 = *v32;
  v15 = (*v32 >> 47) & 1;
  v35 = v15;
  if ( (*v32 & 0x1000000000000LL) != 0 )
    a3 = a3 & 0xF5 | 8;
  if ( (a3 & 2) != 0 )
  {
    v16 = 0;
    v17 = v31 + 16LL * v9 * (unsigned int)v7;
LABEL_15:
    v18 = (unsigned __int64 *)(v17 + 8 * (v3 % v9));
    goto LABEL_17;
  }
  if ( (a3 & 8) == 0 )
  {
    v16 = 1;
    v17 = v31 + 8 * (v9 + (unsigned __int64)(2 * v9 * (unsigned int)v7));
    goto LABEL_15;
  }
  v16 = 5;
  v18 = (unsigned __int64 *)(v31 + 8LL * ((unsigned int)v7 + 2 * v9 * (unsigned __int16)KeNumberNodes));
LABEL_17:
  if ( a1 )
  {
    v14 ^= (v14 ^ ((unsigned __int64)*(unsigned __int16 *)v6 << 49)) & 0xFFE000000000000LL;
    MiUpdateHugePageCounts(v6, a2, 1LL);
    LODWORD(v15) = v35;
    v13 = v32;
  }
  if ( v16 )
  {
    if ( v16 == 1 )
      v19 = v14 & 0xFFFFFFFFFE3FFFFFuLL | 0x800000;
    else
      v19 = v14 & 0xFFFFFFFFFE3FFFFFuLL | 0x1000000;
  }
  else
  {
    v19 = v14 & 0xFFFFFFFFFE3FFFFFuLL | 0x400000;
  }
  v20 = *v18;
  v21 = v19 & 0xFFFF800001FFFFFFuLL;
  v22 = *v18 & 0x3FFFFF;
  if ( v22 )
  {
    if ( (a3 & 0x10) != 0 )
    {
      *v13 = v21 & 0xFFFFFFFFFFC00000uLL | (((v20 >> 25) & 0x3FFFFF) << 25);
      *(_QWORD *)(qword_140C52968 + 8 * ((v20 >> 25) & 0x3FFFFF)) = v3 | *(_QWORD *)(qword_140C52968
                                                                                   + 8 * ((v20 >> 25) & 0x3FFFFF)) & 0xFFFFFFFFFFC00000uLL;
      result = v20 & 0xFFFF800001FFFFFFuLL;
      v24 = v20 & 0xFFFF800001FFFFFFuLL | (v3 << 25);
      goto LABEL_30;
    }
    *v13 = v22 | v21 & 0xFFFFFFFFFFC00000uLL;
    result = *(_QWORD *)(qword_140C52968 + 8 * v22) & 0xFFFF800001FFFFFFuLL;
    *(_QWORD *)(qword_140C52968 + 8 * v22) = result | (v3 << 25);
    v23 = v20 & 0xFFFFFFFFFFC00000uLL;
  }
  else
  {
    *v13 = v21 & 0xFFFFFFFFFFC00000uLL;
    result = v3 << 25;
    v23 = (v3 << 25) | v20 & 0xFFFF800001C00000uLL;
  }
  v24 = v3 | v23;
LABEL_30:
  *v18 = v24;
  if ( v16 != 5 )
  {
    result = v37;
    ++*(_QWORD *)(v10 + 8 * (v37 + 4LL * v16) + 22648);
    ++v6[1999];
    if ( v16 == 1 && !(_DWORD)v15 )
      result = MiWakePageZeroing((__int64)v6, v10, 1);
  }
  if ( (a3 & 1) == 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 22848));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v26 = v36;
      if ( (unsigned __int8)v36 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << (v36 + 1));
        v30 = (v29 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v29;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    else
    {
      v26 = v36;
    }
    result = v26;
    __writecr8(v26);
  }
  return result;
}
