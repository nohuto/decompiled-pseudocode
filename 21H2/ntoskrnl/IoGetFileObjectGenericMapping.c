/*
 * XREFs of IoGetFileObjectGenericMapping @ 0x1406AD3F0
 * Callers:
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14053EFBC (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     DifIoGetFileObjectGenericMappingWrapper @ 0x14060F6E0 (DifIoGetFileObjectGenericMappingWrapper.c)
 *     VfUtilIsLocalSystem @ 0x140A81DB4 (VfUtilIsLocalSystem.c)
 * Callees:
 *     <none>
 */

PGENERIC_MAPPING IoGetFileObjectGenericMapping(void)
{
  return (PGENERIC_MAPPING)&IopFileMapping;
}
