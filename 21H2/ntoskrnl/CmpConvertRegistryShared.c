/*
 * XREFs of CmpConvertRegistryShared @ 0x14086EAA8
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1408709C4 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     ExConvertExclusiveToSharedLite @ 0x1402B21C0 (ExConvertExclusiveToSharedLite.c)
 */

void CmpConvertRegistryShared()
{
  ExConvertExclusiveToSharedLite((PERESOURCE)&CmpRegistryLock);
}
