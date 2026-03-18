/*
 * XREFs of MiFreeSmallPageFromMdl @ 0x14034E0A4
 * Callers:
 *     MiFreeMdlPageRun @ 0x14034E304 (MiFreeMdlPageRun.c)
 *     MmFreeSecureKernelPages @ 0x140551C34 (MmFreeSecureKernelPages.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUpdateLargePageBitMap @ 0x14034A334 (MiUpdateLargePageBitMap.c)
 *     MiIsPfnFromSlabAllocation @ 0x14034D190 (MiIsPfnFromSlabAllocation.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeLargePageCharges @ 0x14055C9AC (MiFreeLargePageCharges.c)
 */

_BOOL8 __fastcall MiFreeSmallPageFromMdl(ULONG_PTR BugCheckParameter2, char a2)
{
  signed __int64 v3; // r14
  __int64 v5; // rbx
  _BOOL8 v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // r13
  bool v9; // zf
  __int16 v10; // dx
  _QWORD *v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax

  v3 = 48 * BugCheckParameter2;
  v5 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v6 = 0LL;
  v7 = (unsigned __int8)MiLockPageInline(v5);
  v8 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v5 + 40) >> 39) & 0x3FFLL));
  MiUpdateLargePageBitMap(v8, BugCheckParameter2, 1uLL, 0, 0);
  *(_QWORD *)(v5 + 24) &= 0xC000000000000000uLL;
  v9 = *(_WORD *)(v5 + 32) == 2;
  *(_WORD *)(v5 + 32) -= 2;
  if ( v9 )
  {
    if ( !MiIsPfnFromSlabAllocation(v5) )
      v6 = (*(_BYTE *)(v5 + 35) & 0x40) == 0;
    if ( (a2 & 1) != 0 )
    {
      v10 = 1;
      *(_BYTE *)(v5 + 34) &= ~0x10u;
    }
    else
    {
      v11 = (_QWORD *)qword_140C4ED00;
      if ( qword_140C4ED00 && ((*(_QWORD *)(v5 + 40) >> 60) & 7) == 1 )
      {
        v12 = v3 / 48;
        while ( v11 )
        {
          v13 = v11[3];
          if ( v12 < v13 )
          {
            v11 = (_QWORD *)*v11;
          }
          else
          {
            if ( v12 - v13 < v11[4] )
            {
              v10 = 256;
              goto LABEL_16;
            }
            v11 = (_QWORD *)v11[1];
          }
        }
      }
      v10 = 2;
    }
LABEL_16:
    MiInsertPageInFreeOrZeroedList(BugCheckParameter2, v10);
  }
  else
  {
    *(_BYTE *)(v5 + 34) |= 7u;
    *(_QWORD *)(v5 + 24) |= 0x4000000000000000uLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v9 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  if ( v6 )
    MiFreeLargePageCharges(v8, v6);
  return v6;
}
