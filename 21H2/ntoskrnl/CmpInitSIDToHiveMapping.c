/*
 * XREFs of CmpInitSIDToHiveMapping @ 0x1407D5784
 * Callers:
 *     CmInitSystem1 @ 0x140A5AF78 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x1402F92C0 (KeInitializeGuardedMutex.c)
 */

void CmpInitSIDToHiveMapping()
{
  KeInitializeGuardedMutex(&CmpSIDMappingLock);
}
