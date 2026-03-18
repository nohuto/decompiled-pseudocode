/*
 * XREFs of PpmQueryDripsResidency @ 0x1405658E0
 * Callers:
 *     <none>
 * Callees:
 *     PpmQueryPlatformStateResidency @ 0x1405658FC (PpmQueryPlatformStateResidency.c)
 */

__int64 PpmQueryDripsResidency()
{
  return PpmQueryPlatformStateResidency((unsigned int)dword_140C4FF00);
}
