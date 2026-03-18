/*
 * XREFs of DxgkFreePathsModality @ 0x1C0168BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0132034 (-BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

void __fastcall DxgkFreePathsModality(struct D3DKMT_GETPATHSMODALITY *a1)
{
  BmlFreePathsModality(a1);
}
