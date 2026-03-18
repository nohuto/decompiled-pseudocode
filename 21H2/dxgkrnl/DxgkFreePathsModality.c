/*
 * XREFs of DxgkFreePathsModality @ 0x1C01E9DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C018A1E0 (-BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

void __fastcall DxgkFreePathsModality(struct D3DKMT_GETPATHSMODALITY *a1)
{
  BmlFreePathsModality(a1);
}
