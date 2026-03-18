/*
 * XREFs of PopIsHibernateSupported @ 0x14070FAA8
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403C1368 (PopCheckAndHandleThermalConditions.c)
 *     PopCaptureSleepStudyStatistics @ 0x14056AAC8 (PopCaptureSleepStudyStatistics.c)
 *     PopPolicySystemIdle @ 0x14070E290 (PopPolicySystemIdle.c)
 *     PopIsDozeSupported @ 0x14070FA68 (PopIsDozeSupported.c)
 *     PopVerifyPowerActionPolicy @ 0x140776FDC (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x140777138 (PopVerifySystemPowerState.c)
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
