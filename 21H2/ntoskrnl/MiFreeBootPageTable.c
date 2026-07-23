/*
 * XREFs of MiFreeBootPageTable @ 0x140A587A4
 * Callers:
 *     MxZeroBootMappings @ 0x140A5867C (MxZeroBootMappings.c)
 * Callees:
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiLockAndInsertPageInFreeList @ 0x1403B767C (MiLockAndInsertPageInFreeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFreeBootPageTable(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // rbx
  __int16 v5; // ax
  unsigned __int64 v6; // rdi
  char v7; // cl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v11; // eax
  bool v12; // zf

  v4 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v5 = *(_WORD *)(v4 + 32);
  if ( v5 )
  {
    if ( v5 != 2 || (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      KeBugCheckEx(0x1Au, 0x3030307uLL, BugCheckParameter2, 0LL, 0LL);
    v6 = (unsigned __int8)MiLockPageInline(
                            48 * BugCheckParameter2 - 0x58000000000LL,
                            0x3FFFFFFFFFFFFFFFLL,
                            a3,
                            SchedulerAssist);
    v7 = *(_BYTE *)(v4 + 34) & 0xFD;
    *(_WORD *)(v4 + 32) = 0;
    *(_QWORD *)(v4 + 24) &= 0xC000000000000000uLL;
    *(_BYTE *)(v4 + 34) = v7 | 5;
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          a2 = -1LL << ((unsigned __int8)v6 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)a2;
          v12 = (v11 & SchedulerAssist[5]) == 0;
          a3 = (unsigned int)v11 & SchedulerAssist[5];
          SchedulerAssist[5] = a3;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  else
  {
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)(v4 + 40) |= 0x4000000000000uLL;
  }
  return MiLockAndInsertPageInFreeList(v4, a2, a3, SchedulerAssist);
}
