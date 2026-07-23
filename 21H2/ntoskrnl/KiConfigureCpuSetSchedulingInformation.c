/*
 * XREFs of KiConfigureCpuSetSchedulingInformation @ 0x1403B682C
 * Callers:
 *     KeConfigureHeteroProcessors @ 0x1408BA4B8 (KeConfigureHeteroProcessors.c)
 *     KiConfigureSchedulingInformation @ 0x1409A0CB0 (KiConfigureSchedulingInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     RtlWriteAcquireTickLock @ 0x14022965C (RtlWriteAcquireTickLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiConfigureCpuSetSchedulingInformation(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 *v3; // rdx
  _BYTE *v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  KxAcquireSpinLock(&KiCpuSetLock);
  RtlWriteAcquireTickLock(&KiCpuSetSequence);
  v3 = (unsigned __int64 *)(a1 + 33904);
  v4 = (_BYTE *)(KiCpuSetData
               + 16 * (*(unsigned __int8 *)(a1 + 209) + ((unsigned __int64)*(unsigned __int8 *)(a1 + 208) << 6)));
  *v4 = *(_BYTE *)(a1 + 208);
  v4[1] = *(_BYTE *)(a1 + 209);
  _BitScanForward64(&v5, *(_QWORD *)(a1 + 33880));
  v4[2] = v5;
  v6 = 0LL;
  v7 = 5LL;
  do
  {
    v8 = *v3++;
    if ( !v8 )
      v8 = v6;
    v6 = v8;
    --v7;
  }
  while ( v7 );
  if ( v8 )
  {
    _BitScanForward64(&v8, v8);
    v4[3] = v8;
  }
  _BitScanForward64(&v9, *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL));
  v4[4] = v9;
  v4[5] = *(_BYTE *)(a1 + 33208);
  v4[6] = *(_BYTE *)(a1 + 33209);
  ++KiCpuSetSequence;
  KxReleaseSpinLock(&KiCpuSetLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
