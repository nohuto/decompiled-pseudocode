/*
 * XREFs of PopNetCheckOpportunisticDs @ 0x140779C2C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14056AAC8 (PopCaptureSleepStudyStatistics.c)
 *     PopPowerAggregatorCachePoPolicy @ 0x140779B9C (PopPowerAggregatorCachePoPolicy.c)
 * Callees:
 *     PopIsRemoteDesktopEnabled @ 0x1408DC924 (PopIsRemoteDesktopEnabled.c)
 */

bool PopNetCheckOpportunisticDs()
{
  char v0; // bl

  v0 = 0;
  if ( dword_140C23F18 == 2 && !PopNetBIRequestActive )
    return (unsigned __int8)PopIsRemoteDesktopEnabled() == 0;
  return v0;
}
