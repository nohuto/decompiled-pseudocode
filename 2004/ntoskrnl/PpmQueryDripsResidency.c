/*
 * XREFs of PpmQueryDripsResidency @ 0x140561F00
 * Callers:
 *     <none>
 * Callees:
 *     PpmQueryPlatformStateResidency @ 0x140561F1C (PpmQueryPlatformStateResidency.c)
 */

__int64 PpmQueryDripsResidency()
{
  return PpmQueryPlatformStateResidency((unsigned int)dword_140C4FE80);
}
