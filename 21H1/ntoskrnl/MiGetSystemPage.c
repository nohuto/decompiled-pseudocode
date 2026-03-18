/*
 * XREFs of MiGetSystemPage @ 0x14034C0CC
 * Callers:
 *     MiGetPageForHeader @ 0x14034BFA0 (MiGetPageForHeader.c)
 *     MiMapNewSession @ 0x14077289C (MiMapNewSession.c)
 * Callees:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiWaitForFreePage @ 0x14055670C (MiWaitForFreePage.c)
 */

__int64 __fastcall MiGetSystemPage(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 i; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *v7; // r9
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  int v13; // edx
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf

  v3 = *(_DWORD *)(a2 + 8) & _InterlockedExchangeAdd(*(volatile signed __int32 **)a2, 1u) | *(_DWORD *)(a2 + 12);
  for ( i = MiGetPage(a1, v3, 770LL); i == -1; i = MiGetPage(a1, v3, 770LL) )
  {
    if ( KeGetCurrentIrql() == 2 )
      return 0LL;
    MiWaitForFreePage(a1);
  }
  v8 = 48 * i - 0x58000000000LL;
  v9 = (unsigned __int8)MiLockPageInline(v8, v5, v6, v7);
  *(_QWORD *)(v8 + 24) &= 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return v8;
}
