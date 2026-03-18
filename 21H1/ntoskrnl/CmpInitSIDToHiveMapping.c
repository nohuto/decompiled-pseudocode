/*
 * XREFs of CmpInitSIDToHiveMapping @ 0x1407BF434
 * Callers:
 *     CmInitSystem1 @ 0x140A525D4 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x1402DF510 (KeInitializeGuardedMutex.c)
 */

void CmpInitSIDToHiveMapping()
{
  KeInitializeGuardedMutex(&CmpSIDMappingLock);
}
