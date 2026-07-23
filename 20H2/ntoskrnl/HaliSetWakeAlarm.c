/*
 * XREFs of HaliSetWakeAlarm @ 0x14099B5E0
 * Callers:
 *     <none>
 * Callees:
 *     HalQueryRealTimeClock @ 0x140312160 (HalQueryRealTimeClock.c)
 *     RtlTimeFieldsToTime @ 0x1403124F0 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x14036E6A0 (RtlTimeToTimeFields.c)
 *     DbgPrintEx @ 0x14037EFE0 (DbgPrintEx.c)
 *     HalpSetWakeAlarm @ 0x1404C0334 (HalpSetWakeAlarm.c)
 *     HalpArmAcpiWakeAlarm @ 0x140774ED8 (HalpArmAcpiWakeAlarm.c)
 */

__int64 __fastcall HaliSetWakeAlarm(unsigned __int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rdi
  signed __int64 v3; // rbx
  __int64 v5; // rcx
  _TIME_FIELDS TimeFields; // [rsp+30h] [rbp-18h] BYREF
  LARGE_INTEGER Time; // [rsp+50h] [rbp+8h] BYREF

  Time.QuadPart = 0LL;
  HalpWakeupState = 1;
  TimeFields = 0LL;
  if ( a1 )
  {
    if ( MEMORY[0xFFFFF78000000008] >= a1 || (v2 = (a1 - MEMORY[0xFFFFF78000000008]) / 0x989680, v2 < 30) )
    {
      LODWORD(v2) = 30;
    }
    else if ( v2 >= 0xFFFFFFFFLL )
    {
      LODWORD(v2) = -2;
    }
  }
  else
  {
    LODWORD(v2) = -1;
  }
  if ( a2 )
  {
    if ( MEMORY[0xFFFFF78000000008] >= a2 || (v3 = (a2 - MEMORY[0xFFFFF78000000008]) / 0x989680, v3 < 30) )
    {
      LODWORD(v3) = 30;
    }
    else if ( v3 >= 0xFFFFFFFFLL )
    {
      LODWORD(v3) = -2;
    }
  }
  else
  {
    LODWORD(v3) = -1;
  }
  DbgPrintEx(0x65u, 3u, "HAL: Wake in %lu seconds on AC and in %lu seconds on DC\n", v2, v3);
  if ( (int)HalpArmAcpiWakeAlarm() >= 0 )
    return 0LL;
  if ( (HalpPlatformFlags & 4) == 0 )
    return 3221225473LL;
  if ( (unsigned int)v2 >= (unsigned int)v3 )
    LODWORD(v2) = v3;
  if ( (unsigned int)v2 == 0xFFFFFFFFLL )
    return 0LL;
  if ( !HalQueryRealTimeClock((__int64)&TimeFields) )
    return 3221225473LL;
  RtlTimeFieldsToTime(&TimeFields, &Time);
  Time.QuadPart += 10000000LL * (unsigned int)v2;
  RtlTimeToTimeFields(&Time, &TimeFields);
  HIBYTE(HalpWakeupState) = 1;
  xmmword_140C491E2 = (__int128)TimeFields;
  return HalpSetWakeAlarm(v5, (unsigned __int8 *)&TimeFields);
}
