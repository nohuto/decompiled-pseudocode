/*
 * XREFs of IoGetFileObjectGenericMapping @ 0x1406BA3C0
 * Callers:
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1404EAD18 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     VfUtilIsLocalSystem @ 0x1409C97F4 (VfUtilIsLocalSystem.c)
 * Callees:
 *     <none>
 */

PGENERIC_MAPPING IoGetFileObjectGenericMapping(void)
{
  return (PGENERIC_MAPPING)&IopFileMapping;
}
