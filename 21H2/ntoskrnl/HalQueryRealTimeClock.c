/*
 * XREFs of HalQueryRealTimeClock @ 0x140233750
 * Callers:
 *     HalpCheckWakeupTimeAndAdjust @ 0x1404D2AC8 (HalpCheckWakeupTimeAndAdjust.c)
 *     ExpRefreshSystemTime @ 0x1407A929C (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x14094BEE0 (NtSetSystemTime.c)
 *     ExUpdateSystemTimeFromCmos @ 0x1409908C4 (ExUpdateSystemTimeFromCmos.c)
 *     HaliSetWakeAlarm @ 0x1409997D0 (HaliSetWakeAlarm.c)
 *     GetBootSystemTime @ 0x140A7282C (GetBootSystemTime.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x140233BE4 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 *     RtlpTimeToTimeFields @ 0x140233DF8 (RtlpTimeToTimeFields.c)
 *     HalpReadCmosTime @ 0x140234148 (HalpReadCmosTime.c)
 *     HalpSetVirtualRtc @ 0x14023435C (HalpSetVirtualRtc.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     HalpQueryVirtualRtc @ 0x14038417C (HalpQueryVirtualRtc.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalEfiGetTime @ 0x1404C3AB8 (HalEfiGetTime.c)
 *     HalpAcpiRealTimeToUtcTime @ 0x140863F7C (HalpAcpiRealTimeToUtcTime.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140864044 (HalpQueryAcpiRealTimeClock.c)
 */

char __fastcall HalQueryRealTimeClock(__int64 a1)
{
  unsigned int v2; // edi
  char *v3; // rbx
  unsigned int v4; // esi
  char v5; // al
  __int64 v6; // rax
  unsigned int v7; // r8d
  __int64 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // ebx
  int AcpiRealTimeClock; // eax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int Time; // edi
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  __int64 v21; // rbx
  signed __int32 v23[8]; // [rsp+0h] [rbp-70h] BYREF
  char v24[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v25; // [rsp+28h] [rbp-48h] BYREF
  __int64 v26; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v27[2]; // [rsp+38h] [rbp-38h] BYREF
  LARGE_INTEGER Timeout[2]; // [rsp+58h] [rbp-18h] BYREF

  v25 = 0LL;
  v24[0] = 0;
  *(_OWORD *)&Timeout[0].LowPart = 0LL;
  v27[0] = 0LL;
  HalpSetVirtualRtc(0LL);
  v2 = ((unsigned int)HalpPlatformFlags >> 2) & 1;
  if ( v2 )
    HalpReadCmosTime(v27);
  v26 = 0LL;
  v3 = (char *)ExLeapSecondData;
  v27[1] = 0LL;
  if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
  {
    v5 = RtlpTimeFieldsToTimeNoLeapSeconds(v27, &v25);
    goto LABEL_22;
  }
  v4 = *((_DWORD *)ExLeapSecondData + 1);
  _InterlockedOr(v23, 0);
  if ( !(unsigned __int8)RtlpTimeFieldsToTimeNoLeapSeconds(v27, &v26) )
    goto LABEL_6;
  v6 = v26;
  v7 = 0;
  if ( !v4 )
    goto LABEL_20;
  v8 = (__int64 *)(v3 + 8);
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 >= 0 )
    {
      if ( v6 < v9 + 10000000 )
      {
        if ( v6 < v9 )
          goto LABEL_20;
        v6 = 2 * v6 - v9;
      }
      else
      {
        v6 += 10000000LL;
      }
      goto LABEL_16;
    }
    v10 = v9 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v6 < v10 + 10000000 )
      break;
    v6 -= 10000000LL;
LABEL_16:
    ++v7;
    v26 = v6;
    ++v8;
    if ( v7 >= v4 )
      goto LABEL_20;
  }
  if ( v6 < v10 || v6 >= v10 + 10000000 )
  {
LABEL_20:
    v25 = v6;
    v5 = 1;
    goto LABEL_22;
  }
LABEL_6:
  v5 = 0;
LABEL_22:
  if ( (_BYTE)v2 && v5 )
  {
    if ( !ExpRealTimeIsUniversal )
      v25 += *(_QWORD *)(*(_QWORD *)(PsGetCurrentServerSiloGlobals() + 1064) + 440LL);
    goto LABEL_55;
  }
  v11 = SystemPowerPhase;
  if ( KeGetCurrentIrql() < 2u && !SystemPowerPhase )
  {
    AcpiRealTimeClock = HalpQueryAcpiRealTimeClock(Timeout);
    if ( AcpiRealTimeClock < 0 )
    {
      if ( AcpiRealTimeClock != -1073741822 )
        _InterlockedOr(&HalpTimerRtcErrorCode, 2u);
    }
    else if ( (int)HalpAcpiRealTimeToUtcTime(Timeout, &v25) >= 0 )
    {
      goto LABEL_30;
    }
  }
  if ( HalFirmwareTypeEfi && v11 && (HalpPlatformFlags & 8) == 0 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      Time = HalEfiGetTime(&v25);
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      Time = HalEfiGetTime(&v25);
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
            v20 = (v19 & v18[5]) == 0;
            v18[5] &= v19;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    if ( Time < 0 )
    {
      if ( Time != -1073741822 )
        _InterlockedOr(&HalpTimerRtcErrorCode, 4u);
      goto LABEL_53;
    }
LABEL_30:
    LOBYTE(v2) = 1;
LABEL_56:
    v21 = v25;
    if ( MEMORY[0xFFFFF78000000014] > v25 + 864000000000LL )
    {
      v25 = MEMORY[0xFFFFF78000000014];
      _InterlockedOr(&HalpTimerRtcErrorCode, 1u);
      v21 = MEMORY[0xFFFFF78000000014];
    }
    if ( !ExpRealTimeIsUniversal )
      v25 = v21 - *(_QWORD *)(*(_QWORD *)(PsGetCurrentServerSiloGlobals() + 1064) + 440LL);
    RtlpTimeToTimeFields(&v25, a1);
  }
  else
  {
LABEL_53:
    LOBYTE(v2) = HalpQueryVirtualRtc(&v25, v24);
    if ( !v24[0] )
      _InterlockedOr(&HalpTimerRtcErrorCode, 8u);
LABEL_55:
    if ( (_BYTE)v2 )
      goto LABEL_56;
    _InterlockedOr(&HalpTimerRtcErrorCode, 0x10u);
  }
  return v2;
}
