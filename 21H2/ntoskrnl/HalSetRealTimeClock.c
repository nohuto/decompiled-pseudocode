/*
 * XREFs of HalSetRealTimeClock @ 0x140503420
 * Callers:
 *     ExpRefreshSystemTime @ 0x1408357A0 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1409F8350 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140A52E00 (ExpSetSystemTime.c)
 *     GetBootSystemTime @ 0x140B2EBF4 (GetBootSystemTime.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x14022D4D0 (RtlTimeFieldsToTime.c)
 *     ExLocalTimeToSystemTime @ 0x14022D7D0 (ExLocalTimeToSystemTime.c)
 *     HalpSetVirtualRtc @ 0x14022DA40 (HalpSetVirtualRtc.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     HalEfiSetTime @ 0x1405101D0 (HalEfiSetTime.c)
 *     HalpWriteCmosTime @ 0x1405184BC (HalpWriteCmosTime.c)
 *     HalpSetAcpiRealTimeClock @ 0x140908208 (HalpSetAcpiRealTimeClock.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x1409082EC (HalpUtcTimeToAcpiRealTime.c)
 */

BOOLEAN __fastcall HalSetRealTimeClock(TIME_FIELDS *a1)
{
  BOOLEAN result; // al
  __int64 v3; // rdx
  __int64 v4; // r8
  char v5; // bl
  int v6; // edi
  int v7; // ecx
  char v8; // al
  char v9; // cl
  LARGE_INTEGER LocalTime; // [rsp+20h] [rbp-28h] BYREF
  __int128 InputBuffer; // [rsp+28h] [rbp-20h] BYREF

  LocalTime.QuadPart = 0LL;
  InputBuffer = 0LL;
  result = RtlTimeFieldsToTime(a1, &LocalTime);
  if ( result )
  {
    if ( !ExpRealTimeIsUniversal )
      ExLocalTimeToSystemTime(&LocalTime, &LocalTime);
    if ( (HalpPlatformFlags & 4) != 0 )
    {
      HalpWriteCmosTime(a1);
      v5 = 1;
    }
    else
    {
      v5 = 0;
    }
    v6 = SystemPowerPhase;
    v7 = -1073741823;
    if ( KeGetCurrentIrql() >= 2u
      || SystemPowerPhase
      || (v7 = HalpUtcTimeToAcpiRealTime(&LocalTime, (PLARGE_INTEGER)&InputBuffer), v7 < 0)
      || (v7 = HalpSetAcpiRealTimeClock(&InputBuffer), v7 < 0) )
    {
      if ( v5 != 1 && HalFirmwareTypeEfi && v6 && (HalpPlatformFlags & 8) == 0 )
        v7 = HalEfiSetTime(&LocalTime);
    }
    if ( v7 >= 0 )
      v5 = 1;
    v8 = HalpSetVirtualRtc((__int64 *)&LocalTime, v3, v4);
    v9 = v5;
    if ( v8 )
      return 1;
    return v9;
  }
  return result;
}
