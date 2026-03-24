/*
 * XREFs of CmpCleanupKcbStack @ 0x1406FB360
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A78 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1404ED078 (CmDeleteLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405D8520 (CmpEnumerateLayeredKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405EEA70 (CmpGetSymbolicLinkTarget.c)
 *     CmSetValueKey @ 0x1406646C0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x140666544 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14066B9F4 (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x14066DF0C (CmpSetKeySecurity.c)
 *     CmpStartSiloRegistryNamespace @ 0x1406C39CC (CmpStartSiloRegistryNamespace.c)
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 *     CmpPerformUnloadKey @ 0x14071A1B8 (CmpPerformUnloadKey.c)
 *     CmSaveKey @ 0x140728BCC (CmSaveKey.c)
 *     CmpAssignKeySecurity @ 0x1407D0450 (CmpAssignKeySecurity.c)
 *     CmRenameKey @ 0x14086CA04 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14086DC78 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086E13C (CmSetLastWriteTimeKey.c)
 *     CmpDoBuildVirtualStack @ 0x14086FF9C (CmpDoBuildVirtualStack.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 */

void __fastcall CmpCleanupKcbStack(__int64 a1)
{
  struct _PRIVILEGE_SET *v1; // rcx

  v1 = *(struct _PRIVILEGE_SET **)(a1 + 24);
  if ( v1 )
    CmSiFreeMemory(v1);
}
