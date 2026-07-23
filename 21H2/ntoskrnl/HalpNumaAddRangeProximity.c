/*
 * XREFs of HalpNumaAddRangeProximity @ 0x1404D1EA0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     HalpNumaQueryProximityNode @ 0x1403CF960 (HalpNumaQueryProximityNode.c)
 *     qsort @ 0x1403D2C30 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

__int64 __fastcall HalpNumaAddRangeProximity(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned int v9; // eax
  int v10; // eax
  void *v11; // rax
  void *v12; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // ecx
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  int v27; // edx
  _DWORD *v28; // r9
  unsigned __int16 v29; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  v29 = 0;
  result = HalpNumaQueryProximityNode(a3, &v29);
  if ( (int)result < 0 )
    return result;
  v8 = ExAcquireSpinLockExclusive(&HalpNumaMemoryRangeLock);
  v9 = 0;
  if ( !HalpNumaMemoryRangeCount )
  {
LABEL_6:
    v10 = HalpNumaMaxMemoryRangeCount;
    if ( HalpNumaMemoryRangeCount >= (unsigned int)HalpNumaMaxMemoryRangeCount )
    {
      HalpNumaMaxMemoryRangeCount += 5;
      v11 = (void *)HalpMmAllocCtxAlloc((__int64)v7, (unsigned int)(16 * (v10 + 6)));
      v12 = v11;
      if ( !v11 )
      {
        HalpNumaMaxMemoryRangeCount -= 5;
        ExReleaseSpinLockExclusiveFromDpcLevel(&HalpNumaMemoryRangeLock);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
              v17 = (v16 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v16;
              if ( v17 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        v4 = -1073741670;
LABEL_34:
        __writecr8(v8);
        return v4;
      }
      memmove(v11, HalpNumaMemoryRanges, 16LL * (unsigned int)HalpNumaMemoryRangeCount);
      if ( HalpNumaDynamicMemoryRanges )
        HalpMmAllocCtxFree(v22, (__int64)HalpNumaMemoryRanges);
      HalpNumaDynamicMemoryRanges = 1;
      HalpNumaMemoryRanges = v12;
    }
    v23 = 2LL * (unsigned int)HalpNumaMemoryRangeCount;
    v24 = v29;
    *((_QWORD *)HalpNumaMemoryRanges + v23) = a1;
    *((_DWORD *)HalpNumaMemoryRanges + 2 * v23 + 2) = v24;
    qsort(
      HalpNumaMemoryRanges,
      (unsigned int)++HalpNumaMemoryRangeCount,
      0x10uLL,
      (int (__cdecl *)(const void *, const void *))HalpNodeCostSort);
    *((_QWORD *)HalpNumaMemoryRanges + 2 * (unsigned int)HalpNumaMemoryRangeCount) = -1LL;
    *((_DWORD *)HalpNumaMemoryRanges + 4 * (unsigned int)HalpNumaMemoryRangeCount + 2) = 0;
    ExReleaseSpinLockExclusiveFromDpcLevel(&HalpNumaMemoryRangeLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v28 = v26->SchedulerAssist;
          v17 = (v27 & v28[5]) == 0;
          v28[5] &= v27;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick((__int64)v26);
        }
      }
    }
    goto LABEL_34;
  }
  v7 = HalpNumaMemoryRanges;
  while ( *v7 != a1 )
  {
    ++v9;
    v7 += 2;
    if ( v9 >= HalpNumaMemoryRangeCount )
      goto LABEL_6;
  }
  v29 = *((_WORD *)HalpNumaMemoryRanges + 8 * v9 + 4);
  ExReleaseSpinLockExclusiveFromDpcLevel(&HalpNumaMemoryRangeLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v17 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)v19);
      }
    }
  }
  __writecr8(v8);
  return a3 != *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 24) + 4LL * v29) ? 0xC0000018 : 0;
}
