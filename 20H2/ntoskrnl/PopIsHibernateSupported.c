/*
 * XREFs of PopIsHibernateSupported @ 0x14071EE38
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403C4998 (PopCheckAndHandleThermalConditions.c)
 *     PopCaptureSleepStudyStatistics @ 0x14056EB48 (PopCaptureSleepStudyStatistics.c)
 *     PopPolicySystemIdle @ 0x14071E850 (PopPolicySystemIdle.c)
 *     PopIsDozeSupported @ 0x14071EDF8 (PopIsDozeSupported.c)
 *     PopVerifyPowerActionPolicy @ 0x1407879EC (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x140787B48 (PopVerifySystemPowerState.c)
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
