/*
 * XREFs of DxgkQueryAdapterInfo @ 0x1C018C4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018C4C0 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkQueryAdapterInfo(const struct _D3DKMT_QUERYADAPTERINFO *a1)
{
  return DxgkQueryAdapterInfoImpl(a1, 1u, 0LL);
}
