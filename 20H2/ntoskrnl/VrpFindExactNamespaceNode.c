/*
 * XREFs of VrpFindExactNamespaceNode @ 0x1405D0D1C
 * Callers:
 *     VrpDestroyNamespaceNode @ 0x1405D0860 (VrpDestroyNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x1405D09DC (VrpAddNamespaceNodeToList.c)
 *     VrpPostEnumerateKey @ 0x1405D0DA4 (VrpPostEnumerateKey.c)
 *     VrpPreUnloadKey @ 0x140886BC0 (VrpPreUnloadKey.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x1405D1F28 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindExactNamespaceNode(int a1, int a2, int a3)
{
  return VrpFindNamespaceNode(a1, a2, 0, a3, 0LL);
}
