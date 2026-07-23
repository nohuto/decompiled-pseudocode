/*
 * XREFs of CmpConvertRegistryShared @ 0x14086EC08
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140870B24 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     ExConvertExclusiveToSharedLite @ 0x140230370 (ExConvertExclusiveToSharedLite.c)
 */

void CmpConvertRegistryShared()
{
  ExConvertExclusiveToSharedLite((PERESOURCE)&CmpRegistryLock);
}
