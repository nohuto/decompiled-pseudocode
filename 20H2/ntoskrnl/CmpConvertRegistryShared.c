/*
 * XREFs of CmpConvertRegistryShared @ 0x1408712A0
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140873194 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     ExConvertExclusiveToSharedLite @ 0x140364540 (ExConvertExclusiveToSharedLite.c)
 */

void CmpConvertRegistryShared()
{
  ExConvertExclusiveToSharedLite((PERESOURCE)&CmpRegistryLock);
}
