/*
 * XREFs of ExUpdateSystemTimeFromCmos @ 0x14098B2E0
 * Callers:
 *     ExpTimeRefreshWork @ 0x14098B3D0 (ExpTimeRefreshWork.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 *     KdpTimeSlipWork @ 0x1409B5FB0 (KdpTimeSlipWork.c)
 * Callees:
 *     ExLocalTimeToSystemTime @ 0x140201810 (ExLocalTimeToSystemTime.c)
 *     HalQueryRealTimeClock @ 0x140201830 (HalQueryRealTimeClock.c)
 *     RtlTimeFieldsToTime @ 0x1402019B0 (RtlTimeFieldsToTime.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ExpSetSystemTime @ 0x140994638 (ExpSetSystemTime.c)
 */

char __fastcall ExUpdateSystemTimeFromCmos(char a1, unsigned int a2)
{
  unsigned __int64 v3; // rbx
  char result; // al
  int v5; // edx
  unsigned __int64 v6; // rcx
  LARGE_INTEGER Time; // [rsp+30h] [rbp-30h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+38h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-20h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+48h] [rbp-18h] BYREF

  SystemTime.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  if ( !a2 )
    a2 = ExpMaxTimeSeperationBeforeCorrect;
  v3 = 10000000LL * a2;
  result = HalQueryRealTimeClock((__int64)&TimeFields);
  if ( result )
  {
    result = RtlTimeFieldsToTime(&TimeFields, &Time);
    if ( result )
    {
      if ( ExpRealTimeIsUniversal )
        SystemTime = Time;
      else
        ExLocalTimeToSystemTime(&Time, &SystemTime);
      result = MEMORY[0xFFFFF78000000014];
      v9 = MEMORY[0xFFFFF78000000014];
      if ( SystemTime.QuadPart <= MEMORY[0xFFFFF78000000014] )
        v6 = MEMORY[0xFFFFF78000000014] - SystemTime.QuadPart;
      else
        v6 = SystemTime.QuadPart - MEMORY[0xFFFFF78000000014];
      if ( v6 > v3 )
      {
        LOBYTE(v5) = a1;
        return ExpSetSystemTime(0, v5, 2, SystemTime.LowPart, (__int64)&v9);
      }
    }
  }
  return result;
}
