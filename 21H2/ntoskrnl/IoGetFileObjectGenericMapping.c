/*
 * XREFs of IoGetFileObjectGenericMapping @ 0x1405F30C0
 * Callers:
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1404ECAE8 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     VfUtilIsLocalSystem @ 0x1409C77E4 (VfUtilIsLocalSystem.c)
 * Callees:
 *     <none>
 */

PGENERIC_MAPPING IoGetFileObjectGenericMapping(void)
{
  return (PGENERIC_MAPPING)&IopFileMapping;
}
