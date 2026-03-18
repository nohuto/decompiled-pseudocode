/*
 * XREFs of MiPreInitializeSystemImagePage @ 0x140248208
 * Callers:
 *     MiAllocateDriverPageFromRange @ 0x1403C9C90 (MiAllocateDriverPageFromRange.c)
 *     MiAllocateDriverPage @ 0x14079D08C (MiAllocateDriverPage.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402E89B0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiSetPfnBlink @ 0x140313CA0 (MiSetPfnBlink.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiPreInitializeSystemImagePage(__int64 a1, int a2)
{
  unsigned __int8 v3; // di
  char v4; // al
  __int64 v5; // rdx
  __int64 result; // rax
  unsigned __int64 v7; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  if ( a2 )
    v3 = 17;
  else
    v3 = MiLockPageInline(a1);
  *(_WORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  MiSetPfnBlink(a1, 0LL, 1LL);
  v4 = *(_BYTE *)(a1 + 34) & 0xC7;
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(a1 + 34) = v4;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_QWORD *)(a1 + 16) = 0LL;
  result = MiSetOriginalPtePfnFromFreeList(a1 + 16, v5, 0x7FFFFFFFFFFFFFFFLL);
  if ( v3 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), v7);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << (v3 + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    result = v3;
    __writecr8(v3);
  }
  return result;
}
