/*
 * XREFs of MiGetSystemPage @ 0x14025EE78
 * Callers:
 *     MiGetPageForHeader @ 0x14025C5CC (MiGetPageForHeader.c)
 *     MiMapNewSession @ 0x14078724C (MiMapNewSession.c)
 * Callees:
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiWaitForFreePage @ 0x14055C43C (MiWaitForFreePage.c)
 */

__int64 __fastcall MiGetSystemPage(__int64 a1, __int64 a2)
{
  unsigned __int32 v3; // edi
  __int64 i; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  int v10; // edx
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf

  v3 = *(_DWORD *)(a2 + 8) & _InterlockedExchangeAdd(*(volatile signed __int32 **)a2, 1u) | *(_DWORD *)(a2 + 12);
  for ( i = MiGetPage(a1, v3, 770LL); i == -1; i = MiGetPage(a1, v3, 770LL) )
  {
    if ( KeGetCurrentIrql() == 2 )
      return 0LL;
    MiWaitForFreePage(a1);
  }
  v5 = 48 * i - 0x58000000000LL;
  v6 = (unsigned __int8)MiLockPageInline(v5);
  *(_QWORD *)(v5 + 24) &= 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return v5;
}
