/*
 * XREFs of PopNetIsCompliantNicPresent @ 0x1408EEA58
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14056B118 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

bool PopNetIsCompliantNicPresent()
{
  return PopNetCompliantNicCount != 0;
}
