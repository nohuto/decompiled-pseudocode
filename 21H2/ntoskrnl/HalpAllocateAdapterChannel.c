/*
 * XREFs of HalpAllocateAdapterChannel @ 0x1404CA610
 * Callers:
 *     HalpBuildScatterGatherList @ 0x14039F584 (HalpBuildScatterGatherList.c)
 *     HalAllocateAdapterChannel @ 0x1404B8CE0 (HalAllocateAdapterChannel.c)
 *     HalAllocateAdapterChannelEx @ 0x1404CA480 (HalAllocateAdapterChannelEx.c)
 *     HalRealAllocateAdapterChannelV3 @ 0x1404CA5C0 (HalRealAllocateAdapterChannelV3.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpDmaStartWcb @ 0x1404B86F0 (HalpDmaStartWcb.c)
 *     HalpAllocateDmaResourcesInternal @ 0x1404CA81C (HalpAllocateDmaResourcesInternal.c)
 */

__int64 __fastcall HalpAllocateAdapterChannel(
        PDMA_ADAPTER DmaAdapter,
        __int64 a2,
        unsigned int a3,
        int a4,
        char a5,
        __int64 a6)
{
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // esi
  char v15; // r14
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v20; // r9
  int v21; // edx
  bool v22; // zf

  if ( (*(_DWORD *)(a2 + 20) & 2) != 0 )
  {
    _m_prefetchw((const void *)(a2 - 8));
    if ( (_InterlockedOr((volatile signed __int32 *)(a2 - 8), 4u) & 2) != 0 )
      return 3221225760LL;
  }
  if ( LOBYTE(DmaAdapter[27].Version) && a3 > *(_DWORD *)&DmaAdapter[14].Version )
    return 3221225626LL;
  v10 = *(_DWORD *)(a2 + 20);
  if ( (a5 & 2) != 0 )
    v11 = v10 | 4;
  else
    v11 = v10 & 0xFFFFFFFB;
  *(_DWORD *)(a2 + 20) = v11;
  *(_QWORD *)(a2 + 24) = a6;
  v12 = (a4 << 12) | *(_DWORD *)(a2 + 20) & 0xFFF;
  *(_DWORD *)(a2 + 40) = a3;
  *(_DWORD *)(a2 + 16) = 1;
  if ( (a5 & 1) != 0 )
    v13 = v12 | 1;
  else
    v13 = v12 & 0xFFFFFFFE;
  *(_DWORD *)(a2 + 20) = v13;
  v14 = (a5 & 1) != 0 ? 0xC000009A : 0;
  if ( HalpDmaStartWcb((__int64)DmaAdapter, (_QWORD *)a2, v13 & 1) )
  {
    DmaAdapter[21].DmaOperations = (_DMA_OPERATIONS *)a2;
    v15 = 0;
    CurrentIrql = 0;
    *(_DWORD *)&DmaAdapter[15].Version = a3;
    HIDWORD(DmaAdapter[23].DmaOperations) = 1;
    LODWORD(DmaAdapter[38].DmaOperations) = 0;
    if ( KeGetCurrentIrql() < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      v15 = 1;
    }
    if ( (unsigned __int8)HalpAllocateDmaResourcesInternal(DmaAdapter) )
      v14 = 0;
    if ( v15 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v18 = KeGetCurrentIrql();
          if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v20 = CurrentPrcb->SchedulerAssist;
            v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v22 = (v21 & v20[5]) == 0;
            v20[5] &= v21;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  return v14;
}
