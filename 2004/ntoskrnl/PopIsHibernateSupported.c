/*
 * XREFs of PopIsHibernateSupported @ 0x1406A615C
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403C2228 (PopCheckAndHandleThermalConditions.c)
 *     PopCaptureSleepStudyStatistics @ 0x14056B118 (PopCaptureSleepStudyStatistics.c)
 *     PopIsDozeSupported @ 0x1406A611C (PopIsDozeSupported.c)
 *     PopPolicySystemIdle @ 0x1406A6300 (PopPolicySystemIdle.c)
 *     PopVerifyPowerActionPolicy @ 0x1407793EC (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x140779548 (PopVerifySystemPowerState.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopIsHibernateSupported(_BYTE *a1)
{
  bool result; // al

  result = 0;
  if ( a1[6] )
  {
    if ( a1[8] )
      return a1[22] == 2;
  }
  return result;
}
