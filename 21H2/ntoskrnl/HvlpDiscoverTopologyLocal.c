/*
 * XREFs of HvlpDiscoverTopologyLocal @ 0x14088E850
 * Callers:
 *     HvlEnlightenProcessor @ 0x1403A7998 (HvlEnlightenProcessor.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B6948 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpDiscoverTopologyWorker @ 0x14088E868 (HvlpDiscoverTopologyWorker.c)
 */

__int64 HvlpDiscoverTopologyLocal()
{
  return HvlpDiscoverTopologyWorker(0xFFFFFFFFLL);
}
