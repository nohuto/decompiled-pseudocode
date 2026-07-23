/*
 * XREFs of KeAbProcessBaseIoPriorityChangeInternal @ 0x1403020FC
 * Callers:
 *     KeAbProcessBaseIoPriorityChange @ 0x1403020C0 (KeAbProcessBaseIoPriorityChange.c)
 *     IoUpdateThreadIoRateThrottle @ 0x14050AE50 (IoUpdateThreadIoRateThrottle.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x140205B9C (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x14024652C (KiAbThreadInsertList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeAbProcessBaseIoPriorityChangeInternal(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KDPC *CurrentPrcb; // rdi
  __int64 result; // rax
  _QWORD *v5; // r8
  PVOID *p_DpcData; // rdx
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
  CurrentPrcb = (struct _KDPC *)KeGetCurrentPrcb();
  if ( !*(_BYTE *)(a1 + 871) || a2 )
  {
    if ( !*(_BYTE *)(a1 + 793) || !a2 )
      goto LABEL_4;
    v5 = (_QWORD *)(a1 + 808);
    p_DpcData = &CurrentPrcb[541].DpcData;
  }
  else
  {
    v5 = (_QWORD *)(a1 + 816);
    p_DpcData = &CurrentPrcb[541].SystemArgument2;
  }
  if ( (unsigned int)KiAbThreadInsertList(a1, p_DpcData, v5) )
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
