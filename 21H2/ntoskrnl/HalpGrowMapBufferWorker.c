/*
 * XREFs of HalpGrowMapBufferWorker @ 0x1404B91A0
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpDmaProcessMapRegisterQueueV3 @ 0x1404C6598 (HalpDmaProcessMapRegisterQueueV3.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x1404CCF28 (HalpDmaProcessMapRegisterQueueV2.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x1408654C4 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x1408655C8 (HalpDmaGrowScatterMapBuffers.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall HalpGrowMapBufferWorker(_QWORD *P)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rdx
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf

  v2 = P[4];
  v3 = (*((_DWORD *)P + 11) + 16) & 0xFFFFF;
  if ( *((_BYTE *)P + 40) )
    HalpDmaGrowScatterMapBuffers(v2, v3);
  else
    HalpDmaGrowContiguousMapBuffers(v2, v3);
  *(_DWORD *)((char *)&HalpDmaGrowMapBufferWorkerQueued + (*((_BYTE *)P + 40) != 0 ? 4 : 0)) = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v4 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v4;
  }
  v7 = *((_DWORD *)P + 12);
  if ( v7 == 2 )
  {
    LOBYTE(v4) = *((_BYTE *)P + 40);
    HalpDmaProcessMapRegisterQueueV2(v2, v4);
  }
  else if ( v7 == 3 )
  {
    LOBYTE(v4) = *((_BYTE *)P + 40);
    HalpDmaProcessMapRegisterQueueV3(v2, v4);
  }
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
  ExFreePoolWithTag(P, 0);
}
