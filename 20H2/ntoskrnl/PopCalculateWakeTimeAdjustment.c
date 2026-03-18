/*
 * XREFs of PopCalculateWakeTimeAdjustment @ 0x1408E913C
 * Callers:
 *     PopValidateRTCWake @ 0x14099B40C (PopValidateRTCWake.c)
 * Callees:
 *     PopPowerTransitionTimesInMs @ 0x140382340 (PopPowerTransitionTimesInMs.c)
 */

unsigned __int64 PopCalculateWakeTimeAdjustment()
{
  unsigned __int64 result; // rax
  unsigned int v1; // [rsp+40h] [rbp+8h] BYREF

  result = 0LL;
  v1 = 0;
  if ( dword_140C23320 == 4 )
  {
    if ( !PoResumeFromHibernate )
    {
      PopPowerTransitionTimesInMs(0LL, 0LL, 0LL, 0LL, &v1, 0LL);
      return v1;
    }
  }
  else if ( !PoResumeFromHibernate )
  {
    return result;
  }
  return qword_140C23968 / (unsigned __int64)qword_140C23930;
}
