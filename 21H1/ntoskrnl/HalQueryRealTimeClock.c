/*
 * XREFs of HalQueryRealTimeClock @ 0x140201830
 * Callers:
 *     HalpCheckWakeupTimeAndAdjust @ 0x1404CD468 (HalpCheckWakeupTimeAndAdjust.c)
 *     ExpRefreshSystemTime @ 0x14079014C (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x140947400 (NtSetSystemTime.c)
 *     ExUpdateSystemTimeFromCmos @ 0x14098B2E0 (ExUpdateSystemTimeFromCmos.c)
 *     HaliSetWakeAlarm @ 0x140993E40 (HaliSetWakeAlarm.c)
 *     GetBootSystemTime @ 0x140A6DA24 (GetBootSystemTime.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x140201A34 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 *     RtlpTimeToTimeFields @ 0x140201C48 (RtlpTimeToTimeFields.c)
 *     HalpReadCmosTime @ 0x140201F98 (HalpReadCmosTime.c)
 *     HalpSetVirtualRtc @ 0x1402021AC (HalpSetVirtualRtc.c)
 *     HalpQueryVirtualRtc @ 0x1403814EC (HalpQueryVirtualRtc.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     HalEfiGetTime @ 0x1404BE2A8 (HalEfiGetTime.c)
 *     HalpAcpiRealTimeToUtcTime @ 0x14085F4B4 (HalpAcpiRealTimeToUtcTime.c)
 *     HalpQueryAcpiRealTimeClock @ 0x14085F57C (HalpQueryAcpiRealTimeClock.c)
 */

char __fastcall HalQueryRealTimeClock(__int64 a1)
{
  unsigned int v2; // ebx
  char *v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  char v8; // al
  __int64 v9; // rcx
  __int64 *v11; // rdi
  int v12; // ebx
  int AcpiRealTimeClock; // eax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int Time; // edi
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v19; // eax
  bool v20; // zf
  signed __int32 v21[8]; // [rsp+0h] [rbp-70h] BYREF
  char v22[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v23; // [rsp+28h] [rbp-48h] BYREF
  __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v25[2]; // [rsp+38h] [rbp-38h] BYREF
  LARGE_INTEGER Timeout[2]; // [rsp+58h] [rbp-18h] BYREF

  v23 = 0LL;
  v22[0] = 0;
  *(_OWORD *)&Timeout[0].LowPart = 0LL;
  v25[0] = 0LL;
  HalpSetVirtualRtc(0LL);
  v2 = ((unsigned int)HalpPlatformFlags >> 2) & 1;
  if ( v2 )
    HalpReadCmosTime(v25);
  v24 = 0LL;
  v3 = (char *)ExLeapSecondData;
  v25[1] = 0LL;
  if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
  {
    v8 = RtlpTimeFieldsToTimeNoLeapSeconds(v25, &v23);
    goto LABEL_8;
  }
  v4 = *((_DWORD *)ExLeapSecondData + 1);
  _InterlockedOr(v21, 0);
  if ( !(unsigned __int8)RtlpTimeFieldsToTimeNoLeapSeconds(v25, &v24) )
    goto LABEL_19;
  v7 = v24;
  v6 = 0LL;
  if ( !v4 )
    goto LABEL_7;
  v11 = (__int64 *)(v3 + 8);
  do
  {
    v5 = *v11;
    if ( *v11 >= 0 )
    {
      if ( v7 < v5 + 10000000 )
      {
        if ( v7 < v5 )
          goto LABEL_7;
        v7 = 2 * v7 - v5;
      }
      else
      {
        v7 += 10000000LL;
      }
      goto LABEL_28;
    }
    v5 &= ~0x8000000000000000uLL;
    if ( v7 < v5 + 10000000 )
      break;
    v7 -= 10000000LL;
LABEL_28:
    v6 = (unsigned int)(v6 + 1);
    v24 = v7;
    ++v11;
  }
  while ( (unsigned int)v6 < v4 );
  if ( v7 >= v5 && v7 < v5 + 10000000 )
  {
LABEL_19:
    v8 = 0;
    goto LABEL_8;
  }
LABEL_7:
  v23 = v7;
  v8 = 1;
LABEL_8:
  if ( (_BYTE)v2 && v8 )
  {
    if ( !ExpRealTimeIsUniversal )
      v23 += ExpTimeZoneBias;
    goto LABEL_12;
  }
  v12 = SystemPowerPhase;
  if ( KeGetCurrentIrql() < 2u && !SystemPowerPhase )
  {
    AcpiRealTimeClock = HalpQueryAcpiRealTimeClock(Timeout);
    if ( AcpiRealTimeClock < 0 )
    {
      if ( AcpiRealTimeClock != -1073741822 )
        _InterlockedOr(&HalpTimerRtcErrorCode, 2u);
    }
    else if ( (int)HalpAcpiRealTimeToUtcTime(Timeout, &v23) >= 0 )
    {
      goto LABEL_38;
    }
  }
  if ( HalFirmwareTypeEfi && v12 && (HalpPlatformFlags & 8) == 0 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      Time = HalEfiGetTime(&v23, v5, v6);
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v5 = (-1LL << (CurrentIrql + 1)) & 4;
        v6 = (unsigned int)v5 | SchedulerAssist[5];
        SchedulerAssist[5] = v6;
      }
      Time = HalEfiGetTime(&v23, v5, v6);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v17 = KeGetCurrentIrql();
          if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v6 = (unsigned __int64)CurrentPrcb->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v20 = (v19 & *(_DWORD *)(v6 + 20)) == 0;
            *(_DWORD *)(v6 + 20) &= v19;
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
      goto LABEL_61;
    }
LABEL_38:
    LOBYTE(v2) = 1;
LABEL_13:
    v9 = v23;
    if ( MEMORY[0xFFFFF78000000014] > v23 + 864000000000LL )
    {
      v23 = MEMORY[0xFFFFF78000000014];
      _InterlockedOr(&HalpTimerRtcErrorCode, 1u);
      v9 = MEMORY[0xFFFFF78000000014];
    }
    if ( !ExpRealTimeIsUniversal )
      v23 = v9 - ExpTimeZoneBias;
    RtlpTimeToTimeFields(&v23, a1);
  }
  else
  {
LABEL_61:
    LOBYTE(v2) = HalpQueryVirtualRtc(&v23, v22, v6);
    if ( !v22[0] )
      _InterlockedOr(&HalpTimerRtcErrorCode, 8u);
LABEL_12:
    if ( (_BYTE)v2 )
      goto LABEL_13;
    _InterlockedOr(&HalpTimerRtcErrorCode, 0x10u);
  }
  return v2;
}
