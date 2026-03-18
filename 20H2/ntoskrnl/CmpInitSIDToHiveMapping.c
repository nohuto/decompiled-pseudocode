/*
 * XREFs of CmpInitSIDToHiveMapping @ 0x1407D1194
 * Callers:
 *     CmInitSystem1 @ 0x140A58954 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x140240260 (KeInitializeGuardedMutex.c)
 */

void CmpInitSIDToHiveMapping()
{
  KeInitializeGuardedMutex(&CmpSIDMappingLock);
}
