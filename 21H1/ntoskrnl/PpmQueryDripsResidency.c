/*
 * XREFs of PpmQueryDripsResidency @ 0x1405618B0
 * Callers:
 *     <none>
 * Callees:
 *     PpmQueryPlatformStateResidency @ 0x1405618CC (PpmQueryPlatformStateResidency.c)
 */

__int64 PpmQueryDripsResidency()
{
  return PpmQueryPlatformStateResidency((unsigned int)dword_140C4FFC0);
}
