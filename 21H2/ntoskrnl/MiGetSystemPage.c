/*
 * XREFs of MiGetSystemPage @ 0x140270ED8
 * Callers:
 *     MiGetPageForHeader @ 0x14026E62C (MiGetPageForHeader.c)
 *     MiMapNewSession @ 0x14078708C (MiMapNewSession.c)
 * Callees:
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiWaitForFreePage @ 0x14055C1FC (MiWaitForFreePage.c)
 */

__int64 __fastcall MiGetSystemPage(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 i; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  int v12; // edx
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf

  v3 = *(_DWORD *)(a2 + 8) & _InterlockedExchangeAdd(*(volatile signed __int32 **)a2, 1u) | *(_DWORD *)(a2 + 12);
  for ( i = MiGetPage(a1, v3, 770LL); i == -1; i = MiGetPage(a1, v3, 770LL) )
  {
    if ( KeGetCurrentIrql() == 2 )
      return 0LL;
    MiWaitForFreePage(a1);
  }
  v7 = 48 * i - 0x58000000000LL;
  v8 = (unsigned __int8)MiLockPageInline(v7, v5, v6);
  *(_QWORD *)(v7 + 24) &= 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  return v7;
}
