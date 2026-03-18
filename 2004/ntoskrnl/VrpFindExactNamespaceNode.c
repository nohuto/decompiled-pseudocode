/*
 * XREFs of VrpFindExactNamespaceNode @ 0x1405CAB5C
 * Callers:
 *     VrpDestroyNamespaceNode @ 0x1405CA6A0 (VrpDestroyNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x1405CA81C (VrpAddNamespaceNodeToList.c)
 *     VrpPostEnumerateKey @ 0x1405CABE4 (VrpPostEnumerateKey.c)
 *     VrpPreUnloadKey @ 0x140881070 (VrpPreUnloadKey.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x1405CB8C8 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindExactNamespaceNode(int a1, int a2, int a3)
{
  return VrpFindNamespaceNode(a1, a2, 0, a3, 0LL);
}
