/*
 * XREFs of KeAbProcessBaseIoPriorityChangeInternal @ 0x14024B3FC
 * Callers:
 *     KeAbProcessBaseIoPriorityChange @ 0x14024B3C0 (KeAbProcessBaseIoPriorityChange.c)
 *     IoUpdateThreadIoRateThrottle @ 0x1405090E0 (IoUpdateThreadIoRateThrottle.c)
 * Callees:
 *     KiAbThreadInsertList @ 0x140326E40 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x14035F69C (KiAbQueueAutoBoostDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeAbProcessBaseIoPriorityChangeInternal(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 result; // rax
  __int64 v5; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !*(_BYTE *)(a1 + 871) || a2 )
  {
    if ( !*(_BYTE *)(a1 + 793) || !a2 )
      goto LABEL_4;
    v5 = a1 + 808;
    p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
  }
  else
  {
    v5 = a1 + 816;
    p_AbPropagateBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
  }
  if ( (unsigned int)KiAbThreadInsertList(a1, p_AbPropagateBoostsList, v5) )
    KiAbQueueAutoBoostDpc(CurrentPrcb);
LABEL_4:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        v9 = KeGetCurrentPrcb();
        v10 = v9->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v9);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
