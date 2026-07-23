/*
 * XREFs of PopCalculateCsSummary @ 0x14056E490
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14056EB48 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     RtlGetInterruptTimePrecise @ 0x140288C20 (RtlGetInterruptTimePrecise.c)
 *     PpmConvertTime @ 0x14033E54C (PpmConvertTime.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x1405642A0 (PpmGetPlatformSelectionVetoCounts.c)
 *     PopCalculateIdleInformation @ 0x14056EA00 (PopCalculateIdleInformation.c)
 *     PopCalculateTotalHwDripsResidency @ 0x14056EB14 (PopCalculateTotalHwDripsResidency.c)
 *     PopBatteryCapacityToRate @ 0x1405723A8 (PopBatteryCapacityToRate.c)
 *     PopBatteryGetEnergyDrainFromDischage @ 0x1405723CC (PopBatteryGetEnergyDrainFromDischage.c)
 *     PopGetModernStandbyTransitionReason @ 0x140574AF0 (PopGetModernStandbyTransitionReason.c)
 *     PopCurrentPowerState @ 0x1406F8A3C (PopCurrentPowerState.c)
 *     PopMeasureEnergyChange @ 0x1408F04BC (PopMeasureEnergyChange.c)
 *     PopQueryInputSuppressionCount @ 0x1408F159C (PopQueryInputSuppressionCount.c)
 */

__int64 __fastcall PopCalculateCsSummary(__int64 a1, int a2)
{
  LARGE_INTEGER InterruptTimePrecise; // rsi
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r15
  unsigned int EnergyDrainFromDischage; // eax
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rax
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  LONGLONG v14; // rsi
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdx
  char v17; // r11
  int v18; // edx
  int v19; // ecx
  __int128 v20; // xmm0
  char v21; // al
  char v22; // al
  __int64 v23; // r10
  __int64 v24; // r8
  KIRQL v25; // al
  unsigned __int64 v26; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v30; // zf
  int v31; // [rsp+20h] [rbp-A9h]
  int v32; // [rsp+24h] [rbp-A5h]
  int ModernStandbyTransitionReason; // [rsp+28h] [rbp-A1h]
  __int64 v34; // [rsp+30h] [rbp-99h] BYREF
  __int64 v35; // [rsp+38h] [rbp-91h] BYREF
  __int64 v36; // [rsp+40h] [rbp-89h]
  unsigned __int64 v37; // [rsp+48h] [rbp-81h] BYREF
  unsigned __int64 v38; // [rsp+50h] [rbp-79h]
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-71h] BYREF
  __int64 v40; // [rsp+60h] [rbp-69h]
  ULONGLONG v41; // [rsp+68h] [rbp-61h]
  ULONGLONG v42; // [rsp+70h] [rbp-59h]
  unsigned __int64 v43; // [rsp+78h] [rbp-51h]
  __int64 v44; // [rsp+80h] [rbp-49h]
  __int128 v45; // [rsp+88h] [rbp-41h] BYREF
  __int128 v46; // [rsp+98h] [rbp-31h]
  __int128 v47; // [rsp+A8h] [rbp-21h] BYREF
  _OWORD v48[6]; // [rsp+B8h] [rbp-11h] BYREF
  int v49; // [rsp+130h] [rbp+67h]
  int v50; // [rsp+138h] [rbp+6Fh] BYREF
  int v51; // [rsp+140h] [rbp+77h]
  int v52; // [rsp+148h] [rbp+7Fh]

  v37 = 0LL;
  memset(v48, 0, 32);
  PerformanceCounter.QuadPart = 0LL;
  LOBYTE(v38) = 0;
  v47 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  PopCalculateIdleInformation(&v45);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v5 = (InterruptTimePrecise.QuadPart - qword_140C4FD88) / 0xAuLL;
  PopGetModernStandbyTransitionReason(0LL, &v37);
  if ( v37 <= qword_140C4FD88 )
    v6 = 0LL;
  else
    v6 = (InterruptTimePrecise.QuadPart - v37) / 0xA;
  PopCurrentPowerState(v48);
  if ( v5 )
  {
    EnergyDrainFromDischage = PopBatteryGetEnergyDrainFromDischage((unsigned int)PopCsConsumption, HIDWORD(v48[0]));
    v49 = PopBatteryCapacityToRate(EnergyDrainFromDischage, v5);
  }
  else
  {
    v49 = 0;
  }
  v8 = PopMeasureEnergyChange(&v47, &CsSessionEnergyCounter);
  v52 = HIDWORD(xmmword_140C23614);
  if ( HIDWORD(xmmword_140C23614) )
    LODWORD(v8) = (unsigned int)(100 * xmmword_140C23624) / HIDWORD(xmmword_140C23614);
  else
    LOBYTE(v8) = 0;
  v9 = 0;
  if ( (xmmword_140C23614 & 0x40000000) == 0 )
    v9 = xmmword_140C23624;
  v51 = v8;
  v40 = *((_QWORD *)&v45 + 1) - qword_140C4FD90;
  v31 = v9;
  v32 = DWORD2(v46) - dword_140C4FDA0;
  v10 = PopCalculateTotalHwDripsResidency(qword_140C4FE18, v46, v5);
  v11 = v5 + qword_140C4FD98 - v45;
  v44 = v10;
  v12 = _InterlockedExchangeAdd64(&qword_140C4FEC0, 0LL);
  if ( v12 )
    v12 = (v12 - qword_140C4FD88) / 0xA;
  v36 = qword_140C4FDD0;
  v36 -= PpmConvertTime(qword_140C4FDC0, PopQpcFrequency, 0xF4240uLL);
  v13 = qword_140C4FDE0;
  v43 = v5 - qword_140C4FDD0;
  if ( qword_140C4FDD8 )
  {
    if ( qword_140C4FD88 <= (unsigned __int64)qword_140C4FDD8 )
      v14 = InterruptTimePrecise.QuadPart - qword_140C4FDD8;
    else
      v14 = InterruptTimePrecise.QuadPart - qword_140C4FD88;
    v13 = v14 + qword_140C4FDE0;
  }
  v15 = v13 / 0xA;
  v41 = PpmConvertTime(qword_140C4FDF0, PopQpcFrequency, 0xF4240uLL);
  v42 = PpmConvertTime(qword_140C4FE00, PopQpcFrequency, 0xF4240uLL);
  v34 = 0LL;
  v35 = 0LL;
  ModernStandbyTransitionReason = PopGetModernStandbyTransitionReason(0LL, 0LL);
  PpmGetPlatformSelectionVetoCounts(dword_140C4FF00, &v34, &v35);
  v34 -= qword_140C4FE20;
  v35 -= qword_140C4FE28;
  if ( qword_140C4FDA8 )
  {
    v16 = 100 * qword_140C4FDB0 % (unsigned __int64)qword_140C4FDA8;
    v38 = 100 * qword_140C4FDB0 / (unsigned __int64)qword_140C4FDA8;
  }
  v50 = 0;
  PopQueryInputSuppressionCount(&v50, v16);
  v18 = v50 - dword_140C4FE78;
  v19 = v52;
  v20 = v47;
  *(_DWORD *)a1 = v49;
  *(_QWORD *)(a1 + 40) = v40;
  *(_DWORD *)(a1 + 56) = v32;
  *(_QWORD *)(a1 + 72) = v36;
  *(_QWORD *)(a1 + 96) = v41;
  *(_QWORD *)(a1 + 104) = v42;
  *(_QWORD *)(a1 + 80) = v43;
  *(_DWORD *)(a1 + 116) = ModernStandbyTransitionReason;
  *(_QWORD *)(a1 + 128) = v44;
  *(_BYTE *)(a1 + 160) = v38;
  v21 = 2 * v51;
  *(_DWORD *)(a1 + 24) = v19;
  *(_BYTE *)(a1 + 124) = v17 & 1 ^ v21;
  v22 = *(_BYTE *)(a1 + 125);
  *(_DWORD *)(a1 + 28) = v31;
  *(_OWORD *)(a1 + 8) = v20;
  *(_QWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 48) = v11;
  *(_QWORD *)(a1 + 64) = v12;
  *(_QWORD *)(a1 + 88) = v15;
  *(_DWORD *)(a1 + 120) = a2;
  *(_QWORD *)(a1 + 136) = v23;
  *(_QWORD *)(a1 + 144) = v24;
  *(_QWORD *)(a1 + 152) = v6;
  v50 = v18;
  *(_BYTE *)(a1 + 125) ^= (byte_140C4FE41 ^ v22) & 1;
  LOBYTE(v19) = *(_BYTE *)(a1 + 125) ^ (byte_140C4FE41 ^ *(_BYTE *)(a1 + 125)) & 2;
  *(_BYTE *)(a1 + 125) = v19;
  *(_BYTE *)(a1 + 125) = v19 ^ (byte_140C4FE41 ^ v19) & 4;
  *(_DWORD *)(a1 + 164) = dword_140C4FE30;
  *(_DWORD *)(a1 + 168) = dword_140C4FE34;
  *(_BYTE *)(a1 + 172) = byte_140C4FE38;
  *(_DWORD *)(a1 + 176) = dword_140C4FE3C;
  *(_DWORD *)(a1 + 180) = dword_140C4FE44;
  *(_DWORD *)(a1 + 184) = dword_140C4FE48;
  *(_BYTE *)(a1 + 188) = byte_140C4FE4C;
  *(_DWORD *)(a1 + 192) = HIDWORD(v48[0]);
  *(_DWORD *)(a1 + 196) = DWORD2(v48[0]);
  *(_BYTE *)(a1 + 204) = byte_140C4FE54;
  *(_BYTE *)(a1 + 205) = byte_140C4FE55;
  *(_DWORD *)(a1 + 208) = dword_140C4FE58;
  *(_DWORD *)(a1 + 212) = dword_140C4FE5C;
  *(_DWORD *)(a1 + 216) = v18;
  *(_QWORD *)(a1 + 224) = qword_140C4FE08;
  *(_QWORD *)(a1 + 232) = qword_140C4FE10;
  *(_DWORD *)(a1 + 264) = dword_140C4FE7C;
  *(_DWORD *)(a1 + 268) = dword_140C4FE80;
  v25 = KeAcquireSpinLockRaiseToDpc(&qword_140C22EB8);
  *(_QWORD *)(a1 + 248) = qword_140C22EA8;
  *(_QWORD *)(a1 + 240) = qword_140C22EB0;
  *(_QWORD *)(a1 + 256) = PopDisplayOnPerformance;
  v26 = v25;
  KxReleaseSpinLock(&qword_140C22EB8);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v26 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
        v30 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v30 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v26);
  return result;
}
