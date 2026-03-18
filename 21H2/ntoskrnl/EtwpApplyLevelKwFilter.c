/*
 * XREFs of EtwpApplyLevelKwFilter @ 0x14046148C
 * Callers:
 *     EtwpEventWriteFull @ 0x140300E50 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1407B4D70 (EtwpWriteUserEvent.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     EtwpApplyLevelKwFilterInner @ 0x14041AAD4 (EtwpApplyLevelKwFilterInner.c)
 */

char __fastcall EtwpApplyLevelKwFilter(__int64 a1, unsigned int a2, unsigned __int8 a3, __int64 a4, char a5)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  char v8; // di
  __int64 v9; // r11
  unsigned __int8 v10; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf

  if ( !a5 )
    return EtwpApplyLevelKwFilterInner(a1, a2, a3, a4);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v8 = EtwpApplyLevelKwFilterInner(a1, a2, a3, a4);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v10 = KeGetCurrentIrql();
      if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(v9 << (CurrentIrql + 1));
        v14 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v8;
}
