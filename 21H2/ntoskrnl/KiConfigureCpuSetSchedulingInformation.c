/*
 * XREFs of KiConfigureCpuSetSchedulingInformation @ 0x1403C1214
 * Callers:
 *     KeConfigureHeteroProcessors @ 0x14095FD08 (KeConfigureHeteroProcessors.c)
 *     KiConfigureSchedulingInformation @ 0x140A59154 (KiConfigureSchedulingInformation.c)
 * Callees:
 *     RtlWriteAcquireTickLock @ 0x14020F26C (RtlWriteAcquireTickLock.c)
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiConfigureCpuSetSchedulingInformation(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  _WORD *v3; // r14
  _WORD *v4; // r12
  _BYTE *v5; // rsi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  bool v12; // zf
  char v13; // al
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  KxAcquireSpinLock(&KiCpuSetLock);
  RtlWriteAcquireTickLock(&KiCpuSetSequence);
  v3 = (_WORD *)(a1 + 40632);
  v4 = (_WORD *)(a1 + 40632);
  v5 = (_BYTE *)(KiCpuSetData
               + 16 * (*(unsigned __int8 *)(a1 + 209) + ((unsigned __int64)*(unsigned __int8 *)(a1 + 208) << 6)));
  *v5 = *(_BYTE *)(a1 + 208);
  v5[1] = *(_BYTE *)(a1 + 209);
  _BitScanForward64(&v6, *(_QWORD *)(a1 + 34912));
  v7 = 0LL;
  v5[2] = v6;
  v8 = 5LL;
  do
  {
    if ( !(unsigned int)KeIsEmptyAffinityEx(v4) )
    {
      v9 = *(unsigned __int8 *)(a1 + 208);
      if ( (unsigned __int16)v9 >= *v3 )
        v7 = 0LL;
      else
        v7 = *(_QWORD *)&v3[4 * v9 + 4];
    }
    v4 += 132;
    v3 += 132;
    --v8;
  }
  while ( v8 );
  if ( v7 )
  {
    _BitScanForward64(&v10, v7);
    v5[3] = v10;
  }
  _BitScanForward64(&v11, *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL));
  v12 = KeHeteroSystem == 0;
  v5[4] = v11;
  if ( v12 )
    v13 = *(_BYTE *)(a1 + 34059);
  else
    v13 = *(_BYTE *)(a1 + 34056);
  v5[5] = v13;
  v5[6] = *(_BYTE *)(a1 + 34057);
  ++KiCpuSetSequence;
  KxReleaseSpinLock(&KiCpuSetLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
