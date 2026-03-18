/*
 * XREFs of PopNetIsCompliantNicPresent @ 0x1408ED768
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14056AAC8 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

bool PopNetIsCompliantNicPresent()
{
  return PopNetCompliantNicCount != 0;
}
