/*
 * XREFs of HvlpDiscoverTopologyWorker @ 0x1408912C8
 * Callers:
 *     HvlpDiscoverTopologyLocal @ 0x1408912B0 (HvlpDiscoverTopologyLocal.c)
 *     HvlpDiscoverTopologyComplete @ 0x140A921E4 (HvlpDiscoverTopologyComplete.c)
 * Callees:
 *     HvlpDiscoverTopologyAmd @ 0x140A920C4 (HvlpDiscoverTopologyAmd.c)
 *     HvlpDiscoverTopologyIntel @ 0x140A92300 (HvlpDiscoverTopologyIntel.c)
 */

__int64 HvlpDiscoverTopologyWorker()
{
  __int64 result; // rax

  if ( HvlpCpuVendor == 1 )
    return HvlpDiscoverTopologyAmd();
  if ( HvlpCpuVendor == 2 )
    return HvlpDiscoverTopologyIntel();
  return result;
}
