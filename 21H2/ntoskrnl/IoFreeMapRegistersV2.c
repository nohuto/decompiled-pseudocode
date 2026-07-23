/*
 * XREFs of IoFreeMapRegistersV2 @ 0x1404CD1E0
 * Callers:
 *     IoFreeMapRegisters @ 0x1403A2DF0 (IoFreeMapRegisters.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpDmaFreeMapRegisters @ 0x1404C7CF8 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x1404CCF28 (HalpDmaProcessMapRegisterQueueV2.c)
 */

void __fastcall IoFreeMapRegistersV2(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // r14
  char v5; // bp
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf

  v3 = *(_QWORD *)(a1 + 152);
  if ( v3 && a2 )
  {
    v5 = 0;
    CurrentIrql = 0;
    if ( KeGetCurrentIrql() < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      v5 = 1;
    }
    if ( a3 )
      HalpDmaFreeMapRegisters(a1, a2, a3);
    HalpDmaProcessMapRegisterQueueV2(v3, *(_BYTE *)(a1 + 434));
    if ( v5 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v8 = KeGetCurrentIrql();
          if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v10 = CurrentPrcb->SchedulerAssist;
            v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v12 = (v11 & v10[5]) == 0;
            v10[5] &= v11;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
  }
}
