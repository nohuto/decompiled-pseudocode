/*
 * XREFs of CmpTryConvertRegistryExclusive @ 0x1408712BC
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140873194 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     ExTryConvertSharedToExclusiveLite @ 0x1405B3ADC (ExTryConvertSharedToExclusiveLite.c)
 */

__int64 CmpTryConvertRegistryExclusive()
{
  return ExTryConvertSharedToExclusiveLite();
}
