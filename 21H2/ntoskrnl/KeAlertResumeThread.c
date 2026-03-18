/*
 * XREFs of KeAlertResumeThread @ 0x14056B0EC
 * Callers:
 *     NtAlertResumeThread @ 0x1409B2C30 (NtAlertResumeThread.c)
 * Callees:
 *     KeAlertThread @ 0x1402ECB90 (KeAlertThread.c)
 *     KeResumeThread @ 0x1402EEAA8 (KeResumeThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeAlertResumeThread(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned int v4; // esi
  unsigned __int8 v5; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v7; // r8
  int v8; // eax
  bool v9; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  KeAlertThread(a1, 0);
  v4 = KeResumeThread(a1, 1u);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v5 = KeGetCurrentIrql();
      if ( v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v9 = (v8 & v7[5]) == 0;
        v7[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v4;
}
