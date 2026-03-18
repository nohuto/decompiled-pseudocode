/*
 * XREFs of CmpInitializeKeyNodeStack @ 0x1406BDE98
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmpKeyEnumStackInitialize @ 0x1406BDDE4 (CmpKeyEnumStackInitialize.c)
 *     CmSaveKey @ 0x14072513C (CmSaveKey.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140725CA0 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpSubtreeEnumeratorInitialize @ 0x140726768 (CmpSubtreeEnumeratorInitialize.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x14087CCF0 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x14087D2FC (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14087E22C (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x1408828C4 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140882FF4 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140883188 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall CmpInitializeKeyNodeStack(char *a1)
{
  char *v2; // rbx
  __int64 result; // rax

  memset(a1, 0, 0x50uLL);
  v2 = a1 + 32;
  result = 2LL;
  do
  {
    *((_QWORD *)v2 - 3) = 0LL;
    *(_QWORD *)(v2 - 12) = 0LL;
    *((_DWORD *)v2 - 1) = 0;
    *((_DWORD *)v2 - 4) = -1;
    *(_QWORD *)v2 = 0LL;
    *(_DWORD *)v2 = -1;
    *((_WORD *)v2 + 2) = 0;
    v2 += 32;
    --result;
  }
  while ( result );
  return result;
}
