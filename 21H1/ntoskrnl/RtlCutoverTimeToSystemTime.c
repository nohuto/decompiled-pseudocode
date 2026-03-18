/*
 * XREFs of RtlCutoverTimeToSystemTime @ 0x140790AB0
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140790534 (ExpRefreshTimeZoneInformation.c)
 *     ExInitializeUtcTimeZoneBias @ 0x140A70080 (ExInitializeUtcTimeZoneBias.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x1402019B0 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x14036CDF0 (RtlTimeToTimeFields.c)
 */

bool __fastcall RtlCutoverTimeToSystemTime(PTIME_FIELDS TimeFields, PLARGE_INTEGER Time, PLARGE_INTEGER a3)
{
  __int16 Day; // r14
  __int16 Month; // cx
  __int16 Weekday; // r15
  __int16 v8; // bx
  __int16 Milliseconds; // ax
  __int16 v10; // si
  __int16 v11; // r15
  TIME_FIELDS TimeFieldsa; // [rsp+20h] [rbp-20h] BYREF
  TIME_FIELDS v14; // [rsp+30h] [rbp-10h] BYREF
  LARGE_INTEGER Timea; // [rsp+70h] [rbp+30h] BYREF

  TimeFieldsa = 0LL;
  RtlTimeToTimeFields(a3, &TimeFieldsa);
  if ( !TimeFields->Year )
  {
    Day = TimeFields->Day;
    Timea.QuadPart = 0LL;
    v14 = 0LL;
    if ( Day <= 5 )
    {
      if ( Day )
      {
        Month = TimeFields->Month;
        Weekday = TimeFields->Weekday;
        v8 = 1;
        TimeFieldsa.Hour = TimeFields->Hour;
        TimeFieldsa.Minute = TimeFields->Minute;
        TimeFieldsa.Second = TimeFields->Second;
        Milliseconds = TimeFields->Milliseconds;
        TimeFieldsa.Month = Month;
        TimeFieldsa.Milliseconds = Milliseconds;
        TimeFieldsa.Day = 1;
        TimeFieldsa.Weekday = 0;
        if ( RtlTimeFieldsToTime(&TimeFieldsa, &Timea) )
        {
          RtlTimeToTimeFields(&Timea, &v14);
          if ( v14.Weekday <= Weekday )
          {
            v10 = 1;
            if ( v14.Weekday >= Weekday )
            {
LABEL_8:
              v11 = 1;
              if ( Day > 1 )
              {
                do
                {
                  v8 += 7;
                  TimeFieldsa.Day = v8;
                  if ( !RtlTimeFieldsToTime(&TimeFieldsa, &Timea) )
                    break;
                  RtlTimeToTimeFields(&Timea, &v14);
                  v10 = v14.Day;
                  ++v11;
                }
                while ( v11 < Day );
              }
              TimeFieldsa.Day = v10;
              if ( RtlTimeFieldsToTime(&TimeFieldsa, &Timea) )
              {
                *Time = Timea;
                return 1;
              }
              return 0;
            }
            v8 = Weekday - v14.Weekday + 1;
          }
          else
          {
            v8 = Weekday - v14.Weekday + 8;
          }
          v10 = v8;
          goto LABEL_8;
        }
      }
    }
    return 0;
  }
  return RtlTimeFieldsToTime(TimeFields, Time) != 0;
}
