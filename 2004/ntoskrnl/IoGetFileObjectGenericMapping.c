/*
 * XREFs of IoGetFileObjectGenericMapping @ 0x1406E3880
 * Callers:
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1404E776C (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     VfUtilIsLocalSystem @ 0x1409C37D4 (VfUtilIsLocalSystem.c)
 * Callees:
 *     <none>
 */

PGENERIC_MAPPING IoGetFileObjectGenericMapping(void)
{
  return (PGENERIC_MAPPING)&IopFileMapping;
}
