/*
 * XREFs of CmpInitSIDToHiveMapping @ 0x1407D5614
 * Callers:
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x1402EE570 (KeInitializeGuardedMutex.c)
 */

void CmpInitSIDToHiveMapping()
{
  KeInitializeGuardedMutex(&CmpSIDMappingLock);
}
