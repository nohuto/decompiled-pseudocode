/*
 * XREFs of MiFreeContiguousPages @ 0x1402FA128
 * Callers:
 *     MiAllocateContiguousMemory @ 0x1402F8FFC (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x1402F9FE0 (MmFreeContiguousMemory.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140529E10 (MmMarkPhysicalMemoryAsBad.c)
 *     MmRemovePhysicalMemory @ 0x1408C1A20 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x1408C2110 (MiRemoveMdlPages.c)
 *     MiMapSystemImageWithLargePage @ 0x1408D5A80 (MiMapSystemImageWithLargePage.c)
 *     MiUnmapLargeDriver @ 0x1408D5DF4 (MiUnmapLargeDriver.c)
 * Callees:
 *     MiFreeLargePageMemory @ 0x140345AB8 (MiFreeLargePageMemory.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiDecrementShareCount @ 0x140353040 (MiDecrementShareCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiResidentPageDangleFree @ 0x1403F0084 (MiResidentPageDangleFree.c)
 *     MiFreeLargePageCharges @ 0x14055898C (MiFreeLargePageCharges.c)
 */

__int64 __fastcall MiFreeContiguousPages(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 result; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf

  v3 = a2;
  v4 = a1;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 48 * a1 - 0x58000000000LL;
  do
  {
    v8 = v5;
    v9 = v6;
    if ( (v4 & 0x1FF) != 0 || v3 < 0x200 || !(unsigned int)MiResidentPageDangleFree(v4, 1LL) )
    {
      v12 = (unsigned __int8)MiLockPageInline(v7, a2, a3);
      v6 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL));
      if ( v9 )
        v6 = v9;
      --*(_WORD *)(v7 + 32);
      ++v5;
      if ( *(_WORD *)(v7 + 32) != 1 )
        v5 = v8;
      *(_QWORD *)(v7 + 24) |= 0x4000000000000000uLL;
      MiDecrementShareCount(v7);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
            v17 = (v16 & SchedulerAssist[5]) == 0;
            a3 = (unsigned int)v16 & SchedulerAssist[5];
            SchedulerAssist[5] = a3;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v12);
      result = 48LL;
      v11 = -1LL;
      a2 = 1LL;
    }
    else
    {
      if ( !v6 )
        v6 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL));
      MiFreeLargePageMemory(v4, a2, 6LL);
      result = 24576LL;
      v11 = -512LL;
      a2 = 512LL;
    }
    v7 += result;
    v4 += a2;
    v3 += v11;
  }
  while ( v3 );
  if ( v5 )
    return MiFreeLargePageCharges(v6, v5);
  return result;
}
