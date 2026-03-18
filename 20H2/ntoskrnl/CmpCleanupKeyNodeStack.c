/*
 * XREFs of CmpCleanupKeyNodeStack @ 0x1406BDD50
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmpKeyEnumStackCleanup @ 0x1406BDC48 (CmpKeyEnumStackCleanup.c)
 *     CmSaveKey @ 0x14072513C (CmSaveKey.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140725D90 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x14087CCF0 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x14087D2FC (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14087E22C (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x1408828C4 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140882FF4 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140883188 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1406BDDC0 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
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
