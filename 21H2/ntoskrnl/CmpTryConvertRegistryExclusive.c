/*
 * XREFs of CmpTryConvertRegistryExclusive @ 0x14086EAC4
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1408709C4 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     ExTryConvertSharedToExclusiveLite @ 0x1405B54DC (ExTryConvertSharedToExclusiveLite.c)
 */

__int64 CmpTryConvertRegistryExclusive()
{
  return ExTryConvertSharedToExclusiveLite();
}
