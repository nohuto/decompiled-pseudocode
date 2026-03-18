/*
 * XREFs of CmpInitSIDToHiveMapping @ 0x140865370
 * Callers:
 *     CmInitSystem1 @ 0x140B15F88 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x1402E0710 (KeInitializeGuardedMutex.c)
 */

void CmpInitSIDToHiveMapping()
{
  KeInitializeGuardedMutex(&CmpSIDMappingLock);
}
