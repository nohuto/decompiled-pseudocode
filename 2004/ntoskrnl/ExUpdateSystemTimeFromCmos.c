/*
 * XREFs of ExUpdateSystemTimeFromCmos @ 0x14098CDE4
 * Callers:
 *     ExpTimeRefreshWork @ 0x14098CD60 (ExpTimeRefreshWork.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 *     KdpTimeSlipWork @ 0x1409B5FB0 (KdpTimeSlipWork.c)
 * Callees:
 *     ExLocalTimeToSystemTime @ 0x1403413B0 (ExLocalTimeToSystemTime.c)
 *     HalQueryRealTimeClock @ 0x1403413F0 (HalQueryRealTimeClock.c)
 *     RtlTimeFieldsToTime @ 0x140341780 (RtlTimeFieldsToTime.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled @ 0x1403EC714 (Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled.c)
 *     ExpSetSystemTime @ 0x140995C78 (ExpSetSystemTime.c)
 */

char __fastcall ExUpdateSystemTimeFromCmos(char a1, unsigned int a2)
{
  unsigned __int64 v4; // rbx
  char result; // al
  int v6; // edx
  unsigned __int64 v7; // rcx
  LARGE_INTEGER Time; // [rsp+30h] [rbp-30h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+38h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-20h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+48h] [rbp-18h] BYREF

  SystemTime.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled();
  if ( !a2 )
    a2 = ExpMaxTimeSeperationBeforeCorrect;
  v4 = 10000000LL * a2;
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
      v10 = MEMORY[0xFFFFF78000000014];
      if ( SystemTime.QuadPart <= MEMORY[0xFFFFF78000000014] )
        v7 = MEMORY[0xFFFFF78000000014] - SystemTime.QuadPart;
      else
        v7 = SystemTime.QuadPart - MEMORY[0xFFFFF78000000014];
      if ( v7 > v4 )
      {
        LOBYTE(v6) = a1;
        return ExpSetSystemTime(0, v6, 2, SystemTime.LowPart, (__int64)&v10);
      }
    }
  }
  return result;
}
