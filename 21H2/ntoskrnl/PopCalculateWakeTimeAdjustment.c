/*
 * XREFs of PopCalculateWakeTimeAdjustment @ 0x1408052DC
 * Callers:
 *     PopValidateRTCWake @ 0x140A519DC (PopValidateRTCWake.c)
 * Callees:
 *     PpmConvertTime @ 0x14029394C (PpmConvertTime.c)
 *     PopPowerTransitionTimesInMs @ 0x14038B488 (PopPowerTransitionTimesInMs.c)
 */

unsigned __int64 PopCalculateWakeTimeAdjustment()
{
  unsigned __int64 result; // rax
  unsigned int v1; // [rsp+40h] [rbp+8h] BYREF

  result = 0LL;
  v1 = 0;
  if ( dword_140C227E0 == 4 )
  {
    if ( !PoResumeFromHibernate )
    {
      PopPowerTransitionTimesInMs(0LL, 0LL, 0LL, 0LL, (__int64)&v1, 0LL);
      return v1;
    }
  }
  else if ( !PoResumeFromHibernate )
  {
    return result;
  }
  return PpmConvertTime(qword_140C22E28, PopQpcFrequency, 0x3E8uLL);
}
