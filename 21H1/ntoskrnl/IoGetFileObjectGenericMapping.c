/*
 * XREFs of IoGetFileObjectGenericMapping @ 0x1406C3300
 * Callers:
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1404E7130 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     VfUtilIsLocalSystem @ 0x1409C37C4 (VfUtilIsLocalSystem.c)
 * Callees:
 *     <none>
 */

PGENERIC_MAPPING IoGetFileObjectGenericMapping(void)
{
  return (PGENERIC_MAPPING)&IopFileMapping;
}
