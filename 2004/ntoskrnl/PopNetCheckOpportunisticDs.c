/*
 * XREFs of PopNetCheckOpportunisticDs @ 0x14077C03C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14056B118 (PopCaptureSleepStudyStatistics.c)
 *     PopPowerAggregatorCachePoPolicy @ 0x14077BFAC (PopPowerAggregatorCachePoPolicy.c)
 * Callees:
 *     PopIsRemoteDesktopEnabled @ 0x1408DDC94 (PopIsRemoteDesktopEnabled.c)
 */

bool PopNetCheckOpportunisticDs()
{
  char v0; // bl

  v0 = 0;
  if ( dword_140C238F8 == 2 && !PopNetBIRequestActive )
    return (unsigned __int8)PopIsRemoteDesktopEnabled() == 0;
  return v0;
}
