/*
 * XREFs of PopNetCheckOpportunisticDs @ 0x14078A63C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14056EB48 (PopCaptureSleepStudyStatistics.c)
 *     PopPowerAggregatorCachePoPolicy @ 0x14078A5AC (PopPowerAggregatorCachePoPolicy.c)
 * Callees:
 *     PopIsRemoteDesktopEnabled @ 0x1408E3AD4 (PopIsRemoteDesktopEnabled.c)
 */

bool PopNetCheckOpportunisticDs()
{
  char v0; // bl

  v0 = 0;
  if ( dword_140C23D98 == 2 && !PopNetBIRequestActive )
    return (unsigned __int8)PopIsRemoteDesktopEnabled() == 0;
  return v0;
}
