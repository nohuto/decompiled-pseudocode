/*
 * XREFs of RtlTimeFieldsToTime @ 0x1403124F0
 * Callers:
 *     ExpRefreshSystemTime @ 0x14079EFDC (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x14079F494 (ExpRefreshTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x14079FC10 (RtlCutoverTimeToSystemTime.c)
 *     ExGetExpirationDate @ 0x1407A0760 (ExGetExpirationDate.c)
 *     HalpAcpiRealTimeToUtcTime @ 0x140866224 (HalpAcpiRealTimeToUtcTime.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408AD05C (PiDevCfgSplitDriverConfigurationId.c)
 *     NtSetSystemTime @ 0x14094E540 (NtSetSystemTime.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140992B74 (ExUpdateSystemTimeFromCmos.c)
 *     HaliSetWakeAlarm @ 0x14099B5E0 (HaliSetWakeAlarm.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x1403125F4 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 */

BOOLEAN __stdcall RtlTimeFieldsToTime(PTIME_FIELDS TimeFields, PLARGE_INTEGER Time)
{
  char *v2; // rdi
  BOOLEAN v3; // bl
  unsigned int v5; // ebp
  LONGLONG v6; // rax
  unsigned int v7; // r8d
  __int64 *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rdx
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF
  LONGLONG v13; // [rsp+40h] [rbp+18h] BYREF

  v2 = (char *)ExLeapSecondData;
  v3 = 0;
  v13 = 0LL;
  if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
    return RtlpTimeFieldsToTimeNoLeapSeconds(TimeFields, Time);
  v5 = *((_DWORD *)ExLeapSecondData + 1);
  _InterlockedOr(v12, 0);
  if ( (unsigned __int8)RtlpTimeFieldsToTimeNoLeapSeconds(TimeFields, &v13) )
  {
    v6 = v13;
    v7 = 0;
    if ( !v5 )
      goto LABEL_5;
    v9 = (__int64 *)(v2 + 8);
    while ( 1 )
    {
      v10 = *v9;
      if ( *v9 < 0 )
      {
        v11 = v10 & 0x7FFFFFFFFFFFFFFFLL;
        if ( v6 < v11 + 10000000 )
        {
          if ( v6 < v11 )
          {
LABEL_5:
            Time->QuadPart = v6;
            return 1;
          }
          return v3;
        }
        v6 -= 10000000LL;
      }
      else if ( v6 < v10 + 10000000 )
      {
        if ( v6 < v10 )
          goto LABEL_5;
        v6 = 2 * v6 - v10;
      }
      else
      {
        v6 += 10000000LL;
      }
      ++v7;
      ++v9;
      if ( v7 >= v5 )
        goto LABEL_5;
    }
  }
  return v3;
}
