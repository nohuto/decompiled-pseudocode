/*
 * XREFs of CmpTryConvertRegistryExclusive @ 0x14086EC24
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140870B24 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     ExTryConvertSharedToExclusiveLite @ 0x1405B570C (ExTryConvertSharedToExclusiveLite.c)
 */

__int64 CmpTryConvertRegistryExclusive()
{
  return ExTryConvertSharedToExclusiveLite();
}
