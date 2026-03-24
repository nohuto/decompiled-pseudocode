/*
 * XREFs of IoGetFileObjectGenericMapping @ 0x140693B60
 * Callers:
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1404EC8A8 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     VfUtilIsLocalSystem @ 0x1409C67E4 (VfUtilIsLocalSystem.c)
 * Callees:
 *     <none>
 */

PGENERIC_MAPPING IoGetFileObjectGenericMapping(void)
{
  return (PGENERIC_MAPPING)&IopFileMapping;
}
