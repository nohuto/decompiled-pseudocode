/*
 * XREFs of IommuDevicePowerChange @ 0x1404D8090
 * Callers:
 *     <none>
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1402F6750 (ExRundownCompleted.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommuDevicePowerChange(__int64 a1, __int64 a2, char a3)
{
  char v3; // bp
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  struct _EX_RUNDOWN_REF *v6; // rdi
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf

  v3 = 0;
  CurrentIrql = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    v3 = 1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
    }
  }
  v6 = (struct _EX_RUNDOWN_REF *)(a2 + 48);
  if ( a3 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(a2 + 24) + 240LL))(
      *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL),
      *(_QWORD *)(a2 + 40),
      *(unsigned int *)(a2 + 56));
    _InterlockedExchange64((volatile __int64 *)v6, 0LL);
  }
  else
  {
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a2 + 48));
    ExRundownCompleted(v6);
  }
  if ( v3 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v7 = KeGetCurrentIrql();
        if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v11 = (v10 & v9[5]) == 0;
          v9[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return 0LL;
}
