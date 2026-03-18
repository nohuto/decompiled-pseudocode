/*
 * XREFs of CmpCleanupKeyNodeStack @ 0x1406C8D18
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmpKeyEnumStackCleanup @ 0x1406C8C10 (CmpKeyEnumStackCleanup.c)
 *     CmSaveKey @ 0x140714DEC (CmSaveKey.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140715A40 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140875E84 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140876490 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x1408773CC (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14087BA24 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14087C154 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14087C2E8 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1406C8D88 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpCleanupKeyNodeStack(__int64 a1)
{
  __int16 i; // bx
  _QWORD *EntryAtLayerHeight; // rax
  struct _PRIVILEGE_SET *v4; // rcx

  for ( i = 0; i <= *(__int16 *)a1; ++i )
  {
    EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1);
    if ( EntryAtLayerHeight[2] )
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*EntryAtLayerHeight + 16LL))(
        *EntryAtLayerHeight,
        EntryAtLayerHeight + 3);
  }
  v4 = *(struct _PRIVILEGE_SET **)(a1 + 72);
  if ( v4 )
    CmSiFreeMemory(v4);
}
