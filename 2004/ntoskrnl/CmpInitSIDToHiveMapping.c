/*
 * XREFs of CmpInitSIDToHiveMapping @ 0x1407C2994
 * Callers:
 *     CmInitSystem1 @ 0x140A582D4 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x140273520 (KeInitializeGuardedMutex.c)
 */

void CmpInitSIDToHiveMapping()
{
  KeInitializeGuardedMutex(&CmpSIDMappingLock);
}
