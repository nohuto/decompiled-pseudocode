/*
 * XREFs of MiFreeContiguousPages @ 0x140261B18
 * Callers:
 *     MiAllocateContiguousMemory @ 0x14025FFCC (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x1402619D0 (MmFreeContiguousMemory.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052DE30 (MmMarkPhysicalMemoryAsBad.c)
 *     MmRemovePhysicalMemory @ 0x1408C8BB0 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x1408C92A0 (MiRemoveMdlPages.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DCC10 (MiMapSystemImageWithLargePage.c)
 *     MiUnmapLargeDriver @ 0x1408DCF84 (MiUnmapLargeDriver.c)
 * Callees:
 *     MiDecrementShareCount @ 0x140290770 (MiDecrementShareCount.c)
 *     MiFreeLargePageMemory @ 0x1402F19BC (MiFreeLargePageMemory.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiResidentPageDangleFree @ 0x1403F58F8 (MiResidentPageDangleFree.c)
 *     MiFreeLargePageCharges @ 0x14055C9AC (MiFreeLargePageCharges.c)
 */

__int64 __fastcall MiFreeContiguousPages(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int8 v13; // al
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int64 v17; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf

  v3 = a1;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 48 * a1 - 0x58000000000LL;
  do
  {
    v7 = v4;
    v8 = v5;
    if ( (v3 & 0x1FF) != 0 || a2 < 0x200 || !(unsigned int)MiResidentPageDangleFree(v3, 1LL) )
    {
      v13 = MiLockPageInline(v6);
      v16 = (*(_QWORD *)(v6 + 40) >> 39) & 0x3FFLL;
      v17 = v13;
      v5 = *(_QWORD *)(qword_140C4E4C8 + 8 * v16);
      if ( v8 )
        v5 = v8;
      --*(_WORD *)(v6 + 32);
      ++v4;
      if ( *(_WORD *)(v6 + 32) != 1 )
        v4 = v7;
      *(_QWORD *)(v6 + 24) |= 0x4000000000000000uLL;
      MiDecrementShareCount(v6, v16, v14, v15);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
            v22 = (v21 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v21;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v17);
      result = 48LL;
      v11 = -1LL;
      v12 = 1LL;
    }
    else
    {
      if ( !v5 )
        v5 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v6 + 40) >> 39) & 0x3FFLL));
      MiFreeLargePageMemory(v3, v9, 6LL);
      result = 24576LL;
      v11 = -512LL;
      v12 = 512LL;
    }
    v6 += result;
    v3 += v12;
    a2 += v11;
  }
  while ( a2 );
  if ( v4 )
    return MiFreeLargePageCharges(v5, v4);
  return result;
}
