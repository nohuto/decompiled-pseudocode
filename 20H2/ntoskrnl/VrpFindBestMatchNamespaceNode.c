/*
 * XREFs of VrpFindBestMatchNamespaceNode @ 0x1405CFFC8
 * Callers:
 *     VrpCreateNamespaceNode @ 0x1405D0AB4 (VrpCreateNamespaceNode.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x1405D1F28 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindBestMatchNamespaceNode(int a1, int a2, __int64 a3)
{
  return VrpFindNamespaceNode(a1, a2, 1, 0, a3);
}
