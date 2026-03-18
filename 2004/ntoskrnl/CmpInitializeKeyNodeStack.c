/*
 * XREFs of CmpInitializeKeyNodeStack @ 0x1406E9520
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmpKeyEnumStackInitialize @ 0x1406E946C (CmpKeyEnumStackInitialize.c)
 *     CmSaveKey @ 0x14071717C (CmSaveKey.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140717CE0 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpSubtreeEnumeratorInitialize @ 0x1407187A8 (CmpSubtreeEnumeratorInitialize.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140877174 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140877780 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x1408786BC (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14087CD14 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14087D444 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14087D5D8 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
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
