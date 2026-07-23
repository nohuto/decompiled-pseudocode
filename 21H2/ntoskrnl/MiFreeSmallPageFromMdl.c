/*
 * XREFs of MiFreeSmallPageFromMdl @ 0x14030ABF4
 * Callers:
 *     MiFreeMdlPageRun @ 0x14030AA48 (MiFreeMdlPageRun.c)
 *     MmFreeSecureKernelPages @ 0x140553944 (MmFreeSecureKernelPages.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiUpdateLargePageBitMap @ 0x14030ADE0 (MiUpdateLargePageBitMap.c)
 *     MiIsPfnFromSlabAllocation @ 0x14030DC40 (MiIsPfnFromSlabAllocation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeLargePageCharges @ 0x14055E6BC (MiFreeLargePageCharges.c)
 */

_BOOL8 __fastcall MiFreeSmallPageFromMdl(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, _DWORD *a4)
{
  char v4; // r15
  signed __int64 v5; // r14
  __int64 v7; // rbx
  _BOOL8 v8; // rdi
  unsigned __int64 v9; // rsi
  __int64 v10; // r13
  bool v11; // zf
  __int16 v12; // dx
  _QWORD *v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax

  v4 = a2;
  v5 = 48 * BugCheckParameter2;
  v7 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v8 = 0LL;
  v9 = (unsigned __int8)MiLockPageInline(v7, a2, a3, a4);
  v10 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL));
  MiUpdateLargePageBitMap(v10, BugCheckParameter2, 1, 0, 0);
  *(_QWORD *)(v7 + 24) &= 0xC000000000000000uLL;
  v11 = *(_WORD *)(v7 + 32) == 2;
  *(_WORD *)(v7 + 32) -= 2;
  if ( v11 )
  {
    if ( !(unsigned int)MiIsPfnFromSlabAllocation(v7) )
      v8 = (*(_BYTE *)(v7 + 35) & 0x40) == 0;
    if ( (v4 & 1) != 0 )
    {
      v12 = 1;
      *(_BYTE *)(v7 + 34) &= ~0x10u;
    }
    else
    {
      v13 = (_QWORD *)qword_140C4EEC0;
      if ( qword_140C4EEC0 && ((*(_QWORD *)(v7 + 40) >> 60) & 7) == 1 )
      {
        v14 = v5 / 48;
        while ( v13 )
        {
          v15 = v13[3];
          if ( v14 < v15 )
          {
            v13 = (_QWORD *)*v13;
          }
          else
          {
            if ( v14 - v15 < v13[4] )
            {
              v12 = 256;
              goto LABEL_16;
            }
            v13 = (_QWORD *)v13[1];
          }
        }
      }
      v12 = 2;
    }
LABEL_16:
    MiInsertPageInFreeOrZeroedList(BugCheckParameter2, v12);
  }
  else
  {
    *(_BYTE *)(v7 + 34) |= 7u;
    *(_QWORD *)(v7 + 24) |= 0x4000000000000000uLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v11 = (v19 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v19;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  if ( v8 )
    MiFreeLargePageCharges(v10, v8);
  return v8;
}
