/*
 * XREFs of CmpInitializeKeyNodeStack @ 0x14069F2B4
 * Callers:
 *     CmQueryLayeredKey @ 0x140226200 (CmQueryLayeredKey.c)
 *     CmSaveKey @ 0x14065A44C (CmSaveKey.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x14065B560 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpPromoteSubtree @ 0x14065B6A0 (CmpPromoteSubtree.c)
 *     CmpKeyEnumStackInitialize @ 0x14069F1F4 (CmpKeyEnumStackInitialize.c)
 *     CmpSubtreeEnumeratorInitialize @ 0x14091D24C (CmpSubtreeEnumeratorInitialize.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140920CA0 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140920F1C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140921F64 (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140922400 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140922984 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140922B20 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 */

__int64 __fastcall CmpInitializeKeyNodeStack(char *a1)
{
  char *v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  memset(a1, 0, 0x50uLL);
  v2 = a1 + 32;
  v3 = 2LL;
  do
  {
    *(_OWORD *)(v2 - 24) = 0LL;
    *(_OWORD *)(v2 - 8) = 0LL;
    *((_DWORD *)v2 - 4) = -1;
    result = HvpGetCellContextReinitialize(v2);
    v2 += 32;
    --v3;
  }
  while ( v3 );
  return result;
}
