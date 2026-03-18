/*
 * XREFs of CmpCleanupKcbStack @ 0x140626070
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1404E78C8 (CmDeleteLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405CDD00 (CmpEnumerateLayeredKey.c)
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061C310 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmpPerformUnloadKey @ 0x14065A0C0 (CmpPerformUnloadKey.c)
 *     CmpSetKeySecurity @ 0x14068AE1C (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x1406ED80C (CmpStartSiloRegistryNamespace.c)
 *     CmSaveKey @ 0x140714DEC (CmSaveKey.c)
 *     CmpAssignKeySecurity @ 0x1407BA790 (CmpAssignKeySecurity.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1408696D8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140869B94 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 */

void __fastcall CmpCleanupKcbStack(__int64 a1)
{
  struct _PRIVILEGE_SET *v1; // rcx

  v1 = *(struct _PRIVILEGE_SET **)(a1 + 24);
  if ( v1 )
    CmSiFreeMemory(v1);
}
