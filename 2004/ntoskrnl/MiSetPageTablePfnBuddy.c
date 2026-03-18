/*
 * XREFs of MiSetPageTablePfnBuddy @ 0x1402E2F54
 * Callers:
 *     KiInSwapProcesses @ 0x140280CC8 (KiInSwapProcesses.c)
 *     MiInitializeUnusablePfns @ 0x1403A86F0 (MiInitializeUnusablePfns.c)
 *     MiMakeOutswappedPageResident @ 0x1405265F0 (MiMakeOutswappedPageResident.c)
 *     MiAllocateTopLevelPage @ 0x1406ABFD4 (MiAllocateTopLevelPage.c)
 *     MiMapNewSession @ 0x140774CAC (MiMapNewSession.c)
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 *     MiInitializeBootProcess @ 0x140A55BC4 (MiInitializeBootProcess.c)
 * Callees:
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSetPageTablePfnBuddy(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v5; // bl
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  if ( a3 )
    v5 = 17;
  else
    v5 = MiLockPageInline(a1);
  result = 0xFFFFFFFFFFE0000LL;
  *(_QWORD *)a1 ^= (*(_QWORD *)a1 ^ (a2 << 13)) & 0xFFFFFFFFFFE0000LL;
  if ( v5 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << (v5 + 1));
          v11 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    result = v5;
    __writecr8(v5);
  }
  return result;
}
