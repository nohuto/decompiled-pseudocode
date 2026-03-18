/*
 * XREFs of VrpFindExactNamespaceNode @ 0x1405C978C
 * Callers:
 *     VrpDestroyNamespaceNode @ 0x1405C92D0 (VrpDestroyNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x1405C944C (VrpAddNamespaceNodeToList.c)
 *     VrpPostEnumerateKey @ 0x1405C9814 (VrpPostEnumerateKey.c)
 *     VrpPreUnloadKey @ 0x14087FD80 (VrpPreUnloadKey.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x1405CA4F8 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindExactNamespaceNode(int a1, int a2, int a3)
{
  return VrpFindNamespaceNode(a1, a2, 0, a3, 0LL);
}
