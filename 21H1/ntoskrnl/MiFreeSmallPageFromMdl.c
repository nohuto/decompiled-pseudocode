/*
 * XREFs of MiFreeSmallPageFromMdl @ 0x140346A2C
 * Callers:
 *     MiFreeMdlPageRun @ 0x1403468F8 (MiFreeMdlPageRun.c)
 *     MmFreeSecureKernelPages @ 0x14054DC14 (MmFreeSecureKernelPages.c)
 * Callees:
 *     MiIsPfnFromSlabAllocation @ 0x1402802F0 (MiIsPfnFromSlabAllocation.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUpdateLargePageBitMap @ 0x140346C18 (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeLargePageCharges @ 0x14055898C (MiFreeLargePageCharges.c)
 */

_BOOL8 __fastcall MiFreeSmallPageFromMdl(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  char v3; // r15
  signed __int64 v4; // r14
  __int64 v6; // rbx
  _BOOL8 v7; // rdi
  unsigned __int64 v8; // rsi
  __int64 v9; // r13
  bool v10; // zf
  __int16 v11; // dx
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax

  v3 = a2;
  v4 = 48 * BugCheckParameter2;
  v6 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v7 = 0LL;
  v8 = (unsigned __int8)MiLockPageInline(v6, a2, a3);
  v9 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v6 + 40) >> 39) & 0x3FFLL));
  MiUpdateLargePageBitMap(v9, BugCheckParameter2, 1, 0, 0);
  *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
  v10 = *(_WORD *)(v6 + 32) == 2;
  *(_WORD *)(v6 + 32) -= 2;
  if ( v10 )
  {
    if ( !MiIsPfnFromSlabAllocation(v6) )
      v7 = (*(_BYTE *)(v6 + 35) & 0x40) == 0;
    if ( (v3 & 1) != 0 )
    {
      v11 = 1;
      *(_BYTE *)(v6 + 34) &= ~0x10u;
    }
    else
    {
      v12 = (_QWORD *)qword_140C4EDC0;
      if ( qword_140C4EDC0 && ((*(_QWORD *)(v6 + 40) >> 60) & 7) == 1 )
      {
        v13 = v4 / 48;
        while ( v12 )
        {
          v14 = v12[3];
          if ( v13 < v14 )
          {
            v12 = (_QWORD *)*v12;
          }
          else
          {
            if ( v13 - v14 < v12[4] )
            {
              v11 = 256;
              goto LABEL_16;
            }
            v12 = (_QWORD *)v12[1];
          }
        }
      }
      v11 = 2;
    }
LABEL_16:
    MiInsertPageInFreeOrZeroedList(BugCheckParameter2, v11);
  }
  else
  {
    *(_BYTE *)(v6 + 34) |= 7u;
    *(_QWORD *)(v6 + 24) |= 0x4000000000000000uLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v10 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  if ( v7 )
    MiFreeLargePageCharges(v9, v7);
  return v7;
}
