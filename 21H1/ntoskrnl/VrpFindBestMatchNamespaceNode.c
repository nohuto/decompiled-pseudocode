/*
 * XREFs of VrpFindBestMatchNamespaceNode @ 0x1405C8A38
 * Callers:
 *     VrpCreateNamespaceNode @ 0x1405C9524 (VrpCreateNamespaceNode.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x1405CA4F8 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindBestMatchNamespaceNode(int a1, int a2, __int64 a3)
{
  return VrpFindNamespaceNode(a1, a2, 1, 0, a3);
}
