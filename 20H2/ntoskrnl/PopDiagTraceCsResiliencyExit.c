/*
 * XREFs of PopDiagTraceCsResiliencyExit @ 0x14056F8E4
 * Callers:
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x1408FC8C4 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     PpmConvertTime @ 0x14033E54C (PpmConvertTime.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     PopBatteryGetEnergyDrainFromDischage @ 0x1405723CC (PopBatteryGetEnergyDrainFromDischage.c)
 */

__int64 __fastcall PopDiagTraceCsResiliencyExit(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  KIRQL v12; // al
  char v13; // r9
  unsigned __int64 v14; // rdi
  __int64 v15; // r10
  int EnergyDrainFromDischage; // edx
  int v17; // ecx
  __int64 v18; // rdx
  ULONGLONG v19; // rax
  __int64 v20; // rdx
  ULONGLONG v21; // rax
  __int64 v22; // rdx
  ULONGLONG *v23; // rbx
  __int64 v24; // rbp
  __int64 v25; // rsi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v29; // zf
  __int128 v30; // [rsp+20h] [rbp-28h]

  DWORD1(v30) = 0;
  v12 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  v13 = byte_140C22FE8;
  v14 = v12;
  xmmword_140C23028 = *(_OWORD *)a8;
  xmmword_140C23038 = *(_OWORD *)(a8 + 16);
  v15 = a5;
  qword_140C23048 = *(_QWORD *)(a8 + 32);
  if ( a5 )
  {
    EnergyDrainFromDischage = PopBatteryGetEnergyDrainFromDischage(
                                (unsigned int)dword_140C22FE4,
                                *(unsigned int *)(a2 + 12));
    LODWORD(v30) = xmmword_140C22FF0 | *(_DWORD *)a4;
    *((_QWORD *)&v30 + 1) = *((_QWORD *)&xmmword_140C22FF0 + 1) - *(_QWORD *)(a4 + 8);
  }
  else
  {
    EnergyDrainFromDischage = 0;
    *((_QWORD *)&v30 + 1) = 0LL;
    LODWORD(v30) = xmmword_140C22FF0;
  }
  v17 = 0;
  if ( byte_140C22FE2 )
    v17 = 2;
  if ( byte_140C22FE1 )
    v17 |= 1u;
  if ( !v13 || !a3 )
    v17 |= 4u;
  if ( byte_140C22FE3 )
    v17 |= 8u;
  if ( byte_140C23011 )
    v17 |= 0x10u;
  if ( byte_140C23010 )
    v17 |= 0x20u;
  *(_DWORD *)(a1 + 68) = dword_140C2300C;
  *(_DWORD *)(a1 + 64) = dword_140C23008;
  *(_DWORD *)(a1 + 56) = dword_140C23000;
  *(_DWORD *)(a1 + 60) = dword_140C23004;
  *(_QWORD *)(a1 + 72) = qword_140C23020;
  *(_QWORD *)(a1 + 16) = a6;
  *(_DWORD *)(a1 + 32) = EnergyDrainFromDischage;
  v18 = PopQpcFrequency;
  *(_QWORD *)(a1 + 24) = a7;
  *(_DWORD *)a1 = v17;
  *(_QWORD *)(a1 + 8) = v15;
  *(_OWORD *)(a1 + 40) = v30;
  v19 = PpmConvertTime(qword_140C23060, v18, 0xF4240uLL);
  v20 = PopQpcFrequency;
  *(_QWORD *)(a1 + 120) = v19;
  v21 = PpmConvertTime(qword_140C23068, v20, 0xF4240uLL);
  v22 = PopQpcFrequency;
  *(_QWORD *)(a1 + 128) = v21;
  *(_QWORD *)(a1 + 136) = PpmConvertTime(qword_140C23070, v22, 0xF4240uLL);
  v23 = (ULONGLONG *)&unk_140C230D0;
  v24 = 10LL;
  *(_DWORD *)(a1 + 144) = dword_140C23078;
  *(_OWORD *)(a1 + 80) = xmmword_140C23028;
  *(_OWORD *)(a1 + 96) = xmmword_140C23038;
  *(_QWORD *)(a1 + 112) = qword_140C23048;
  v25 = a1 - (_QWORD)&unk_140C230D0;
  do
  {
    *(ULONGLONG *)((char *)v23 + v25 + 152) = PpmConvertTime(*v23, PopQpcFrequency, 0xF4240uLL);
    ++v23;
    --v24;
  }
  while ( v24 );
  PopCsResiliencyStats[0] = 0;
  KxReleaseSpinLock(&PopCsResiliencyStatsLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v14 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v29 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v29 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v14);
  return result;
}
