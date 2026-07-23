/*
 * XREFs of IoFreeAdapterChannelV3 @ 0x1404C65DC
 * Callers:
 *     IoFreeAdapterChannel @ 0x1404B8F50 (IoFreeAdapterChannel.c)
 *     IoFreeAdapterChannelV3Passive @ 0x1404C67D0 (IoFreeAdapterChannelV3Passive.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpDmaGetNextWcb @ 0x1404B7C24 (HalpDmaGetNextWcb.c)
 *     IoFreeAdapterChannelV3Internal @ 0x1404C6780 (IoFreeAdapterChannelV3Internal.c)
 *     HalpAllocateDmaResourcesInternal @ 0x1404CA81C (HalpAllocateDmaResourcesInternal.c)
 */

void __fastcall IoFreeAdapterChannelV3(PDMA_ADAPTER DmaAdapter)
{
  unsigned __int8 CurrentIrql; // di
  __int64 *NextWcb; // rax
  char v4; // si
  int v5; // eax
  _DWORD *SchedulerAssist; // r9
  char DmaResourcesInternal; // bp
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v10; // r9
  int v11; // eax
  bool v12; // zf

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql == 2 && *(_DWORD *)&DmaAdapter[32].Version )
  {
    if ( LOBYTE(DmaAdapter[13].DmaOperations) )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&DmaAdapter[29].DmaOperations, CriticalWorkQueue);
  }
  else
  {
    ((void (*)(void))IoFreeAdapterChannelV3Internal)();
    do
    {
      NextWcb = HalpDmaGetNextWcb((__int64)DmaAdapter);
      if ( !NextWcb )
        break;
      DmaAdapter[21].DmaOperations = (_DMA_OPERATIONS *)NextWcb;
      v4 = 0;
      *(_DWORD *)&DmaAdapter[15].Version = *((_DWORD *)NextWcb + 10);
      v5 = *((_DWORD *)NextWcb + 4);
      LODWORD(DmaAdapter[38].DmaOperations) = 0;
      HIDWORD(DmaAdapter[23].DmaOperations) = v5;
      if ( CurrentIrql < 2u )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
        v4 = 1;
      }
      DmaResourcesInternal = HalpAllocateDmaResourcesInternal(DmaAdapter);
      if ( v4 )
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
    while ( DmaResourcesInternal );
  }
}
