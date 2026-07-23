/*
 * XREFs of IoFreeMapRegistersV3 @ 0x1403A2E24
 * Callers:
 *     IoFreeMapRegisters @ 0x1403A2DF0 (IoFreeMapRegisters.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpDmaProcessMapRegisterQueueV3 @ 0x1404C6598 (HalpDmaProcessMapRegisterQueueV3.c)
 *     HalpDmaFreeMapRegisters @ 0x1404C7CF8 (HalpDmaFreeMapRegisters.c)
 */

void __fastcall IoFreeMapRegistersV3(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v4; // r10
  char v6; // bp
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf

  v3 = *(_QWORD *)(a1 + 152);
  v4 = a2;
  if ( v3 && a2 )
  {
    v6 = 0;
    CurrentIrql = 0;
    if ( KeGetCurrentIrql() < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        a2 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= a2;
      }
      v6 = 1;
    }
    if ( a3 )
      HalpDmaFreeMapRegisters(a1, v4, a3);
    LOBYTE(a2) = *(_BYTE *)(a1 + 434);
    HalpDmaProcessMapRegisterQueueV3(v3, a2);
    if ( v6 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v9 = KeGetCurrentIrql();
          if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v11 = CurrentPrcb->SchedulerAssist;
            v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v13 = (v12 & v11[5]) == 0;
            v11[5] &= v12;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
  }
}
