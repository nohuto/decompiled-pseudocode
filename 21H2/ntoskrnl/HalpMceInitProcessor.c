/*
 * XREFs of HalpMceInitProcessor @ 0x140A5A8F8
 * Callers:
 *     HalpInitializeMce @ 0x140A5A6CC (HalpInitializeMce.c)
 *     HalpMceInit @ 0x140A5A7C8 (HalpMceInit.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     HalpMcaSetProcessorConfig @ 0x140A53828 (HalpMcaSetProcessorConfig.c)
 *     HalpMceInitializeErrorPacket @ 0x140A5A98C (HalpMceInitializeErrorPacket.c)
 */

__int64 __fastcall HalpMceInitProcessor(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf

  if ( HalpMcaEnabled )
    HalpMceInitializeErrorPacket();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  HalpMcaSetProcessorConfig(a1, a2);
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
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
