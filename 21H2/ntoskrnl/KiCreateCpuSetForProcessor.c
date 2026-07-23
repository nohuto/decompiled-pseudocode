/*
 * XREFs of KiCreateCpuSetForProcessor @ 0x14099F1FC
 * Callers:
 *     KiCompleteKernelInit @ 0x14099F010 (KiCompleteKernelInit.c)
 *     KiAllocateCpuSetData @ 0x140A41960 (KiAllocateCpuSetData.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     RtlWriteAcquireTickLock @ 0x14022965C (RtlWriteAcquireTickLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     RtlWriteReleaseTickLock @ 0x1403A7544 (RtlWriteReleaseTickLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

_UNKNOWN **__fastcall KiCreateCpuSetForProcessor(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // rbx
  int v5; // r8d
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned __int64 *v9; // rdx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( KiCpuSetAffinities )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v4 = *(unsigned __int8 *)(a1 + 208);
    KxAcquireSpinLock(&KiCpuSetLock);
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    v5 = *(unsigned __int8 *)(a1 + 209);
    ++KiCpuSetCount[v4];
    v6 = (unsigned int)v4;
    v7 = *(_QWORD *)(a1 + 200);
    ++KiTotalCpuSetCount;
    v8 = (unsigned int)(v5 + ((_DWORD)v4 << 6));
    *((_QWORD *)KiCpuSetAffinities + v8) = v7;
    *((_QWORD *)KiCpuSetAffinitiesShadow + v8) = *(_QWORD *)(a1 + 200);
    KiSystemAllowedCpuSets[2 * (unsigned int)v6] |= 1LL << v5;
    KiNonParkedCpuSets[v6] |= 1LL << v5;
    v9 = &PsInitialSystemProcess[2].Affinity.Bitmap[16];
    if ( (HIDWORD(PsInitialSystemProcess[2].Header.WaitListHead.Flink) & 0x80u) != 0 )
      v9 = (unsigned __int64 *)*v9;
    v9[v6] |= 1LL << v5;
    RtlWriteReleaseTickLock(&KiCpuSetSequence);
    KxReleaseSpinLock(&KiCpuSetLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & v13[5]) == 0;
          v13[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    result = (_UNKNOWN **)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
